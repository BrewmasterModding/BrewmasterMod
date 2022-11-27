#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMIncludeOnPlatforms.h"
#include "EBMItemUnlockType.h"
#include "EBMCatalogueSeasonsEnum.h"
#include "EBMMastery.h"
#include "BMCatalogueItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCatalogueItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName UniqueName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMItemUnlockType ItemType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 BeerTokens;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool UnlockedAtStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool StartsInLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool ExcludeFromFreePlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMMastery Mastery;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool CanBeBought;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool ActivityReward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool UniqueReward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FString> NarrativeStageComplete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 SeasonsMinimum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool IsInfinite;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool IsInfiniteInFreePlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMCatalogueSeasonsEnum Season;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName ArticleName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bExcludedFromDemo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FBMIncludeOnPlatforms IncludeOnPlatforms;
    
    FBMCatalogueItemData();
};

FORCEINLINE uint32 GetTypeHash(const FBMCatalogueItemData) { return 0; }