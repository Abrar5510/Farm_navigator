using UnrealBuildTool;
using System.Collections.Generic;

public class FarmingSimEditorTarget : TargetRules
{
    public FarmingSimEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("FarmingSim");
        
        // ADD THESE LINES TO FIX THE ERROR:
        bOverrideBuildEnvironment = true;
        BuildEnvironment = TargetBuildEnvironment.Unique;
        
        // Optional: Mac-specific optimizations
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            bUseUnityBuild = false;
            bUsePCHFiles = true;
        }
    }
}