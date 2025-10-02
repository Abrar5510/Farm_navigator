using UnrealBuildTool;
using System.Collections.Generic;

public class FarmingSimTarget : TargetRules
{
    public FarmingSimTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("FarmingSim");
        
        // REMOVE this line:
        // bOverrideBuildEnvironment = true;
        
        // Mac optimizations
        bUseUnityBuild = false;
        bUsePCHFiles = true;
    }
}