#include "EducationalManager.h"

AEducationalManager::AEducationalManager()
{
    PrimaryActorTick.bCanEverTick = true;
    InitializeEducationalScenarios();
}

void AEducationalManager::BeginPlay()
{
    Super::BeginPlay();
}

void AEducationalManager::InitializeEducationalScenarios()
{
    AvailableScenarios.Add({
        "Water Conservation Challenge",
        "Learn how to grow crops with 50% less water",
        {ESustainabilityPractice::CoverCropping, ESustainabilityPractice::NoTillFarming},
        "Understand water-efficient farming techniques"
    });

    AvailableScenarios.Add({
        "Soil Health Restoration", 
        "Improve degraded soil using sustainable practices",
        {ESustainabilityPractice::CropRotation, ESustainabilityPractice::CoverCropping},
        "Learn how soil health affects long-term productivity"
    });

    AvailableScenarios.Add({
        "Climate-Resilient Farming",
        "Adapt your farm to handle droughts and floods",
        {ESustainabilityPractice::NoTillFarming, ESustainabilityPractice::Agroforestry},
        "Build resilience against climate change impacts"
    });
}

void AEducationalManager::StartScenario(const FString& ScenarioName)
{
    for (const FEducationalScenario& Scenario : AvailableScenarios)
    {
        if (Scenario.ScenarioName == ScenarioName)
        {
            CurrentLearningObjective = Scenario.LearningObjective;
            
            // Display educational content
            UE_LOG(LogTemp, Warning, TEXT("Starting Scenario: %s"), *ScenarioName);
            UE_LOG(LogTemp, Warning, TEXT("Objective: %s"), *Scenario.LearningObjective);
            UE_LOG(LogTemp, Warning, TEXT("Description: %s"), *Scenario.Description);
            
            break;
        }
    }
}

void AEducationalManager::CompleteLearningObjective(const FString& Objective)
{
    UE_LOG(LogTemp, Warning, TEXT("Learning Objective Complete: %s"), *Objective);
    
    // Grant educational rewards
    // This could be XP bonus, new seeds, or sustainable practice unlocks
}

void AEducationalManager::ShowRealWorldComparison(const FSustainabilityScore& PlayerScore)
{
    // Compare player's performance with real-world benchmarks
    FSustainabilityScore ConventionalBenchmark = {60.0f, 50.0f, 40.0f, 70.0f, 80.0f};
    FSustainabilityScore SustainableBenchmark = {80.0f, 85.0f, 75.0f, 40.0f, 70.0f};

    float PlayerOverall = PlayerScore.GetOverallScore();
    float ConventionalOverall = ConventionalBenchmark.GetOverallScore();
    float SustainableOverall = SustainableBenchmark.GetOverallScore();

    FString Comparison;
    if (PlayerOverall >= SustainableOverall)
    {
        Comparison = "Excellent! Your farm exceeds sustainable benchmarks";
    }
    else if (PlayerOverall >= ConventionalOverall)
    {
        Comparison = "Good progress toward sustainability";
    }
    else
    {
        Comparison = "Consider implementing more sustainable practices";
    }

    UE_LOG(LogTemp, Warning, TEXT("Sustainability Comparison: %s"), *Comparison);
}

void AEducationalManager::DisplayEnvironmentalImpactReport()
{
    FString Report = GenerateImpactReport();
    UE_LOG(LogTemp, Warning, TEXT("ENVIRONMENTAL IMPACT REPORT:\n%s"), *Report);
}

FString AEducationalManager::GenerateImpactReport() const
{
    FString Report;
    Report += "=== SUSTAINABLE AGRICULTURE IMPACT REPORT ===\n\n";
    
    Report += "CROP ROTATION BENEFITS:\n";
    Report += "• Reduces pesticide use by 40% (USDA)\n";
    Report += "• Increases soil organic matter by 30% (Rodale Institute)\n";
    Report += "• Improves water infiltration by 15%\n\n";
    
    Report += "COVER CROPPING IMPACTS:\n"; 
    Report += "• Prevents 50% of soil erosion (NRCS)\n";
    Report += "• Increases soil carbon sequestration\n";
    Report += "• Provides habitat for beneficial insects\n\n";
    
    Report += "NO-TILL FARMING ADVANTAGES:\n";
    Report += "• Reduces fuel consumption by 60%\n";
    Report += "• Improves water retention by 30%\n";
    Report += "• Triples earthworm populations\n\n";
    
    Report += "Real-world data shows sustainable practices can:\n";
    Report += "• Increase long-term yields by 20-50%\n";
    Report += "• Reduce greenhouse gas emissions by 40%\n";
    Report += "• Improve farm profitability over 5-10 years\n";
    
    return Report;
}