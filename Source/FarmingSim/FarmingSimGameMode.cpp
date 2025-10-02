#include "FarmingSimGameMode.h"
#include "FarmingSim.h"

AFarmingSimGameMode::AFarmingSimGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    CurrentTime = 6.0f; // 6 AM start
    DayLength = 300.0f; // 5 minutes per day
    bIsRaining = false;
}

void AFarmingSimGameMode::BeginPlay()
{
    Super::BeginPlay();
}

void AFarmingSimGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    UpdateTimeOfDay(DeltaTime);
}

void AFarmingSimGameMode::UpdateTimeOfDay(float DeltaTime)
{
    // Advance time (24-hour cycle)
    CurrentTime += (24.0f / DayLength) * DeltaTime;

    if (CurrentTime >= 24.0f)
    {
        CurrentTime = 0.0f;
        // New day logic can be added here
    }
}