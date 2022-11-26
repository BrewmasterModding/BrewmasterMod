#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimSimplex_SimplexVertex.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAutoBrewSimSimplex_SimplexVertex
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TArray<float> Coordinates;
};
