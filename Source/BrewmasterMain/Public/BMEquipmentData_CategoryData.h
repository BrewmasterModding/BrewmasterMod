#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EBMEquipmentSubCategory.h"
#include "BMEquipmentData_SubCategoryData.h"
#include "BMEquipmentData_CategoryData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEquipmentData_CategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSlateBrush> CategoryIcon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<EBMEquipmentSubCategory, FBMEquipmentData_SubCategoryData> SubCategoryData;
    
    FBMEquipmentData_CategoryData();
};

