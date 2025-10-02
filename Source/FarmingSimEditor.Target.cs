using UnrealBuildTool;
using System.Collections.Generic;

public class FarmingSimEditorTarget : TargetRules
{
    public FarmingSimEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("FarmingSim");
        
        // REMOVE these lines:
        // bOverrideBuildEnvironment = true;
        // BuildEnvironment = TargetBuildEnvironment.Unique;
        
        // Keep it simple for Mac
        bUseUnityBuild = false;
        bUsePCHFiles = true;
    }
}