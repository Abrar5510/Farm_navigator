#pragma once

#include "CoreMinimal.h"
#include "DisasterBase.h"
#include "DroughtDisaster.generated.h"

UCLASS()
class FARMINGSIM_API ADroughtDisaster : public ADisasterBase
{
    GENERATED_BODY()

public:
    ADroughtDisaster();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drought")
    float GrowthReductionMultiplier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drought")
    float WaterRequirementIncrease;

    virtual void OnDisasterStart_Implementation() override;
    virtual void OnDisasterEnd_Implementation() override;
    virtual void ApplyDisasterEffects_Implementation() override;

private:
    void ChangeSkyAndLighting();
    void RestoreSkyAndLighting();
};