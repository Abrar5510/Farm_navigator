using UnrealBuildTool; 
using System.Collections.Generic;

public class FarmingSimTarget : TargetRules
{
    public FarmingSimTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("FarmingSim");
        bOverrideBuildEnvironment = true;
        
        // Mac-specific settings
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            bUseUnityBuild = false;
        }
    }
}