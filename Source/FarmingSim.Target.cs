using UnrealTargetTool;
using System.Collections.Generic;

public class FarmingSimTarget : TargetRules
{
    public FarmingSimTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("FarmingSim");
        
        // Add this line for consistency
        bOverrideBuildEnvironment = true;
        
        // Mac-specific settings
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            bOverrideBuildEnvironment = true;
            // Additional Mac optimizations
            bUseUnityBuild = false;
        }
    }
}