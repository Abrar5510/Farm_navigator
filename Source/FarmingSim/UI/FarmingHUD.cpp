#include "FarmingHUD.h"
#include "FarmingWidget.h"
#include "Blueprint/UserWidget.h"

AFarmingHUD::AFarmingHUD()
{
}

void AFarmingHUD::BeginPlay()
{
    Super::BeginPlay();
    CreateHUD();
}

void AFarmingHUD::CreateHUD()
{
    if (FarmingWidgetClass)
    {
        FarmingWidget = CreateWidget<UFarmingWidget>(GetWorld(), FarmingWidgetClass);
        if (FarmingWidget)
        {
            FarmingWidget->AddToViewport();
        }
    }
}