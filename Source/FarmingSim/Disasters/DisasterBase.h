#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisasterBase.generated.h"

UCLASS(Abstract)
class FARMINGSIM_API ADisasterBase : public AActor
{
    GENERATED_BODY()

public:
    ADisasterBase();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Disaster")
    FText DisasterName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Disaster")
    FText DisasterDescription;

    UFUNCTION(BlueprintNativeEvent, Category = "Disaster")
    void OnDisasterStart();
    
    UFUNCTION(BlueprintNativeEvent, Category = "Disaster") 
    void OnDisasterEnd();

    UFUNCTION(BlueprintNativeEvent, Category = "Disaster")
    void ApplyDisasterEffects();

protected:
    virtual void BeginPlay() override;
};