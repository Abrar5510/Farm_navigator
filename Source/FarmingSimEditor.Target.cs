using UnrealBuildTool;
using System.Collections.Generic;

public class FarmingSimEditorTarget : TargetRules
{
    public FarmingSimEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5; // ← UPDATE TO V5
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6; // ← UPDATE INCLUDE ORDER
        
        ExtraModuleNames.Add("FarmingSim");
        
        // Remove all build environment overrides - let UE5.6 handle it
        // bOverrideBuildEnvironment = false; // Don't set this at all
        
        // Mac-specific optimizations
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            bUseUnityBuild = false;
            bUsePCHFiles = true;
        }
    }
}