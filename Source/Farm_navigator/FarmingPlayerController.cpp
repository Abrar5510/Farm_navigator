#include "FarmingPlayerController.h"
#include "FarmingCharacter.h"
#include "CropPlot.h"
#include "Engine/World.h"

AFarmingPlayerController::AFarmingPlayerController()
{
    bShowMouseCursor = true;
}

void AFarmingPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction("Interact", IE_Pressed, this, &AFarmingPlayerController::Interact);
}

void AFarmingPlayerController::BeginPlay()
{
    Super::BeginPlay();
}

void AFarmingPlayerController::Interact()
{
    // Implementation for general interaction
}

ACropPlot* AFarmingPlayerController::GetTargetCropPlot()
{
    // Raycast to find crop plot player is looking at
    FVector Start = PlayerCameraManager->GetCameraLocation();
    FVector End = Start + (PlayerCameraManager->GetCameraRotation().Vector() * 1000.0f);

    FHitResult HitResult;
    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetPawn());

    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams))
    {
        return Cast<ACropPlot>(HitResult.GetActor());
    }

    return nullptr;
}

void AFarmingPlayerController::PlantSeed(FString CropType)
{
    ACropPlot* TargetPlot = GetTargetCropPlot();
    if (TargetPlot && !TargetPlot->HasCrop())
    {
        TargetPlot->PlantCrop(CropType);
    }
}

void AFarmingPlayerController::HarvestCrop()
{
    ACropPlot* TargetPlot = GetTargetCropPlot();
    if (TargetPlot && TargetPlot->CanHarvest())
    {
        TargetPlot->HarvestCrop();
    }
}