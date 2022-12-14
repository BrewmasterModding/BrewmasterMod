#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMIngredientData_ItemQuantityData.h"
#include "BMIngredientData_ItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientData_ItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle ItemReference;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMIngredientData_ItemQuantityData> ItemQuantities;
    
    FBMIngredientData_ItemData();
};

