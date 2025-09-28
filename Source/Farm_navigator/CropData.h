#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CropData.generated.h"

UCLASS()
class FARMINGSIM_API UCropData : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    FString CropName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    float GrowthTime; // In game hours

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    int32 BuyPrice;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    int32 SellPrice;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    UStaticMesh* SeedMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    UStaticMesh* GrowingMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crop")
    UStaticMesh* ReadyMesh;
};