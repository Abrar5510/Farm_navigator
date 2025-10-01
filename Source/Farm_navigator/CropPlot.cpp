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

void ACropPlot::WaterPlot()
{
    bIsWatered = true;
    
    // Grant XP for watering
    AFarmingPlayerState* PlayerState = GetWorld()->GetFirstPlayerController()->GetPlayerState<AFarmingPlayerState>();
    if (PlayerState)
    {
        PlayerState->AddXP(10);
    }
}

bool ACropPlot::NeedsWater() const
{
    // During disasters, plots need water more frequently
    UFarmingSim* GameInstance = GetGameInstance();
    if (GameInstance && GameInstance->DisasterManager)
    {
        if (GameInstance->DisasterManager->GetCurrentDisaster() == EDisasterType::Drought)
        {
            return true; // Always need water during drought
        }
    }
    
    return !bIsWatered && HasCrop() && !CanHarvest();
}

float ACropPlot::GetWaterEffectiveness() const
{
    float Effectiveness = 1.0f;
    
    UFarmingSim* GameInstance = GetGameInstance();
    if (GameInstance && GameInstance->DisasterManager)
    {
        // During drought, water is less effective
        if (GameInstance->DisasterManager->GetCurrentDisaster() == EDisasterType::Drought)
        {
            Effectiveness *= 0.5f;
        }
    }
    
    // Apply irrigation skill bonus
    AFarmingPlayerState* PlayerState = GetWorld()->GetFirstPlayerController()->GetPlayerState<AFarmingPlayerState>();
    if (PlayerState)
    {
        Effectiveness *= PlayerState->GetSkillBonus(EFarmingSkill::Irrigation);
    }
    
    return Effectiveness;
}

// Modify the Tick function to include disaster effects:
void ACropPlot::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (HasCrop() && !CanHarvest())
    {
        float GrowthRate = 1.0f;
        
        // Apply disaster effects
        UFarmingSim* GameInstance = GetGameInstance();
        if (GameInstance && GameInstance->DisasterManager)
        {
            GrowthRate *= GameInstance->DisasterManager->GetDisasterEffectOnCrop(CurrentCropType);
        }
        
        // Apply farming skill bonus
        AFarmingPlayerState* PlayerState = GetWorld()->GetFirstPlayerController()->GetPlayerState<AFarmingPlayerState>();
        if (PlayerState)
        {
            GrowthRate *= PlayerState->GetSkillBonus(EFarmingSkill::Farming);
        }
        
        // Apply water effectiveness
        if (bIsWatered)
        {
            GrowthRate *= GetWaterEffectiveness();
        }
        else
        {
            GrowthRate *= 0.1f; // Very slow growth without water
        }
        
        PlantedTime += DeltaTime * GrowthRate;
        UpdateCropAppearance();
    }
}