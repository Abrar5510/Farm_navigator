#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SustainabilityMetrics.h"
#include "EducationalHUD.generated.h"

UCLASS()
class FARMINGSIM_API AEducationalHUD : public AHUD
{
    GENERATED_BODY()

public:
    AEducationalHUD();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education UI")
    TSubclassOf<class UUserWidget> EducationalWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education UI")
    TSubclassOf<class UUserWidget> SustainabilityReportClass;

    UPROPERTY()
    class UEducationalWidget* EducationalWidget;

    UPROPERTY()
    class USustainabilityReportWidget* SustainabilityReport;

    UFUNCTION(BlueprintCallable, Category = "Education UI")
    void ShowSustainabilityReport(const FSustainabilityScore& Score);

    UFUNCTION(BlueprintCallable, Category = "Education UI")
    void HideSustainabilityReport();

    UFUNCTION(BlueprintCallable, Category = "Education UI")
    void UpdateEducationalDisplay(const FString& LearningObjective, const FString& Tip);

protected:
    virtual void BeginPlay() override;

private:
    void CreateEducationalUI();
};