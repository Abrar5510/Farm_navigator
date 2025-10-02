#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SustainabilityMetrics.h"
#include "SustainabilityReportWidget.generated.h"

UCLASS()
class FARMINGSIM_API USustainabilityReportWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "Sustainability UI")
    void UpdateSustainabilityData(const FSustainabilityScore& Score);

    UFUNCTION(BlueprintImplementableEvent, Category = "Sustainability UI")
    void ShowEnvironmentalImpactData(const FString& ImpactData);

    UFUNCTION(BlueprintCallable, Category = "Sustainability UI")
    void GenerateImpactReport();
};