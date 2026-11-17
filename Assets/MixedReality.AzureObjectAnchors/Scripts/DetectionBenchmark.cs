// Detection benchmark for the VisionAssist automatic-detection condition.
//
// Measures, on the HoloLens 2, with a (Bluetooth) keyboard:
//   1. Detection time  - time from the moment the object first enters the display's
//                        field of view (computed from head pose) until its overlay appears.
//   2. Overlay persistence after the object is moved - time from the operator's key press
//                        ("chair moved") until the old overlay disappears, plus the time until
//                        the object is re-detected at its new position.
//
// Keys:
//   SPACE      start a detection trial (clears current overlays, starts recording head pose)
//   M          the object was just moved -> start a move trial (needs a current overlay)
//   ENTER      end the current move trial now (e.g. old overlay never disappears)
//   X          abort the current trial (logged with outcome=aborted)
//   1 / 2 / 3  distance condition label (near / mid / far)
//   A / B / C  view-angle condition label
//   H          show / hide the operator HUD
//
// Output (Device Portal > File explorer > LocalAppData > <app> > LocalState > DetectionBenchmark):
//   detection_trials_<session>.csv, move_trials_<session>.csv, events_<session>.csv, headpose_<session>.csv

using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Microsoft.Azure.ObjectAnchors.Unity.Sample
{
    public class DetectionBenchmark : MonoBehaviour
    {
        [Header("Session")]
        [Tooltip("Free text written to every row, e.g. room / lux / notes.")]
        public string SessionNote = "";

        [Tooltip("Only count detections of models whose file name contains this text (case-insensitive). Empty = any model.")]
        public string TargetModelNameContains = "chair";

        [Header("Condition labels")]
        public string[] DistanceLabels = { "near", "mid", "far" };
        public string[] ViewLabels = { "A", "B", "C" };

        [Header("Trial settings")]
        [Tooltip("A detection trial without a detection is ended after this many seconds.")]
        public float DetectionTimeoutSeconds = 180f;

        [Tooltip("A move trial is ended after this many seconds.")]
        public float MoveTimeoutSeconds = 180f;

        [Tooltip("A new detection counts as 'at the new position' if it is at least this far (m) from the old one.")]
        public float MinMoveDistance = 0.3f;

        [Tooltip("Head pose is written to headpose.csv at most this often (s). 0 = every frame.")]
        public float HeadPoseLogInterval = 0f;

        [Header("HUD")]
        public bool ShowHud = true;
        public Font HudFont;
        public Material HudMaterial;
        public Vector3 HudOffset = new Vector3(0f, -0.12f, 1.2f);

        [Header("Audio cues")]
        public bool PlayBeeps = true;

        // ------------------------------------------------------------------ clock
        private static readonly System.Diagnostics.Stopwatch Clock = System.Diagnostics.Stopwatch.StartNew();
        private static double Now => Clock.Elapsed.TotalSeconds;

        // ------------------------------------------------------------------ state
        private enum Phase { Idle, Detecting, Moving }
        private Phase _phase = Phase.Idle;

        private enum ServiceEventType { Added, Updated, Removed }

        private struct ServiceEvent
        {
            public ServiceEventType Type;
            public double Time;
            public IObjectAnchorsServiceEventArgs Args;
        }

        private struct PoseSample
        {
            public double Time;
            public Vector3 Position;
            public Quaternion Rotation;
        }

        private class InstanceInfo
        {
            public Guid InstanceId;
            public Guid ModelId;
            public Vector3 Center;          // world position of the object's logical center
            public Quaternion Orientation;
            public Vector3 Extents;         // model bounding box extents (model frame)
            public bool HasPose;
        }

        private readonly ConcurrentQueue<ServiceEvent> _events = new ConcurrentQueue<ServiceEvent>();
        private IObjectAnchorsService _service;
        private Camera _camera;

        private string _sessionId;
        private string _dir;
        private StreamWriter _detectCsv, _moveCsv, _eventCsv, _poseCsv;
        private double _lastPoseLogTime = -1;
        private double _lastFlush;

        private int _distanceIndex = 0;
        private int _viewIndex = 0;
        private int _trialCounter = 0;

        // Overlays currently visible (instance id -> first frame time it was seen)
        private readonly Dictionary<Guid, double> _visibleOverlays = new Dictionary<Guid, double>();

        // ---- detection trial
        private double _trialStart;
        private readonly List<PoseSample> _poseBuffer = new List<PoseSample>();
        private readonly HashSet<Guid> _ignoredInstances = new HashSet<Guid>();
        private InstanceInfo _detected;
        private double _detectEventTime = -1;
        private double _detectOverlayTime = -1;
        private float _detectCoverage;

        // ---- move trial
        private double _moveKeyTime;
        private readonly Dictionary<Guid, InstanceInfo> _moveOld = new Dictionary<Guid, InstanceInfo>();
        private double _oldRemovedEventTime = -1;
        private double _oldOverlayGoneTime = -1;
        private double _oldServiceRelocatedTime = -1;
        private InstanceInfo _moveNew;
        private double _newEventTime = -1;
        private double _newOverlayTime = -1;
        private double _oldPositionRedetectTime = -1;

        // ---- HUD / audio
        private TextMesh _hud;
        private string _lastResult = "";
        private AudioSource _audio;
        private AudioClip _beepHigh, _beepLow, _beepStart;

        // ================================================================== lifecycle
        private void Start()
        {
            _camera = Camera.main;
            _sessionId = DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss", CultureInfo.InvariantCulture);
            _dir = Path.Combine(Application.persistentDataPath, "DetectionBenchmark");
            Directory.CreateDirectory(_dir);

            _detectCsv = OpenCsv("detection_trials",
                "session,trial,distance_cond,view_cond,outcome,model,instance," +
                "t_trial_start,t_detect_event,t_overlay_shown," +
                "t_first_center_in_view,t_last_entry_center_in_view,t_first_any_in_view," +
                "detection_time_s,detection_time_from_last_entry_s,detection_time_from_any_in_view_s,time_from_trial_start_s," +
                "center_in_view_at_detection,head_distance_m,horizontal_distance_m,view_azimuth_deg,gaze_offset_deg,surface_coverage," +
                "obj_x,obj_y,obj_z,head_x,head_y,head_z,note");
            _moveCsv = OpenCsv("move_trials",
                "session,trial,distance_cond,view_cond,outcome,model,old_instance,new_instance," +
                "t_move_key,t_old_removed_event,t_old_overlay_gone,t_old_service_relocated,t_new_detect_event,t_new_overlay_shown,t_redetect_at_old_position," +
                "old_overlay_persistence_s,new_detection_latency_s,old_service_relocated_s,move_distance_m," +
                "new_center_in_view_at_detection,head_distance_to_new_m," +
                "old_x,old_y,old_z,new_x,new_y,new_z,note");
            _eventCsv = OpenCsv("events", "session,t,trial,phase,event,instance,model,x,y,z,coverage,detail");
            _poseCsv = OpenCsv("headpose", "session,t,trial,phase,x,y,z,qx,qy,qz,qw");

            _service = ObjectAnchorsService.GetService();
            if (_service != null)
            {
                _service.ObjectAdded += (s, e) => _events.Enqueue(new ServiceEvent { Type = ServiceEventType.Added, Time = Now, Args = e });
                _service.ObjectUpdated += (s, e) => _events.Enqueue(new ServiceEvent { Type = ServiceEventType.Updated, Time = Now, Args = e });
                _service.ObjectRemoved += (s, e) => _events.Enqueue(new ServiceEvent { Type = ServiceEventType.Removed, Time = Now, Args = e });
            }
            else
            {
                Debug.LogError("[DetectionBenchmark] AOA service not available.");
            }

            CreateHud();
            CreateAudio();
            LogEvent("session_start", Guid.Empty, Guid.Empty, null, 0, $"dir={_dir}");
            Debug.Log($"[DetectionBenchmark] logging to {_dir}");
        }

        private void OnDestroy() => CloseFiles();
        private void OnApplicationQuit() => CloseFiles();

        private void OnApplicationPause(bool paused)
        {
            if (paused) FlushAll();
        }

        private void Update()
        {
            if (_camera == null) _camera = Camera.main;
            double now = Now;

            RecordHeadPose(now);
            HandleKeys(now);
            ProcessServiceEvents();
            TrackOverlays(now);
            CheckTrialProgress(now);
            UpdateHud(now);

            if (now - _lastFlush > 1.0)
            {
                FlushAll();
                _lastFlush = now;
            }
        }

        // ================================================================== input
        private void HandleKeys(double now)
        {
            if (Input.GetKeyDown(KeyCode.Space)) StartDetectionTrial(now);
            if (Input.GetKeyDown(KeyCode.M)) StartMoveTrial(now);
            if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.KeypadEnter))
            {
                if (_phase == Phase.Moving) FinishMoveTrial(now, "ended_by_operator");
            }
            if (Input.GetKeyDown(KeyCode.X)) AbortTrial(now);
            if (Input.GetKeyDown(KeyCode.H)) ShowHud = !ShowHud;

            if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Keypad1)) SetDistance(0);
            if (Input.GetKeyDown(KeyCode.Alpha2) || Input.GetKeyDown(KeyCode.Keypad2)) SetDistance(1);
            if (Input.GetKeyDown(KeyCode.Alpha3) || Input.GetKeyDown(KeyCode.Keypad3)) SetDistance(2);
            if (Input.GetKeyDown(KeyCode.A)) SetView(0);
            if (Input.GetKeyDown(KeyCode.B)) SetView(1);
            if (Input.GetKeyDown(KeyCode.C)) SetView(2);
        }

        private void SetDistance(int i)
        {
            if (i < DistanceLabels.Length) { _distanceIndex = i; LogEvent("cond_distance", Guid.Empty, Guid.Empty, null, 0, DistanceLabels[i]); }
        }

        private void SetView(int i)
        {
            if (i < ViewLabels.Length) { _viewIndex = i; LogEvent("cond_view", Guid.Empty, Guid.Empty, null, 0, ViewLabels[i]); }
        }

        private string DistanceLabel => _distanceIndex < DistanceLabels.Length ? DistanceLabels[_distanceIndex] : "";
        private string ViewLabel => _viewIndex < ViewLabels.Length ? ViewLabels[_viewIndex] : "";

        // ================================================================== detection trial
        private void StartDetectionTrial(double now)
        {
            if (_phase != Phase.Idle) AbortTrial(now);

            _trialCounter++;
            _phase = Phase.Detecting;
            _trialStart = now;
            _poseBuffer.Clear();
            _ignoredInstances.Clear();
            _detected = null;
            _detectEventTime = -1;
            _detectOverlayTime = -1;

            // Clear every existing detection so the object has to be found again.
            var tracker = ObjectTracker.Instance;
            if (tracker != null && _service != null)
            {
                foreach (var to in tracker.TrackedObjects.ToList())
                {
                    if (to == null) continue;
                    Guid id = to.TrackedObjectState.InstanceId;
                    _ignoredInstances.Add(id);
                    try { _service.RemoveObjectInstance(id); }
                    catch (Exception ex) { Debug.LogWarning($"[DetectionBenchmark] RemoveObjectInstance failed: {ex.Message}"); }
                }
            }

            LogEvent("detect_trial_start", Guid.Empty, Guid.Empty, null, 0, $"cleared={_ignoredInstances.Count}");
            Beep(_beepStart);
            _lastResult = $"Trial {_trialCounter}: searching...";
        }

        private void OnDetectionTrialObjectAdded(ServiceEvent ev, InstanceInfo info)
        {
            if (_detected != null || _ignoredInstances.Contains(info.InstanceId) || ev.Time < _trialStart) return;
            if (!ModelMatches(info.ModelId)) return;

            _detected = info;
            _detectEventTime = ev.Time;
            _detectCoverage = ev.Args.SurfaceCoverage;
        }

        private void FinishDetectionTrial(double now, string outcome)
        {
            var sb = new StringBuilder();
            Append(sb, _sessionId, _trialCounter, DistanceLabel, ViewLabel, outcome);

            if (_detected != null && _detected.HasPose)
            {
                double tDetect = _detectOverlayTime >= 0 ? _detectOverlayTime : _detectEventTime;
                double firstCenter = -1, lastEntryCenter = -1, firstAny = -1;
                bool prevIn = false;
                foreach (var p in _poseBuffer)
                {
                    if (p.Time > tDetect) break;
                    bool centerIn = PointInView(p.Position, p.Rotation, _detected.Center);
                    bool anyIn = centerIn || AnyCornerInView(p.Position, p.Rotation, _detected);
                    if (centerIn && firstCenter < 0) firstCenter = p.Time;
                    if (centerIn && !prevIn) lastEntryCenter = p.Time;
                    if (anyIn && firstAny < 0) firstAny = p.Time;
                    prevIn = centerIn;
                }

                var pose = PoseAt(tDetect);
                Vector3 toObj = _detected.Center - pose.Position;
                Vector3 horiz = new Vector3(toObj.x, 0, toObj.z);
                float gazeOffset = Vector3.Angle(pose.Rotation * Vector3.forward, toObj);
                bool inViewAtDetect = PointInView(pose.Position, pose.Rotation, _detected.Center);

                // Azimuth of the viewer around the object, relative to the object's own forward axis.
                Vector3 objFwd = _detected.Orientation * Vector3.forward; objFwd.y = 0;
                Vector3 objToHead = -horiz;
                float azimuth = objFwd.sqrMagnitude > 1e-6f && objToHead.sqrMagnitude > 1e-6f
                    ? Vector3.SignedAngle(objFwd, objToHead, Vector3.up) : float.NaN;

                Append(sb, ModelName(_detected.ModelId), _detected.InstanceId,
                    T(_trialStart), T(_detectEventTime), T(_detectOverlayTime),
                    T(firstCenter), T(lastEntryCenter), T(firstAny),
                    Diff(tDetect, firstCenter), Diff(tDetect, lastEntryCenter), Diff(tDetect, firstAny), Diff(tDetect, _trialStart),
                    inViewAtDetect ? 1 : 0, toObj.magnitude, horiz.magnitude, azimuth, gazeOffset, _detectCoverage,
                    _detected.Center.x, _detected.Center.y, _detected.Center.z,
                    pose.Position.x, pose.Position.y, pose.Position.z, SessionNote);

                string dt = firstCenter >= 0 ? $"{tDetect - firstCenter:F2}s after in view" : "before entering view";
                _lastResult = $"Trial {_trialCounter}: detected {dt} ({tDetect - _trialStart:F1}s after start, {toObj.magnitude:F1} m)";
            }
            else
            {
                Append(sb, "", "", T(_trialStart), "", "", "", "", "", "", "", "", Diff(now, _trialStart),
                    "", "", "", "", "", "", "", "", "", "", "", "", SessionNote);
                _lastResult = $"Trial {_trialCounter}: {outcome}";
            }

            WriteRow(_detectCsv, sb);
            LogEvent("detect_trial_end", _detected?.InstanceId ?? Guid.Empty, _detected?.ModelId ?? Guid.Empty, _detected?.Center, 0, outcome);
            _phase = Phase.Idle;
        }

        // ================================================================== move trial
        private void StartMoveTrial(double now)
        {
            if (_phase == Phase.Detecting)
            {
                _lastResult = "Finish the detection trial first";
                return;
            }
            if (_phase == Phase.Moving) AbortTrial(now);

            _moveOld.Clear();
            var tracker = ObjectTracker.Instance;
            if (tracker != null)
            {
                foreach (var to in tracker.TrackedObjects)
                {
                    if (to == null) continue;
                    var info = InfoFromTrackedObject(to);
                    if (info != null && ModelMatches(info.ModelId)) _moveOld[info.InstanceId] = info;
                }
            }

            if (_moveOld.Count == 0)
            {
                _lastResult = "No overlay to move - detect the object first";
                LogEvent("move_trial_rejected", Guid.Empty, Guid.Empty, null, 0, "no current overlay");
                return;
            }

            _trialCounter++;
            _phase = Phase.Moving;
            _moveKeyTime = now;
            _oldRemovedEventTime = _oldOverlayGoneTime = _oldServiceRelocatedTime = -1;
            _newEventTime = _newOverlayTime = _oldPositionRedetectTime = -1;
            _moveNew = null;

            LogEvent("move_trial_start", _moveOld.Keys.First(), _moveOld.Values.First().ModelId, _moveOld.Values.First().Center, 0, $"old_instances={_moveOld.Count}");
            Beep(_beepStart);
            _lastResult = $"Trial {_trialCounter}: object moved, timing...";
        }

        private void FinishMoveTrial(double now, string outcome)
        {
            var old = _moveOld.Values.FirstOrDefault();
            var sb = new StringBuilder();
            float moveDist = (old != null && _moveNew != null) ? Vector3.Distance(old.Center, _moveNew.Center) : float.NaN;
            var poseNew = PoseAt(_newOverlayTime >= 0 ? _newOverlayTime : (_newEventTime >= 0 ? _newEventTime : now));
            bool newInView = _moveNew != null && PointInView(poseNew.Position, poseNew.Rotation, _moveNew.Center);
            double tOldGone = _oldOverlayGoneTime >= 0 ? _oldOverlayGoneTime : _oldRemovedEventTime;
            double tNew = _newOverlayTime >= 0 ? _newOverlayTime : _newEventTime;

            Append(sb, _sessionId, _trialCounter, DistanceLabel, ViewLabel, outcome,
                old != null ? ModelName(old.ModelId) : "", old?.InstanceId.ToString() ?? "", _moveNew?.InstanceId.ToString() ?? "",
                T(_moveKeyTime), T(_oldRemovedEventTime), T(_oldOverlayGoneTime), T(_oldServiceRelocatedTime),
                T(_newEventTime), T(_newOverlayTime), T(_oldPositionRedetectTime),
                Diff(tOldGone, _moveKeyTime), Diff(tNew, _moveKeyTime), Diff(_oldServiceRelocatedTime, _moveKeyTime), moveDist,
                _moveNew != null ? (newInView ? "1" : "0") : "",
                _moveNew != null ? (object)Vector3.Distance(poseNew.Position, _moveNew.Center) : "",
                old != null ? (object)old.Center.x : "", old != null ? (object)old.Center.y : "", old != null ? (object)old.Center.z : "",
                _moveNew != null ? (object)_moveNew.Center.x : "", _moveNew != null ? (object)_moveNew.Center.y : "", _moveNew != null ? (object)_moveNew.Center.z : "",
                SessionNote);
            WriteRow(_moveCsv, sb);
            LogEvent("move_trial_end", Guid.Empty, Guid.Empty, null, 0, outcome);

            string persist = tOldGone >= 0 ? $"old overlay gone after {tOldGone - _moveKeyTime:F1}s" : "old overlay still shown";
            string redetect = tNew >= 0 ? $", new detection after {tNew - _moveKeyTime:F1}s" : ", not re-detected";
            _lastResult = $"Trial {_trialCounter}: {persist}{redetect}";
            _phase = Phase.Idle;
        }

        // ================================================================== shared trial logic
        private void AbortTrial(double now)
        {
            if (_phase == Phase.Detecting) FinishDetectionTrial(now, "aborted");
            else if (_phase == Phase.Moving) FinishMoveTrial(now, "aborted");
        }

        private void CheckTrialProgress(double now)
        {
            if (_phase == Phase.Detecting)
            {
                if (_detected != null && _detectOverlayTime >= 0)
                {
                    FinishDetectionTrial(now, "detected");
                    Beep(_beepHigh);
                }
                else if (_detected != null && now - _detectEventTime > 2.0)
                {
                    // Service reported the object but no overlay appeared within 2 s.
                    FinishDetectionTrial(now, "detected_no_overlay");
                    Beep(_beepHigh);
                }
                else if (now - _trialStart > DetectionTimeoutSeconds)
                {
                    FinishDetectionTrial(now, "timeout");
                    Beep(_beepLow);
                }
            }
            else if (_phase == Phase.Moving)
            {
                bool oldGone = _oldOverlayGoneTime >= 0;
                bool newFound = _newOverlayTime >= 0;
                if (oldGone && newFound)
                {
                    FinishMoveTrial(now, "complete");
                    Beep(_beepHigh);
                }
                else if (now - _moveKeyTime > MoveTimeoutSeconds)
                {
                    FinishMoveTrial(now, oldGone ? "timeout_not_redetected" : (newFound ? "timeout_old_overlay_persists" : "timeout"));
                    Beep(_beepLow);
                }
            }
        }

        private void ProcessServiceEvents()
        {
            while (_events.TryDequeue(out var ev))
            {
                var info = InfoFromArgs(ev.Args);
                string type = ev.Type.ToString().ToLowerInvariant();
                LogEventAt(ev.Time, "aoa_" + type, info.InstanceId, info.ModelId, info.HasPose ? (Vector3?)info.Center : null, ev.Args.SurfaceCoverage, ModelName(info.ModelId));

                switch (ev.Type)
                {
                    case ServiceEventType.Added:
                        if (_phase == Phase.Detecting) OnDetectionTrialObjectAdded(ev, info);
                        else if (_phase == Phase.Moving) OnMoveTrialObjectAdded(ev, info);
                        break;

                    case ServiceEventType.Updated:
                        if (_phase == Phase.Moving && _moveOld.TryGetValue(info.InstanceId, out var oldInfo) &&
                            _oldServiceRelocatedTime < 0 && info.HasPose && Vector3.Distance(oldInfo.Center, info.Center) >= MinMoveDistance)
                        {
                            // AOA moved the old instance itself (the overlay does not follow updates in this app).
                            _oldServiceRelocatedTime = ev.Time;
                        }
                        break;

                    case ServiceEventType.Removed:
                        if (_phase == Phase.Moving && _moveOld.ContainsKey(info.InstanceId) && _oldRemovedEventTime < 0)
                        {
                            _oldRemovedEventTime = ev.Time;
                        }
                        break;
                }
            }
        }

        private void OnMoveTrialObjectAdded(ServiceEvent ev, InstanceInfo info)
        {
            if (_moveOld.ContainsKey(info.InstanceId) || !ModelMatches(info.ModelId) || !info.HasPose) return;

            float minDistToOld = _moveOld.Values.Where(o => o.HasPose).Select(o => Vector3.Distance(o.Center, info.Center)).DefaultIfEmpty(float.MaxValue).Min();
            if (minDistToOld >= MinMoveDistance)
            {
                if (_moveNew == null)
                {
                    _moveNew = info;
                    _newEventTime = ev.Time;
                }
            }
            else if (_oldPositionRedetectTime < 0)
            {
                // A new instance close to the old position (object not really moved, or stale data).
                _oldPositionRedetectTime = ev.Time;
            }
        }

        // Watches the overlay GameObjects created by ObjectTracker: this is what the user actually sees.
        private void TrackOverlays(double now)
        {
            var tracker = ObjectTracker.Instance;
            if (tracker == null) return;

            var current = new HashSet<Guid>();
            foreach (var to in tracker.TrackedObjects)
            {
                if (to == null) continue;
                Guid id = to.TrackedObjectState.InstanceId;
                current.Add(id);
                if (!_visibleOverlays.ContainsKey(id))
                {
                    _visibleOverlays[id] = now;
                    LogEventAt(now, "overlay_shown", id, to.TrackedObjectState.ModelId, null, 0, "");

                    if (_phase == Phase.Detecting && _detected != null && id == _detected.InstanceId && _detectOverlayTime < 0)
                        _detectOverlayTime = now;
                    if (_phase == Phase.Moving && _moveNew != null && id == _moveNew.InstanceId && _newOverlayTime < 0)
                        _newOverlayTime = now;
                }
            }

            foreach (var id in _visibleOverlays.Keys.Where(k => !current.Contains(k)).ToList())
            {
                _visibleOverlays.Remove(id);
                LogEventAt(now, "overlay_gone", id, Guid.Empty, null, 0, "");

                if (_phase == Phase.Moving && _moveOld.ContainsKey(id) && _oldOverlayGoneTime < 0 &&
                    _moveOld.Keys.All(k => !current.Contains(k)))
                {
                    _oldOverlayGoneTime = now;
                }
            }

            // The new overlay may have been registered before _moveNew was set in the same frame.
            if (_phase == Phase.Moving && _moveNew != null && _newOverlayTime < 0 && current.Contains(_moveNew.InstanceId))
                _newOverlayTime = now;
            if (_phase == Phase.Detecting && _detected != null && _detectOverlayTime < 0 && current.Contains(_detected.InstanceId))
                _detectOverlayTime = now;
        }

        // ================================================================== geometry
        private void RecordHeadPose(double now)
        {
            if (_camera == null) return;
            var t = _camera.transform;
            var sample = new PoseSample { Time = now, Position = t.position, Rotation = t.rotation };

            if (_phase == Phase.Detecting) _poseBuffer.Add(sample);

            if (HeadPoseLogInterval <= 0 || now - _lastPoseLogTime >= HeadPoseLogInterval)
            {
                _lastPoseLogTime = now;
                var sb = new StringBuilder();
                Append(sb, _sessionId, T(now), _phase == Phase.Idle ? 0 : _trialCounter, _phase,
                    t.position.x, t.position.y, t.position.z, t.rotation.x, t.rotation.y, t.rotation.z, t.rotation.w);
                WriteRow(_poseCsv, sb);
            }
        }

        private PoseSample PoseAt(double time)
        {
            for (int i = _poseBuffer.Count - 1; i >= 0; i--)
            {
                if (_poseBuffer[i].Time <= time) return _poseBuffer[i];
            }
            var t = _camera != null ? _camera.transform : transform;
            return new PoseSample { Time = time, Position = t.position, Rotation = t.rotation };
        }

        // True if the world point projects inside the display's view frustum for the given head pose.
        private bool PointInView(Vector3 headPos, Quaternion headRot, Vector3 point)
        {
            Vector3 local = Quaternion.Inverse(headRot) * (point - headPos);
            if (local.z <= 0.05f) return false;
            Matrix4x4 proj = _camera != null ? _camera.projectionMatrix : Matrix4x4.Perspective(30f, 1.5f, 0.1f, 100f);
            float tanHalfH = 1f / proj[0, 0];
            float tanHalfV = 1f / proj[1, 1];
            return Mathf.Abs(local.x / local.z) <= tanHalfH && Mathf.Abs(local.y / local.z) <= tanHalfV;
        }

        private bool AnyCornerInView(Vector3 headPos, Quaternion headRot, InstanceInfo info)
        {
            if (info.Extents == Vector3.zero) return false;
            Vector3 h = info.Extents * 0.5f;
            for (int i = 0; i < 8; i++)
            {
                Vector3 c = new Vector3((i & 1) == 0 ? -h.x : h.x, (i & 2) == 0 ? -h.y : h.y, (i & 4) == 0 ? -h.z : h.z);
                if (PointInView(headPos, headRot, info.Center + info.Orientation * c)) return true;
            }
            return false;
        }

        private InstanceInfo InfoFromArgs(IObjectAnchorsServiceEventArgs e)
        {
            var info = new InstanceInfo { InstanceId = e.InstanceId, ModelId = e.ModelId };
            ObjectAnchorsLocation? loc = null;
            try { loc = e.Location; } catch (Exception) { }
            if (loc.HasValue)
            {
                info.HasPose = true;
                info.Orientation = loc.Value.Orientation;
                info.Center = loc.Value.Position;
                try
                {
                    var bb = _service?.GetModelBoundingBox(e.ModelId);
                    if (bb.HasValue)
                    {
                        info.Center = loc.Value.Position + loc.Value.Orientation * bb.Value.Center;
                        info.Orientation = loc.Value.Orientation * bb.Value.Orientation;
                        info.Extents = bb.Value.Extents;
                    }
                }
                catch (Exception) { }
            }
            return info;
        }

        private InstanceInfo InfoFromTrackedObject(TrackedObject to)
        {
            var state = to.TrackedObjectState;
            var info = new InstanceInfo { InstanceId = state.InstanceId, ModelId = state.ModelId };
            if (to.LogicalCenter != null)
            {
                info.HasPose = true;
                info.Center = to.LogicalCenter.transform.position;
                info.Orientation = to.LogicalCenter.transform.rotation;
            }
            else if (state.Location.HasValue)
            {
                info.HasPose = true;
                info.Center = state.Location.Value.Position;
                info.Orientation = state.Location.Value.Orientation;
            }
            var bb = state.BaseLogicalBoundingBox;
            if (bb.HasValue) info.Extents = bb.Value.Extents;
            return info;
        }

        private bool ModelMatches(Guid modelId)
        {
            if (string.IsNullOrEmpty(TargetModelNameContains)) return true;
            return ModelName(modelId).IndexOf(TargetModelNameContains, StringComparison.OrdinalIgnoreCase) >= 0;
        }

        private readonly Dictionary<Guid, string> _modelNames = new Dictionary<Guid, string>();

        private string ModelName(Guid modelId)
        {
            if (modelId == Guid.Empty) return "";
            if (_modelNames.TryGetValue(modelId, out var name)) return name;
            var loader = TrackableObjectDataLoader.Instance;
            var data = loader?.TrackableObjects?.FirstOrDefault(d => d.ModelId == modelId);
            if (data == null) return modelId.ToString();
            name = Path.GetFileNameWithoutExtension(data.ModelFilePath);
            _modelNames[modelId] = name;
            return name;
        }

        // ================================================================== HUD + audio
        private void CreateHud()
        {
            var go = new GameObject("DetectionBenchmark HUD");
            _hud = go.AddComponent<TextMesh>();
            _hud.anchor = TextAnchor.UpperCenter;
            _hud.alignment = TextAlignment.Center;
            _hud.characterSize = 0.0045f;
            _hud.fontSize = 48;
            _hud.color = new Color(0.4f, 1f, 0.6f, 1f);
            if (HudFont != null) _hud.font = HudFont;
            var mr = go.GetComponent<MeshRenderer>();
            if (HudMaterial != null) mr.sharedMaterial = HudMaterial;
            else if (_hud.font != null) mr.sharedMaterial = _hud.font.material;
        }

        private void UpdateHud(double now)
        {
            if (_hud == null) return;
            _hud.gameObject.SetActive(ShowHud && _camera != null);
            if (!ShowHud || _camera == null) return;

            var t = _camera.transform;
            _hud.transform.position = t.position + t.rotation * HudOffset;
            _hud.transform.rotation = t.rotation;

            string status;
            switch (_phase)
            {
                case Phase.Detecting: status = $"DETECTING  {now - _trialStart:F1}s"; break;
                case Phase.Moving:
                    status = $"MOVED  {now - _moveKeyTime:F1}s  old:{(_oldOverlayGoneTime >= 0 ? "gone" : "shown")}  new:{(_newOverlayTime >= 0 ? "found" : "-")}";
                    break;
                default: status = "READY  [Space] detect  [M] moved"; break;
            }
            _hud.text = $"{status}\ndist {DistanceLabel}  view {ViewLabel}  trials {_trialCounter}  overlays {_visibleOverlays.Count}\n{_lastResult}";
        }

        private void CreateAudio()
        {
            _audio = gameObject.AddComponent<AudioSource>();
            _audio.playOnAwake = false;
            _audio.spatialBlend = 0f;
            _beepStart = MakeTone("start", 660f, 0.08f);
            _beepHigh = MakeTone("high", 1320f, 0.15f);
            _beepLow = MakeTone("low", 330f, 0.3f);
        }

        private static AudioClip MakeTone(string name, float freq, float seconds)
        {
            const int rate = 44100;
            int n = Mathf.CeilToInt(rate * seconds);
            var data = new float[n];
            for (int i = 0; i < n; i++)
            {
                float env = Mathf.Min(1f, Mathf.Min(i, n - i) / (rate * 0.01f));
                data[i] = 0.4f * env * Mathf.Sin(2f * Mathf.PI * freq * i / rate);
            }
            var clip = AudioClip.Create(name, n, 1, rate, false);
            clip.SetData(data, 0);
            return clip;
        }

        private void Beep(AudioClip clip)
        {
            if (PlayBeeps && _audio != null && clip != null) _audio.PlayOneShot(clip);
        }

        // ================================================================== CSV
        private StreamWriter OpenCsv(string name, string header)
        {
            var w = new StreamWriter(Path.Combine(_dir, $"{name}_{_sessionId}.csv"), false, new UTF8Encoding(false));
            w.WriteLine(header);
            return w;
        }

        private void LogEvent(string evt, Guid instance, Guid model, Vector3? pos, float coverage, string detail)
            => LogEventAt(Now, evt, instance, model, pos, coverage, detail);

        private void LogEventAt(double t, string evt, Guid instance, Guid model, Vector3? pos, float coverage, string detail)
        {
            var sb = new StringBuilder();
            Append(sb, _sessionId, T(t), _phase == Phase.Idle ? 0 : _trialCounter, _phase, evt,
                instance == Guid.Empty ? "" : instance.ToString(), model == Guid.Empty ? "" : model.ToString(),
                pos.HasValue ? (object)pos.Value.x : "", pos.HasValue ? (object)pos.Value.y : "", pos.HasValue ? (object)pos.Value.z : "",
                coverage, detail);
            WriteRow(_eventCsv, sb);
        }

        private static string T(double t) => t >= 0 ? t.ToString("F4", CultureInfo.InvariantCulture) : "";
        private static string Diff(double a, double b) => (a >= 0 && b >= 0) ? (a - b).ToString("F4", CultureInfo.InvariantCulture) : "";

        private static void Append(StringBuilder sb, params object[] values)
        {
            foreach (var v in values)
            {
                if (sb.Length > 0) sb.Append(',');
                string s;
                switch (v)
                {
                    case null: s = ""; break;
                    case float f: s = float.IsNaN(f) ? "" : f.ToString("F4", CultureInfo.InvariantCulture); break;
                    case double d: s = double.IsNaN(d) ? "" : d.ToString("F4", CultureInfo.InvariantCulture); break;
                    case IFormattable fm: s = fm.ToString(null, CultureInfo.InvariantCulture); break;
                    default: s = v.ToString(); break;
                }
                if (s.IndexOfAny(new[] { ',', '"', '\n' }) >= 0) s = "\"" + s.Replace("\"", "\"\"") + "\"";
                sb.Append(s);
            }
        }

        private static void WriteRow(StreamWriter w, StringBuilder sb)
        {
            if (w == null) return;
            try { w.WriteLine(sb.ToString()); } catch (ObjectDisposedException) { }
        }

        private void FlushAll()
        {
            foreach (var w in new[] { _detectCsv, _moveCsv, _eventCsv, _poseCsv })
            {
                try { w?.Flush(); } catch (ObjectDisposedException) { }
            }
        }

        private void CloseFiles()
        {
            if (_phase != Phase.Idle) AbortTrial(Now);
            foreach (var w in new[] { _detectCsv, _moveCsv, _eventCsv, _poseCsv })
            {
                try { w?.Dispose(); } catch (Exception) { }
            }
            _detectCsv = _moveCsv = _eventCsv = _poseCsv = null;
        }
    }
}
