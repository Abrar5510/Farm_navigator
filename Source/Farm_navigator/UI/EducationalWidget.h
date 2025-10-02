#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SustainabilityMetrics.h"
#include "EducationalWidget.generated.h"

UCLASS()
class FARMINGSIM_API UEducationalWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void UpdateLearningObjective(const FString& Objective);

    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void ShowEducationalTip(const FString& Tip);

    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void UpdateSustainabilityScore(const FSustainabilityScore& Score);

    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void ShowRealWorldComparison(const FString& ComparisonText);

    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void UpdateWaterManagementStats(float WaterUsed, float Efficiency, float Savings);

    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void ShowPracticeBenefits(const TArray<FRealWorldImpact>& Benefits);

    UFUNCTION(BlueprintImplementableEvent, Category = "Education UI")
    void UpdateSoilHealthDisplay(const FString& SoilStatus, float OrganicMatter, float Nutrients);
};