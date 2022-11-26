#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimResults_SingleTestResults.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAutoBrewSimResults_SingleTestResults
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TArray<bool> bIndividualTestsPassed;
    
	UPROPERTY()
	TArray<float> ErrorValues;
};
