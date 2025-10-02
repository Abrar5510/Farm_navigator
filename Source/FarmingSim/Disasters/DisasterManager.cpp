#include "DisasterManager.h"
#include "DroughtDisaster.h"
#include "FloodDisaster.h"
#include "FarmingSimGameMode.h"

ADisasterManager::ADisasterManager()
{
    PrimaryActorTick.bCanEverTick = true;

    CurrentDisaster = EDisasterType::None;
    DisasterRemainingTime = 0.0f;

    // Initialize disaster chances
    DisasterChances.Add({EDisasterType::Drought, 0.1f, 24.0f});
    DisasterChances.Add({EDisasterType::Flood, 0.08f, 12.0f});
}

void ADisasterManager::BeginPlay()
{
    Super::BeginPlay();
}

void ADisasterManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (IsDisasterActive())
    {
        DisasterRemainingTime -= DeltaTime;
        if (DisasterRemainingTime <= 0.0f)
        {
            EndDisaster();
        }
    }
    else
    {
        // Random disaster check (simplified - in real game, tie to game days)
        if (FMath::FRand() < 0.001f) // 0.1% chance per frame for testing
        {
            CheckForDisaster();
        }
    }
}

void ADisasterManager::CheckForDisaster()
{
    for (const FDisasterChance& Chance : DisasterChances)
    {
        if (FMath::FRand() < Chance.BaseChance)
        {
            TriggerDisaster(Chance.DisasterType);
            break;
        }
    }
}

void ADisasterManager::TriggerDisaster(EDisasterType DisasterType)
{
    if (IsDisasterActive()) return;

    CurrentDisaster = DisasterType;
    
    // Find duration from disaster chances
    for (const FDisasterChance& Chance : DisasterChances)
    {
        if (Chance.DisasterType == DisasterType)
        {
            DisasterRemainingTime = Chance.Duration;
            break;
        }
    }

    SpawnDisasterActor(DisasterType);

    // Broadcast disaster start
    OnDisasterStarted(DisasterType);
}

void ADisasterManager::EndDisaster()
{
    if (!IsDisasterActive()) return;

    EDisasterType EndedDisaster = CurrentDisaster;
    CurrentDisaster = EDisasterType::None;
    DisasterRemainingTime = 0.0f;

    CleanupDisasterActors();

    // Broadcast disaster end
    OnDisasterEnded(EndedDisaster);
}

bool ADisasterManager::IsDisasterActive() const
{
    return CurrentDisaster != EDisasterType::None;
}

float ADisasterManager::GetDisasterEffectOnCrop(FString CropType) const
{
    if (!IsDisasterActive()) return 1.0f; // No effect

    // Dummy data for crop susceptibility to different disasters
    TMap<FString, float> DroughtEffects = {
        {"Wheat", 0.5f},    // 50% growth during drought
        {"Carrot", 0.3f},   // 30% growth during drought  
        {"Tomato", 0.2f}    // 20% growth during drought
    };

    TMap<FString, float> FloodEffects = {
        {"Wheat", 0.8f},    // 80% growth during flood
        {"Carrot", 0.4f},   // 40% growth during flood (carrots don't like wet feet)
        {"Tomato", 0.6f}    // 60% growth during flood
    };

    switch (CurrentDisaster)
    {
    case EDisasterType::Drought:
        return DroughtEffects.FindRef(CropType, 0.5f);
    case EDisasterType::Flood:
        return FloodEffects.FindRef(CropType, 0.7f);
    default:
        return 1.0f;
    }
}

void ADisasterManager::SpawnDisasterActor(EDisasterType DisasterType)
{
    CleanupDisasterActors();

    switch (DisasterType)
    {
    case EDisasterType::Drought:
        ActiveDrought = GetWorld()->SpawnActor<ADroughtDisaster>();
        break;
    case EDisasterType::Flood:
        ActiveFlood = GetWorld()->SpawnActor<AFloodDisaster>();
        break;
    }
}

void ADisasterManager::CleanupDisasterActors()
{
    if (ActiveDrought)
    {
        ActiveDrought->Destroy();
        ActiveDrought = nullptr;
    }
    if (ActiveFlood)
    {
        ActiveFlood->Destroy();
        ActiveFlood = nullptr;
    }
}