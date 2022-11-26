#pragma once
#include "CoreMinimal.h"
#include "BMWaterPacket.h"
#include "BMTransferDissolvedIngredient.h"
#include "BMIngredientTransferRequestNonDissolved.h"
#include "BMAutoBrewSimParams_RecipeStep.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAutoBrewSimParams_RecipeStep
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, FBMWaterPacket> LiquidsToAdd;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, FBMTransferDissolvedIngredient> DissolvedIngredientsToAdd;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, FBMIngredientTransferRequestNonDissolved> SolubleIngredientsToAdd;
};
