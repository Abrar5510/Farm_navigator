// FarmingSim.Build.cs
using UnrealBuildTool;

public class FarmingSim : ModuleRules
{
    public FarmingSim(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { 
            "Core", 
            "CoreUObject", 
            "Engine", 
            "InputCore", 
            "UMG",
            "AIModule",
            "GameplayTasks",
            "Slate",
            "SlateCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}