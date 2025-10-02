#include "EducationalHUD.h"
#include "EducationalWidget.h"
#include "SustainabilityReportWidget.h"
#include "Blueprint/UserWidget.h"

AEducationalHUD::AEducationalHUD()
{
}

void AEducationalHUD::BeginPlay()
{
    Super::BeginPlay();
    CreateEducationalUI();
}

void AEducationalHUD::CreateEducationalUI()
{
    if (EducationalWidgetClass)
    {
        EducationalWidget = CreateWidget<UEducationalWidget>(GetWorld(), EducationalWidgetClass);
        if (EducationalWidget)
        {
            EducationalWidget->AddToViewport();
        }
    }
}

void AEducationalHUD::ShowSustainabilityReport(const FSustainabilityScore& Score)
{
    if (SustainabilityReportClass && !SustainabilityReport)
    {
        SustainabilityReport = CreateWidget<USustainabilityReportWidget>(GetWorld(), SustainabilityReportClass);
    }
    
    if (SustainabilityReport)
    {
        SustainabilityReport->AddToViewport();
        SustainabilityReport->UpdateSustainabilityData(Score);
    }
}

void AEducationalHUD::HideSustainabilityReport()
{
    if (SustainabilityReport)
    {
        SustainabilityReport->RemoveFromParent();
        SustainabilityReport = nullptr;
    }
}

void AEducationalHUD::UpdateEducationalDisplay(const FString& LearningObjective, const FString& Tip)
{
    if (EducationalWidget)
    {
        EducationalWidget->UpdateLearningObjective(LearningObjective);
        EducationalWidget->ShowEducationalTip(Tip);
    }
}