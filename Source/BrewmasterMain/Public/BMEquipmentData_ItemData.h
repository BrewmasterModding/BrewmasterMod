#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMEquipmentData_ItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEquipmentData_ItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle ItemReference;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UniqueName;
    
    FBMEquipmentData_ItemData();
};

