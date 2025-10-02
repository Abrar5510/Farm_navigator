#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CropPlot.generated.h"

UCLASS()
class FARMINGSIM_API ACropPlot : public AActor
{
    GENERATED_BODY()

public:
    ACropPlot();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* PlotMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* CropMesh;

    // Farming functions
    UFUNCTION(BlueprintCallable, Category = "Farming")
    void PlantCrop(FString CropType);

    UFUNCTION(BlueprintCallable, Category = "Farming")
    void HarvestCrop();

    UFUNCTION(BlueprintCallable, Category = "Farming")
    bool HasCrop() const;

    UFUNCTION(BlueprintCallable, Category = "Farming")
    bool CanHarvest() const;

    UFUNCTION(BlueprintPure, Category = "Farming")
    float GetGrowthProgress() const;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY()
    FString CurrentCropType;

    UPROPERTY()
    float PlantedTime;

    UPROPERTY()
    bool bIsWatered;

    UPROPERTY()
    class UCropData* CurrentCropData;

    void UpdateCropAppearance();
    class UFarmingSim* GetGameInstance() const;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Farming")
    bool bIsWatered;

    UFUNCTION(BlueprintCallable, Category = "Farming")
    void WaterPlot();

    UFUNCTION(BlueprintPure, Category = "Farming")
    bool NeedsWater() const;

    UFUNCTION(BlueprintPure, Category = "Farming")
    float GetWaterEffectiveness() const;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Education")
    class USoilHealthComponent* SoilHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Education")
    ESustainabilityPractice AppliedPractice;

    UFUNCTION(BlueprintCallable, Category = "Education")
    void ApplySustainablePractice(ESustainabilityPractice Practice);

    UFUNCTION(BlueprintPure, Category = "Education")
    FSustainabilityScore GetSustainabilityScore() const;

    UFUNCTION(BlueprintCallable, Category = "Education")
    void RecordEducationalData();
};
