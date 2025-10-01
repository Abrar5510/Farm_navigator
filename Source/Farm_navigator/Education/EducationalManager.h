#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SustainabilityMetrics.h"
#include "EducationalManager.generated.h"

USTRUCT(BlueprintType)
struct FEducationalScenario
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ScenarioName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ESustainabilityPractice> RecommendedPractices;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString LearningObjective;
};

UCLASS()
class FARMINGSIM_API AEducationalManager : public AActor
{
    GENERATED_BODY()

public:
    AEducationalManager();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Education")
    TArray<FEducationalScenario> AvailableScenarios;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Education")
    FString CurrentLearningObjective;

    UFUNCTION(BlueprintCallable, Category = "Education")
    void StartScenario(const FString& ScenarioName);

    UFUNCTION(BlueprintCallable, Category = "Education")
    void CompleteLearningObjective(const FString& Objective);

    UFUNCTION(BlueprintCallable, Category = "Education")
    void ShowRealWorldComparison(const FSustainabilityScore& PlayerScore);

    UFUNCTION(BlueprintCallable, Category = "Education")
    void DisplayEnvironmentalImpactReport();

protected:
    virtual void BeginPlay() override;

private:
    void InitializeEducationalScenarios();
    FString GenerateImpactReport() const;
};