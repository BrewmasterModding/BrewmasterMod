#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMSponsor.h"
#include "EBMBeerCategory.h"
#include "EBMDistribution.h"
#include "EBMKeySalesFactors.h"
#include "BMBreweries.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBreweries : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName BreweryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName BreweryDesc;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMSponsor BreweryData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture2D> Logo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<EBMBeerCategory> SpecialistBeerCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool AllSpecicalistBeerCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMDistribution Distribution;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMKeySalesFactors KeySalesFactor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName UnlockedByNarrativeStage;
    
    FBMBreweries();
};

