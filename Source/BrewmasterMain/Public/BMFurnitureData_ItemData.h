#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMFurnitureData_ItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFurnitureData_ItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle ItemReference;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UniqueName;
    
    FBMFurnitureData_ItemData();
};

