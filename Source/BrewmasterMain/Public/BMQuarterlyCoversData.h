#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMSeasonsEnum.h"
#include "BMQuarterlyCoversData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMQuarterlyCoversData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString CoverID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<EBMSeasonsEnum> SeasonsValidIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName BeerStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TSoftObjectPtr<UTexture2D> CoverAsset;
    
    FBMQuarterlyCoversData();
};

