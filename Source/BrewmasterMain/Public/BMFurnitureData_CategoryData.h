#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EBMFurnitureSubcategory.h"
#include "BMFurnitureData_SubCategoryData.h"
#include "BMFurnitureData_CategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMFurnitureData_CategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSlateBrush> CategoryIcon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMFurnitureSubcategory, FBMFurnitureData_SubCategoryData> SubCategoryData;
    
    FBMFurnitureData_CategoryData();
};

