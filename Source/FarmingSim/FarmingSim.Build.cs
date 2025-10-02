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
            "InputCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}