#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RPGHUDWidget.generated.h"

UCLASS()
class FARMINGSIM_API URPGHUDWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "RPG UI")
    void UpdateLevelDisplay(int32 NewLevel, float XPProgress);

    UFUNCTION(BlueprintImplementableEvent, Category = "RPG UI")
    void UpdateSkillPoints(int32 AvailablePoints);

    UFUNCTION(BlueprintImplementableEvent, Category = "RPG UI")
    void ShowDisasterAlert(const FText& DisasterName, const FText& Description);

    UFUNCTION(BlueprintImplementableEvent, Category = "RPG UI")
    void HideDisasterAlert();

    UFUNCTION(BlueprintImplementableEvent, Category = "RPG UI")
    void UpdateDisasterTimer(float RemainingTime);
};