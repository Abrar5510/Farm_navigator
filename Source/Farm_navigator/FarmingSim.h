#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FarmingSim.generated.h"

UCLASS()
class FARMINGSIM_API UFarmingSim : public UGameInstance
{
    GENERATED_BODY()

public:
    UFarmingSim();

    // Player inventory
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory")
    TMap<FString, int32> PlayerInventory;

    // Player money
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Economy")
    int32 PlayerMoney;

    // Add item to inventory
    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void AddToInventory(FString ItemName, int32 Quantity);

    // Remove item from inventory
    UFUNCTION(BlueprintCallable, Category = "Inventory")
    bool RemoveFromInventory(FString ItemName, int32 Quantity);

    // Add money
    UFUNCTION(BlueprintCallable, Category = "Economy")
    void AddMoney(int32 Amount);

    // Spend money
    UFUNCTION(BlueprintCallable, Category = "Economy")
    bool SpendMoney(int32 Amount);

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Education")
    class AEducationalManager* EducationalManager;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Education")
    class AWaterManagementSystem* WaterManagementSystem;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Disasters")
    class ADisasterManager* DisasterManager;

    UFUNCTION(BlueprintCallable, Category = "Education")
    void CompleteLearningObjective(const FString& ObjectiveName);
    
    UFUNCTION(BlueprintCallable, Category = "Education")
    void ShowSustainabilityReport();
}; 

#pragma once
