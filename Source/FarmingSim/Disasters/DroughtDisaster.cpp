#include "DroughtDisaster.h"
#include "Engine/DirectionalLight.h"
#include "Components/SkyAtmosphereComponent.h"

ADroughtDisaster::ADroughtDisaster()
{
    DisasterName = FText::FromString("Severe Drought");
    DisasterDescription = FText::FromString("A harsh drought has struck! Crops grow slower and require more water.");
    GrowthReductionMultiplier = 0.5f;
    WaterRequirementIncrease = 2.0f;
}

void ADroughtDisaster::OnDisasterStart_Implementation()
{
    // Visual and audio effects for drought
    ChangeSkyAndLighting();
    
    // Play dry wind sounds
    // Spawn dust particles
    
    UE_LOG(LogTemp, Warning, TEXT("Drought disaster started!"));
}

void ADroughtDisaster::OnDisasterEnd_Implementation()
{
    RestoreSkyAndLighting();
    UE_LOG(LogTemp, Warning, TEXT("Drought disaster ended."));
}

void ADroughtDisaster::ApplyDisasterEffects_Implementation()
{
    // Effects are applied through DisasterManager to crop plots
    // This could handle global effects like player movement speed, etc.
}

void ADroughtDisaster::ChangeSkyAndLighting()
{
    // Make sky more hazy, sun more intense
    // In Blueprint, you'd modify:
    // - Directional light intensity and color
    // - Sky atmosphere settings
    // - Post-process volume for heat haze
}

void ADroughtDisaster::RestoreSkyAndLighting()
{
    // Restore original lighting conditions
}