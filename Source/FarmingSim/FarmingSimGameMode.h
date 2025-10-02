#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FarmingSimGameMode.generated.h"

UCLASS()
class FARMINGSIM_API AFarmingSimGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AFarmingSimGameMode();

    // Time of day system
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Time")
    float CurrentTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
    float DayLength; // Real seconds per game day

    // Weather system
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
    bool bIsRaining;

protected:
    virtual void Tick(float DeltaTime) override;
    virtual void BeginPlay() override;

private:
    void UpdateTimeOfDay(float DeltaTime);
}; #pragma once
