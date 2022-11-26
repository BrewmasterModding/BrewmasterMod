#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Hops.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAutoBrewSimCalibrations_WhatToCalibrate_Hops
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAlphaAcidContent;
};
