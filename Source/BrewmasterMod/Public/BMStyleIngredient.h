#pragma once
#include "CoreMinimal.h"
#include "EBMIngredientSubCategory.h"
#include "Engine/DataTable.h"
#include "BMStyleIngredient.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMStyleIngredient : public FTableRowBase
{
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

	FBMStyleIngredient()
	{
	}
};
