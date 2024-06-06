// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.Azure.ObjectAnchors.Unity.Sample
{
    /// <summary>
    /// Attempts to control the search area bounding box to 
    /// discover objects. This script is assumed to be attached
    /// to the bounding box with the SearchAreaController script.
    /// </summary>
    /// 
    [RequireComponent(typeof(SearchAreaController))]
    public class AutonomousSearchArea : MonoBehaviour
    {
        private const float RefineBoxStartingSizeMultiplier = 1.10f;
        private const float CoarseDetectionMinSurfaceCoverageMultiplier = 0.6f;

        private IObjectAnchorsService _objectAnchorsService;
        private SearchAreaController _searchAreaController;
        private ObjectTracker _objectTracker;
        private int _lastQueryFrame = 0;
        public bool AreaRefinementEnabled { get; set; } = false;

        void Start()
        {
            _objectAnchorsService = ObjectAnchorsService.GetService();
            _objectTracker = ObjectTracker.Instance;
        }

        private void OnEnable()
        {
            _searchAreaController = GetComponent<SearchAreaController>();
        }

        void Update()
        {
            if (_objectAnchorsService.Status == ObjectAnchorsServiceStatus.Paused ||
                _objectTracker.QueryActive || _objectTracker.QueryQueued)
            {
                return;
            }

            if (Time.frameCount - _lastQueryFrame > 60)
            {
                _lastQueryFrame = Time.frameCount;
                if (_objectTracker.TrackedObjectCount <= 5 )
                {
                    // If no objects are found, do a global query within the fixed search area.
                    UpdateBoxForGlobalQuery();
                }
                else if (AreaRefinementEnabled)
                {
                    // If objects are found and refinement is enabled, refine the box.
                    RefineBox();
                }
            }
        }

        private void UpdateBoxForGlobalQuery()
        {
            Debug.Log("Performing global search");
            _objectTracker.QueueQueriesInBounds(_searchAreaController.SearchArea);
        }

        private void RefineBox()
        {
            // Scan the tracked objects and refine the box around those that need better coverage.
            //maximum of 2 times per object
            foreach (TrackedObject to in _objectTracker.TrackedObjects)
            {
                float desiredMinimumCoverage = to.TrackedObjectState.BaseModelData.UseCustomParameters ?
                    to.TrackedObjectState.BaseModelData.MinSurfaceCoverage :
                    to.TrackedObjectState.BaseModelData.MinSurfaceCoverageFromObjectModel;

                float minimumCoarseCoverage = desiredMinimumCoverage * CoarseDetectionMinSurfaceCoverageMultiplier;

                if (to.TrackedObjectState.SurfaceCoverage >= desiredMinimumCoverage)
                {
                    // Coverage is good enough
                    //log the coverage
                    Debug.Log("Coverage is good enough for  with coverage " + to.TrackedObjectState.SurfaceCoverage);
                }
                else if (to.TrackedObjectState.SurfaceCoverage >= minimumCoarseCoverage)
                {
                    //debug log the surface and minimum
                    Debug.Log("Coverage is not good enough for  with coverage " + to.TrackedObjectState.SurfaceCoverage + " and minimum " + desiredMinimumCoverage);
                    // Refine the box and queue a new query
                    // ObjectAnchorsBoundingBox? bb = to.TrackedObjectState.BaseLogicalBoundingBox;

                    // if (bb.HasValue)
                    // {
                    //     _searchAreaController.UpdateBoxTransform(
                    //        to.TrackedObjectState.Location.Value.Orientation * bb.Value.Center + to.TrackedObjectState.Location.Value.Position,
                    //        to.TrackedObjectState.Location.Value.Orientation * bb.Value.Orientation,
                    //        bb.Value.Extents * RefineBoxStartingSizeMultiplier);

                    //     _objectTracker.QueueQueriesInBounds(_searchAreaController.SearchArea);
                    // }
                }
            }
        }

        /// <summary>
        /// Places the search box around the specified object.
        /// </summary>
        /// <param name="trackedObject">The object to place the search box around</param>
        private void WrapBoxAroundObject(TrackedObject trackedObject)
        {
            if (trackedObject != null)
            {
                ObjectAnchorsBoundingBox? bb = trackedObject.TrackedObjectState.BaseLogicalBoundingBox;
                if (bb.HasValue)
                {

//debug log what we doi
                    Debug.Log("Wrapping box around ");

                    _searchAreaController.UpdateBoxTransform(
                        trackedObject.TrackedObjectState.Location.Value.Orientation * bb.Value.Center + trackedObject.TrackedObjectState.Location.Value.Position,
                        trackedObject.TrackedObjectState.Location.Value.Orientation * bb.Value.Orientation,
                        bb.Value.Extents);
                }
            }
        }
    }
}
