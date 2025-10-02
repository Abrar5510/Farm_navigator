#include "WaterManagementSystem.h"
#include "SustainabilityMetrics.h"

AWaterManagementSystem::AWaterManagementSystem()
{
    PrimaryActorTick.bCanEverTick = true;
    bUsingDripIrrigation = false;
    bUsingRainwaterHarvesting = false;
}

void AWaterManagementSystem::BeginPlay()
{
    Super::BeginPlay();
}

void AWaterManagementSystem::RecordWaterUsage(float Amount, EWaterSource Source, const FString& CropType)
{
    CurrentWaterUsage.TotalWaterUsed += Amount;
    
    // Track usage by source
    if (CurrentWaterUsage.SourceUsage.Contains(Source))
    {
        CurrentWaterUsage.SourceUsage[Source] += Amount;
    }
    else
    {
        CurrentWaterUsage.SourceUsage.Add(Source, Amount);
    }

    // Calculate efficiency
    CurrentWaterUsage.WaterEfficiency = CalculateIrrigationEfficiency();

    // Calculate carbon footprint
    CurrentWaterUsage.CarbonFootprint += Amount * CalculateSourceCarbonFootprint(Source);

    // Educational feedback
    if (SustainabilityData && SustainabilityData->CropWaterFootprints.Contains(CropType))
    {
        float RealWorldUsage = Amount * SustainabilityData->CropWaterFootprints[CropType];
        UE_LOG(LogTemp, Warning, TEXT("Water used: %.1fL (Real-world equivalent: %.1fL for %s)"), 
               Amount, RealWorldUsage, *CropType);
    }
}

void AWaterManagementSystem::CalculateWaterFootprint()
{
    // Educational function to show real-world impacts
    float TotalFootprint = 0.0f;
    
    for (const auto& SourceUsage : CurrentWaterUsage.SourceUsage)
    {
        float SourceEfficiency = 1.0f;
        if (SourceUsage.Key == EWaterSource::Recycled)
        {
            SourceEfficiency = 0.3f; // Recycled water has lower environmental impact
        }
        
        TotalFootprint += SourceUsage.Value * SourceEfficiency;
    }

    UE_LOG(LogTemp, Warning, TEXT("Total Water Footprint: %.1f L (Carbon: %.1f kg CO2)"), 
           TotalFootprint, CurrentWaterUsage.CarbonFootprint);
}

FString AWaterManagementSystem::GetWaterEfficiencyTip() const
{
    if (CurrentWaterUsage.WaterEfficiency < 40.0f)
        return "Consider drip irrigation - can save 30-50% water";
    else if (CurrentWaterUsage.WaterEfficiency < 70.0f)
        return "Good efficiency. Rainwater harvesting could help further";
    else
        return "Excellent water management!";
}

float AWaterManagementSystem::GetRealWorldWaterSavings() const
{
    float BaseUsage = CurrentWaterUsage.TotalWaterUsed * 2.0f; // Assume conventional uses 2x
    float ActualUsage = CurrentWaterUsage.TotalWaterUsed;
    
    return ((BaseUsage - ActualUsage) / BaseUsage) * 100.0f; // Percentage savings
}

float AWaterManagementSystem::CalculateIrrigationEfficiency() const
{
    float Efficiency = 50.0f; // Base efficiency for flood irrigation
    
    if (bUsingDripIrrigation)
    {
        Efficiency += 30.0f; // Drip irrigation is 80-90% efficient
    }
    
    if (bUsingRainwaterHarvesting)
    {
        Efficiency += 10.0f; // Reduced energy for pumping
    }
    
    // Efficiency based on water sources
    if (CurrentWaterUsage.SourceUsage.Contains(EWaterSource::Recycled))
    {
        Efficiency += 5.0f; // Bonus for using recycled water
    }
    
    return FMath::Clamp(Efficiency, 0.0f, 95.0f);
}

float AWaterManagementSystem::CalculateSourceCarbonFootprint(EWaterSource Source) const
{
    // kg CO2 per liter for different water sources
    switch (Source)
    {
    case EWaterSource::Rainfall: return 0.001f;
    case EWaterSource::River: return 0.005f;
    case EWaterSource::Groundwater: return 0.01f; // Pumping energy
    case EWaterSource::Recycled: return 0.003f;   // Treatment energy
    default: return 0.005f;
    }
}