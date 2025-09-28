#include "CropPlot.h"
#include "CropData.h"
#include "FarmingSim.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

ACropPlot::ACropPlot()
{
    PrimaryActorTick.bCanEverTick = true;

    PlotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlotMesh"));
    RootComponent = PlotMesh;

    CropMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CropMesh"));
    CropMesh->SetupAttachment(PlotMesh);
    CropMesh->SetVisibility(false);

    CurrentCropType = "";
    PlantedTime = 0.0f;
    bIsWatered = false;
}

void ACropPlot::BeginPlay()
{
    Super::BeginPlay();
}

void ACropPlot::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (HasCrop() && !CanHarvest())
    {
        // Update growth
        PlantedTime += DeltaTime;
        UpdateCropAppearance();
    }
}

void ACropPlot::PlantCrop(FString CropType)
{
    UFarmingSim* GameInstance = GetGameInstance();
    if (GameInstance && GameInstance->RemoveFromInventory(CropType + " Seeds", 1))
    {
        CurrentCropType = CropType;
        PlantedTime = 0.0f;
        bIsWatered = false;

        // Load crop data (you'd typically use a data table or asset manager)
        // CurrentCropData = LoadCropData(CropType);

        CropMesh->SetVisibility(true);
        UpdateCropAppearance();
    }
}

void ACropPlot::HarvestCrop()
{
    if (CanHarvest())
    {
        UFarmingSim* GameInstance = GetGameInstance();
        if (GameInstance && CurrentCropData)
        {
            GameInstance->AddToInventory(CurrentCropType, 1);
            GameInstance->AddMoney(CurrentCropData->SellPrice);

            // Reset plot
            CurrentCropType = "";
            CropMesh->SetVisibility(false);
        }
    }
}

bool ACropPlot::HasCrop() const
{
    return !CurrentCropType.IsEmpty();
}

bool ACropPlot::CanHarvest() const
{
    if (!HasCrop() || !CurrentCropData) return false;

    return (PlantedTime >= CurrentCropData->GrowthTime);
}

float ACropPlot::GetGrowthProgress() const
{
    if (!HasCrop() || !CurrentCropData) return 0.0f;

    return FMath::Clamp(PlantedTime / CurrentCropData->GrowthTime, 0.0f, 1.0f);
}

void ACropPlot::UpdateCropAppearance()
{
    if (!CurrentCropData) return;

    float Progress = GetGrowthProgress();

    if (Progress < 0.33f)
    {
        CropMesh->SetStaticMesh(CurrentCropData->SeedMesh);
    }
    else if (Progress < 0.66f)
    {
        CropMesh->SetStaticMesh(CurrentCropData->GrowingMesh);
    }
    else
    {
        CropMesh->SetStaticMesh(CurrentCropData->ReadyMesh);
    }
}

UFarmingSim* ACropPlot::GetGameInstance() const
{
    return Cast<UFarmingSim>(GetGameInstance());
}