#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SustainabilityMetrics.h"
#include "SoilHealthComponent.generated.h"

USTRUCT(BlueprintType)
struct FSoilProperties
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float OrganicMatter; // 0-100%

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MoistureLevel; // 0-100%

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float NutrientLevel; // N-P-K composite

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float pHLevel; // 0-14 scale

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ErosionResistance; // 0-100%

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> CropHistory; // Track previous crops for rotation
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FARMINGSIM_API USoilHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USoilHealthComponent();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Soil Health")
    FSoilProperties CurrentSoilState;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Soil Health")
    ESustainabilityPractice ActivePractice;

    // Educational metrics
    UFUNCTION(BlueprintCallable, Category = "Education")
    FSustainabilityScore CalculateSustainabilityScore();

    UFUNCTION(BlueprintCallable, Category = "Soil Health")
    void UpdateSoilAfterHarvest(const FString& CropType);

    UFUNCTION(BlueprintCallable, Category = "Soil Health")
    void ApplySustainablePractice(ESustainabilityPractice Practice);

    UFUNCTION(BlueprintPure, Category = "Education")
    FString GetSoilHealthDescription() const;

    UFUNCTION(BlueprintPure, Category = "Education")
    TArray<FRealWorldImpact> GetCurrentPracticeBenefits() const;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    class USustainabilityMetrics* SustainabilityData;

    void InitializeSoilData();
    float CalculateCropRotationBonus() const;
    float CalculateSoilHealthImpact(const FString& CropType) const;
};