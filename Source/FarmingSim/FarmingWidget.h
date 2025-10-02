#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FarmingWidget.generated.h"

UCLASS()
class FARMINGSIM_API UFarmingWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateInventoryDisplay();

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void UpdateMoneyDisplay(int32 NewMoney);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void ShowInteractionPrompt(const FString& Action);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void HideInteractionPrompt();
}; #pragma once
