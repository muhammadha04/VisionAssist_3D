using System.IO;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    /// <summary>
    /// Unity 2019.4 generates UWP C++ projects for the VS 2019 toolset (v142). VS 2022 no longer
    /// ships the v142 UWP build tools, so after every UWP build this rewrites the generated
    /// .vcxproj files to use the VS 2022 toolset (v143). No manual "Retarget solution" needed.
    /// </summary>
    public static class RetargetUwpToolset
    {
        private const string TargetToolset = "v143";
        private static readonly Regex ToolsetRegex = new Regex(@"<PlatformToolset>v14[0-2]</PlatformToolset>");

        [PostProcessBuild(1000)]
        public static void OnPostprocessBuild(BuildTarget target, string pathToBuiltProject)
        {
            if (target != BuildTarget.WSAPlayer || string.IsNullOrEmpty(pathToBuiltProject)) return;

            string root = Directory.Exists(pathToBuiltProject) ? pathToBuiltProject : Path.GetDirectoryName(pathToBuiltProject);
            if (string.IsNullOrEmpty(root) || !Directory.Exists(root)) return;

            int changed = 0;
            foreach (string file in Directory.GetFiles(root, "*.vcxproj", SearchOption.AllDirectories))
            {
                string text = File.ReadAllText(file);
                string updated = ToolsetRegex.Replace(text, $"<PlatformToolset>{TargetToolset}</PlatformToolset>");
                updated = FixExtensionSdkReferences(updated);
                if (updated != text)
                {
                    File.WriteAllText(file, updated);
                    changed++;
                }
            }

            Debug.Log($"[RetargetUwpToolset] Set PlatformToolset={TargetToolset} in {changed} project(s) under {root}");
        }

        private static readonly Regex SdkReferenceRegex = new Regex(@"<SDKReference Include=""(?<name>Windows\w+), Version=(?<ver>[\d.]+)""");

        // Extension SDKs (e.g. WindowsMobile) only exist for some Windows SDK versions. If the project
        // references a version that is not installed, point it at the newest installed one instead.
        private static string FixExtensionSdkReferences(string text)
        {
            return SdkReferenceRegex.Replace(text, m =>
            {
                string name = m.Groups["name"].Value;
                string ver = m.Groups["ver"].Value;
                string dir = Path.Combine(System.Environment.GetFolderPath(System.Environment.SpecialFolder.ProgramFilesX86),
                    "Windows Kits", "10", "Extension SDKs", name);
                if (!Directory.Exists(dir) || Directory.Exists(Path.Combine(dir, ver))) return m.Value;

                string best = null;
                foreach (string d in Directory.GetDirectories(dir))
                {
                    string v = Path.GetFileName(d);
                    if (System.Version.TryParse(v, out var parsed) && (best == null || parsed > System.Version.Parse(best))) best = v;
                }
                if (best == null) return m.Value;

                Debug.Log($"[RetargetUwpToolset] {name} SDK {ver} not installed, using {best}");
                return $"<SDKReference Include=\"{name}, Version={best}\"";
            });
        }
    }
}
