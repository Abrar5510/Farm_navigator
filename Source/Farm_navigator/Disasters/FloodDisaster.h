#pragma once

#include "CoreMinimal.h"
#include "DisasterBase.h"
#include "FloodDisaster.generated.h"

UCLASS()
class FARMINGSIM_API AFloodDisaster : public ADisasterBase
{
    GENERATED_BODY()

public:
    AFloodDisaster();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flood")
    float CropDamageRate; // Percentage of crops damaged per hour

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flood")
    float GrowthSlowdownMultiplier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flood")
    float SoilNutrientLossRate;

    // Educational content about flood impacts
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    FText FloodPreventionTips;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    FText RealWorldFloodImpact;

    virtual void OnDisasterStart_Implementation() override;
    virtual void OnDisasterEnd_Implementation() override;
    virtual void ApplyDisasterEffects_Implementation() override;

    UFUNCTION(BlueprintCallable, Category = "Education")
    FString GetFloodEducationalContent() const;

private:
    void CreateFloodVisualEffects();
    void RemoveFloodVisualEffects();
    void ApplyDamageToCrops();
    void SimulateSoilErosion();
    
    UPROPERTY()
    TArray<AActor*> AffectedCrops;
};