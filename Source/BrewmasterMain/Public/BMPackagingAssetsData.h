#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "EBMPackagingInfoType.h"
#include "BMPackagingAssetsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPackagingAssetsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName UniqueItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FDataTableRowHandle ItemSpecificDataSource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMPackagingInfoType PackagingScreenAssetType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool StartsUnlocked;
    
    FBMPackagingAssetsData();
};

