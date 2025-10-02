#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterManagementSystem.generated.h"

UENUM(BlueprintType)
enum class EWaterSource : uint8
{
    Rainfall      UMETA(DisplayName = "Rainfall"),
    River         UMETA(DisplayName = "River Water"),
    Groundwater   UMETA(DisplayName = "Groundwater"),
    Recycled      UMETA(DisplayName = "Recycled Water")
};

USTRUCT(BlueprintType)
struct FWaterUsageData
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float TotalWaterUsed; // Liters

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float WaterEfficiency; // 0-100%

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TMap<EWaterSource, float> SourceUsage;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float CarbonFootprint; // kg CO2 from water pumping/treatment
};

UCLASS()
class FARMINGSIM_API AWaterManagementSystem : public AActor
{
    GENERATED_BODY()

public:
    AWaterManagementSystem();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Water Management")
    FWaterUsageData CurrentWaterUsage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Management")
    bool bUsingDripIrrigation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Water Management")
    bool bUsingRainwaterHarvesting;

    UFUNCTION(BlueprintCallable, Category = "Water Management")
    void RecordWaterUsage(float Amount, EWaterSource Source, const FString& CropType);

    UFUNCTION(BlueprintCallable, Category = "Education")
    void CalculateWaterFootprint();

    UFUNCTION(BlueprintPure, Category = "Education")
    FString GetWaterEfficiencyTip() const;

    UFUNCTION(BlueprintPure, Category = "Education")
    float GetRealWorldWaterSavings() const;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    class USustainabilityMetrics* SustainabilityData;

    float CalculateIrrigationEfficiency() const;
    float CalculateSourceCarbonFootprint(EWaterSource Source) const;
};