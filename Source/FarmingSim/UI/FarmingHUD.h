#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FarmingHUD.generated.h"

UCLASS()
class FARMINGSIM_API AFarmingHUD : public AHUD
{
    GENERATED_BODY()

public:
    AFarmingHUD();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<class UUserWidget> FarmingWidgetClass;

    UPROPERTY()
    class UFarmingWidget* FarmingWidget;

protected:
    virtual void BeginPlay() override;

    void CreateHUD();
};