#include "SoilHealthComponent.h"
#include "SustainabilityMetrics.h"

USoilHealthComponent::USoilHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    ActivePractice = ESustainabilityPractice::None;
    
    InitializeSoilData();
}

void USoilHealthComponent::BeginPlay()
{
    Super::BeginPlay();
}

void USoilHealthComponent::InitializeSoilData()
{
    // Initialize with healthy soil baseline
    CurrentSoilState.OrganicMatter = 4.0f; // Good starting level
    CurrentSoilState.MoistureLevel = 70.0f;
    CurrentSoilState.NutrientLevel = 80.0f;
    CurrentSoilState.pHLevel = 6.5f; // Slightly acidic - ideal for most crops
    CurrentSoilState.ErosionResistance = 60.0f;
}

FSustainabilityScore USoilHealthComponent::CalculateSustainabilityScore()
{
    FSustainabilityScore Score;
    
    // Soil Health (0-100)
    Score.SoilHealth = (CurrentSoilState.OrganicMatter * 2.0f) + 
                      CurrentSoilState.NutrientLevel + 
                      (CurrentSoilState.ErosionResistance * 0.5f);
    Score.SoilHealth = FMath::Clamp(Score.SoilHealth / 3.5f, 0.0f, 100.0f);

    // Water Efficiency based on practices and soil health
    Score.WaterEfficiency = CurrentSoilState.MoistureLevel * 
                           (1.0f + (CurrentSoilState.OrganicMatter * 0.1f));

    // Biodiversity - improved by sustainable practices
    Score.Biodiversity = 30.0f; // Base level
    if (ActivePractice != ESustainabilityPractice::None)
    {
        Score.Biodiversity += 20.0f;
    }
    if (CurrentSoilState.CropHistory.Num() >= 3)
    {
        Score.Biodiversity += 15.0f; // Crop diversity bonus
    }

    // Carbon Footprint - lower is better
    Score.CarbonFootprint = 50.0f; // Base footprint
    if (ActivePractice == ESustainabilityPractice::NoTillFarming)
    {
        Score.CarbonFootprint -= 20.0f; // Carbon sequestration
    }

    // Economic Viability - balance sustainability with profit
    Score.EconomicViability = 70.0f; // Base viability
    if (CurrentSoilState.NutrientLevel > 60.0f)
    {
        Score.EconomicViability += 10.0f; // Reduced fertilizer costs
    }

    return Score;
}

void USoilHealthComponent::UpdateSoilAfterHarvest(const FString& CropType)
{
    // Track crop history for rotation analysis
    CurrentSoilState.CropHistory.Add(CropType);
    if (CurrentSoilState.CropHistory.Num() > 5)
    {
        CurrentSoilState.CropHistory.RemoveAt(0);
    }

    // Update soil properties based on crop type
    float SoilImpact = CalculateSoilHealthImpact(CropType);
    CurrentSoilState.NutrientLevel += SoilImpact;
    CurrentSoilState.NutrientLevel = FMath::Clamp(CurrentSoilState.NutrientLevel, 0.0f, 100.0f);

    // Apply sustainable practice benefits
    switch (ActivePractice)
    {
    case ESustainabilityPractice::CropRotation:
        CurrentSoilState.OrganicMatter += 0.1f;
        CurrentSoilState.NutrientLevel += 5.0f;
        break;
    case ESustainabilityPractice::CoverCropping:
        CurrentSoilState.OrganicMatter += 0.2f;
        CurrentSoilState.ErosionResistance += 3.0f;
        break;
    case ESustainabilityPractice::NoTillFarming:
        CurrentSoilState.OrganicMatter += 0.15f;
        CurrentSoilState.MoistureLevel += 5.0f;
        break;
    }

    // Clamp all values
    CurrentSoilState.OrganicMatter = FMath::Clamp(CurrentSoilState.OrganicMatter, 0.0f, 10.0f);
    CurrentSoilState.MoistureLevel = FMath::Clamp(CurrentSoilState.MoistureLevel, 0.0f, 100.0f);
    CurrentSoilState.ErosionResistance = FMath::Clamp(CurrentSoilState.ErosionResistance, 0.0f, 100.0f);
}

void USoilHealthComponent::ApplySustainablePractice(ESustainabilityPractice Practice)
{
    ActivePractice = Practice;
    
    // Immediate benefits when applying practices
    switch (Practice)
    {
    case ESustainabilityPractice::CoverCropping:
        CurrentSoilState.ErosionResistance += 10.0f;
        break;
    case ESustainabilityPractice::NoTillFarming:
        CurrentSoilState.MoistureLevel += 8.0f;
        break;
    }
}

FString USoilHealthComponent::GetSoilHealthDescription() const
{
    if (CurrentSoilState.OrganicMatter < 2.0f)
        return "Degraded - Low organic matter, high erosion risk";
    else if (CurrentSoilState.OrganicMatter < 4.0f)
        return "Moderate - Could benefit from sustainable practices";
    else if (CurrentSoilState.OrganicMatter < 6.0f)
        return "Good - Healthy soil with room for improvement";
    else
        return "Excellent - Highly productive sustainable soil";
}

TArray<FRealWorldImpact> USoilHealthComponent::GetCurrentPracticeBenefits() const
{
    if (SustainabilityData && SustainabilityData->PracticeImpacts.Contains(ActivePractice))
    {
        return SustainabilityData->PracticeImpacts[ActivePractice];
    }
    return TArray<FRealWorldImpact>();
}

float USoilHealthComponent::CalculateCropRotationBonus() const
{
    // Bonus for diverse crop rotation
    if (CurrentSoilState.CropHistory.Num() < 2) return 1.0f;
    
    TSet<FString> UniqueCrops(CurrentSoilState.CropHistory);
    float DiversityBonus = FMath::Min(UniqueCrops.Num() * 0.1f, 0.3f); // Max 30% bonus
    
    return 1.0f + DiversityBonus;
}

float USoilHealthComponent::CalculateSoilHealthImpact(const FString& CropType) const
{
    // Realistic soil impact based on crop type
    static TMap<FString, float> CropImpacts = {
        {"Wheat", -8.0f},
        {"Corn", -10.0f},
        {"Soybean", 2.0f},  // Legumes fix nitrogen
        {"Clover", 5.0f},   // Cover crop improves soil
        {"Tomato", -6.0f},
        {"Potato", -7.0f}
    };
    
    return CropImpacts.FindRef(CropType, -5.0f);
}