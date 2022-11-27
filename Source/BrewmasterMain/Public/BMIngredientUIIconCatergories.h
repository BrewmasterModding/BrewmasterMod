#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIconType.h"
#include "Styling/SlateBrush.h"
#include "BMIngredientUIIconCatergories.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientUIIconCatergories : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIconType IconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CategoryIcon;
    
    FBMIngredientUIIconCatergories();
};

