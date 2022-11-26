#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Ingredients.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAutoBrewSimCalibrations_WhatToCalibrate_Ingredients
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDissolvingRateMin;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDissolvingRateMax;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDissolvingRateMassLimit;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSaturationLimit;
};
