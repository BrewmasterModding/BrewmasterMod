#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "BMStorageTableData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStorageTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CategoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDataTableRowHandle> ItemReferences;
    
    FBMStorageTableData();
};

