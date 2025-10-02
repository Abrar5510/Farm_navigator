using UnrealBuildTool;
using System.Collections.Generic;

public class FarmingSimTarget : TargetRules
{
    public FarmingSimTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5; // ← UPDATE TO V5
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6; // ← UPDATE INCLUDE ORDER
        
        ExtraModuleNames.Add("FarmingSim");
        
        // Mac optimizations
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            bUseUnityBuild = false;
            bUsePCHFiles = true;
        }
    }
}