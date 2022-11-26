#pragma once
#include "CoreMinimal.h"
#include "EIngredientType.h"
#include "BMDynamicContainer.h"
#include "BMTransferDissolvedIngredient.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMTransferDissolvedIngredient
{
	GENERATED_BODY()
public:
	UPROPERTY()
	ABMDynamicContainer* Container;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Name;
    
	UPROPERTY(EditAnywhere)
	double Mass;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EIngredientType IngredientType;
    
	UPROPERTY()
	bool bFermentable;
};
