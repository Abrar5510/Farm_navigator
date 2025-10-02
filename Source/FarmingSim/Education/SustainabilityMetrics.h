#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SustainabilityMetrics.generated.h"

UENUM(BlueprintType)
enum class ESustainabilityPractice : uint8
{
    None                UMETA(DisplayName = "Conventional"),
    CropRotation        UMETA(DisplayName = "Crop Rotation"),
    CoverCropping       UMETA(DisplayName = "Cover Cropping"),
    NoTillFarming       UMETA(DisplayName = "No-Till Farming"),
    IntegratedPestMgt   UMETA(DisplayName = "Integrated Pest Management"),
    Agroforestry        UMETA(DisplayName = "Agroforestry")
};

USTRUCT(BlueprintType)
struct FSustainabilityScore
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float SoilHealth;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float WaterEfficiency;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float Biodiversity;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float CarbonFootprint;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    float EconomicViability;

    // Calculate overall sustainability index (0-100)
    UFUNCTION(BlueprintCallable)
    float GetOverallScore() const
    {
        return (SoilHealth + WaterEfficiency + Biodiversity + 
               (100.0f - CarbonFootprint) + EconomicViability) / 5.0f;
    }
};

USTRUCT(BlueprintType)
struct FRealWorldImpact
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Statistic;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Source;

    FRealWorldImpact() {}
    FRealWorldImpact(const FString& Stat, const FString& Desc, const FString& Src)
        : Statistic(Stat), Description(Desc), Source(Src) {}
};

UCLASS()
class FARMINGSIM_API USustainabilityMetrics : public UDataAsset
{
    GENERATED_BODY()

public:
    // Real-world data for educational content
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    TMap<ESustainabilityPractice, TArray<FRealWorldImpact>> PracticeImpacts;

    // Environmental impact data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    TMap<FString, float> CropWaterFootprints; // Liters per kg

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    TMap<FString, float> CropCarbonFootprints; // kg CO2 per kg

    // Soil impact data
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    TMap<FString, float> SoilNutrientDepletion;

    UFUNCTION(BlueprintCallable)
    void InitializeRealWorldData();
};