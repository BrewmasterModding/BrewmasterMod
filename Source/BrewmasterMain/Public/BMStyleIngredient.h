#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMIngredientSubCategory.h"
#include "BMStyleIngredient.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStyleIngredient : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    float MinMassNeededPerWaterMass;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TArray<FName> RequiredIngredients;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TArray<EBMIngredientSubCategory> RequiredSubcategory;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FName HopOrigin;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool bIsYeast;
    
    FBMStyleIngredient();
};

