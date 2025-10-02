#include "DisasterBase.h"

ADisasterBase::ADisasterBase()
{
    PrimaryActorTick.bCanEverTick = true;

    DisasterName = FText::FromString("Base Disaster");
    DisasterDescription = FText::FromString("A disaster is affecting your farm.");
}

void ADisasterBase::BeginPlay()
{
    Super::BeginPlay();
}

void ADisasterBase::OnDisasterStart_Implementation()
{
    // Base implementation - should be overridden in child classes
    UE_LOG(LogTemp, Warning, TEXT("Disaster started: %s"), *DisasterName.ToString());
}

void ADisasterBase::OnDisasterEnd_Implementation()
{
    // Base implementation - should be overridden in child classes
    UE_LOG(LogTemp, Warning, TEXT("Disaster ended: %s"), *DisasterName.ToString());
}

void ADisasterBase::ApplyDisasterEffects_Implementation()
{
    // Base implementation - should be overridden in child classes
    // This would apply effects to all relevant actors in the world
}