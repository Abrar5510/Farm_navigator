#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisasterBase.h"
#include "DisasterManager.generated.h"

UENUM(BlueprintType)
enum class EDisasterType : uint8
{
    None        UMETA(DisplayName = "None"),
    Drought     UMETA(DisplayName = "Drought"),
    Flood       UMETA(DisplayName = "Flood"),
    Storm       UMETA(DisplayName = "Storm"),
    Pestilence  UMETA(DisplayName = "Pestilence")
};

USTRUCT(BlueprintType)
struct FDisasterChance
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDisasterType DisasterType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BaseChance; // Chance per day (0-1)

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Duration; // How long disaster lasts (game hours)
};

UCLASS()
class FARMINGSIM_API ADisasterManager : public AActor
{
    GENERATED_BODY()

public:
    ADisasterManager();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Disasters")
    EDisasterType CurrentDisaster;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Disasters")
    float DisasterRemainingTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Disasters")
    TArray<FDisasterChance> DisasterChances;

    UFUNCTION(BlueprintCallable, Category = "Disasters")
    void TriggerDisaster(EDisasterType DisasterType);

    UFUNCTION(BlueprintCallable, Category = "Disasters")
    void EndDisaster();

    UFUNCTION(BlueprintCallable, Category = "Disasters")
    void CheckForDisaster();

    UFUNCTION(BlueprintPure, Category = "Disasters")
    bool IsDisasterActive() const;

    UFUNCTION(BlueprintPure, Category = "Disasters")
    float GetDisasterEffectOnCrop(FString CropType) const;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY()
    class ADroughtDisaster* ActiveDrought;

    UPROPERTY()
    class AFloodDisaster* ActiveFlood;

    void SpawnDisasterActor(EDisasterType DisasterType);
    void CleanupDisasterActors();
};