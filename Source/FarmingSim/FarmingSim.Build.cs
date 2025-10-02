using UnrealBuildTool;

public class FarmingSim : ModuleRules
{
    public FarmingSim(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        CppStandard = CppStandardVersion.Cpp20; // ← UPDATE TO C++20

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
        
        // Fix for UE5.6 include paths
        bLegacyParentIncludePaths = false;
        
        // Enable format string validation
        bValidateFormatStrings = true;
    }
}