#pragma once

#include "CoreMinimal.h"
#include "SkillSystem.generated.h"

USTRUCT(BlueprintType)
struct FSkillData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SkillName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Level;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BonusMultiplier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxLevel;

    FSkillData() : SkillName(""), Level(0), BonusMultiplier(1.0f), MaxLevel(10) {}
    FSkillData(const FString& Name, int32 StartLevel, float StartBonus) 
        : SkillName(Name), Level(StartLevel), BonusMultiplier(StartBonus), MaxLevel(10) {}
};