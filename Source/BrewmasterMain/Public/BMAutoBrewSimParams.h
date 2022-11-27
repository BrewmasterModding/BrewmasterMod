#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMAutoBrewSimParams_DesiredResults.h"
#include "Engine/DataTable.h"
#include "BMAutoBrewSimParams_RecipeStep.h"
#include "BMAutoBrewSimParams.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMAutoBrewSimParams_DesiredResults> DesiredResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<float, FBMAutoBrewSimParams_RecipeStep> RecipeSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FDataTableRowHandle> ContainerProperties;
    
    FBMAutoBrewSimParams();
};

