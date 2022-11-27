#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMShoppingCartData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMShoppingCartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ItemData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Amount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PriceForOne;
    
    FBMShoppingCartData();
};

