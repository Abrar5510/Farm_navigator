#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SkillSystem.h"
#include "FarmingPlayerState.generated.h"

UENUM(BlueprintType)
enum class EFarmingSkill : uint8
{
    Farming     UMETA(DisplayName = "Farming"),
    Gardening   UMETA(DisplayName = "Gardening"),
    Irrigation  UMETA(DisplayName = "Irrigation"),
    Luck        UMETA(DisplayName = "Luck"),
    MAX         UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct FPlayerLevelData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Level;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 XPRequired;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 SkillPointsRewarded;
};

UCLASS()
class FARMINGSIM_API AFarmingPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    AFarmingPlayerState();

    // Level System
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RPG|Level")
    int32 PlayerLevel;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RPG|Level")
    int32 CurrentXP;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RPG|Level")
    int32 AvailableSkillPoints;

    // Skills
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RPG|Skills")
    TMap<EFarmingSkill, FSkillData> PlayerSkills;

    // Level up table
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Level")
    TArray<FPlayerLevelData> LevelTable;

    // RPG Functions
    UFUNCTION(BlueprintCallable, Category = "RPG")
    void AddXP(int32 XPAmount);

    UFUNCTION(BlueprintCallable, Category = "RPG")
    void LevelUp();

    UFUNCTION(BlueprintCallable, Category = "RPG")
    bool UpgradeSkill(EFarmingSkill Skill);

    UFUNCTION(BlueprintPure, Category = "RPG")
    int32 GetXPForNextLevel() const;

    UFUNCTION(BlueprintPure, Category = "RPG")
    float GetXPProgressPercentage() const;

    UFUNCTION(BlueprintPure, Category = "RPG")
    float GetSkillBonus(EFarmingSkill Skill) const;

protected:
    virtual void BeginPlay() override;

private:
    void InitializeSkills();
    void CalculateNextLevelRequirements();
};