#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMLabelTextData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText TextValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    UDataTable* TextStyle;
    
    FBMLabelTextData();
};

