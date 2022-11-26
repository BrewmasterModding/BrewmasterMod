#pragma once
#include "CoreMinimal.h"
#include "EIngredientType.h"
#include "ECalibrationTargetType.h"
#include "BMAutoBrewSimParams_DesiredResults_NonDissolved.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAutoBrewSimParams_DesiredResults_NonDissolved
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Name;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EIngredientType IngredientType;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Target;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ECalibrationTargetType TargetType;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ToleranceValue;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ErrorValueMultipler;
};
