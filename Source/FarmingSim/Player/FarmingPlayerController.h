#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FarmingPlayerController.generated.h"

UCLASS()
class FARMINGSIM_API AFarmingPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AFarmingPlayerController();

    // Interaction system
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void Interact();

    // Farming actions
    UFUNCTION(BlueprintCallable, Category = "Farming")
    void PlantSeed(FString CropType);

    UFUNCTION(BlueprintCallable, Category = "Farming")
    void HarvestCrop();

protected:
    virtual void SetupInputComponent() override;
    virtual void BeginPlay() override;

private:
    class ACropPlot* GetTargetCropPlot();
};