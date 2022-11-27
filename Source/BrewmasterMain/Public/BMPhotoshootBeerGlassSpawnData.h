#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "BMPhotoshootBeerGlassSpawnData.generated.h"

class ABMBaseBeerGlass;

USTRUCT(BlueprintType)
struct FBMPhotoshootBeerGlassSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ABMBaseBeerGlass> BeerGlassClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SpawnScale;
    
    BREWMASTERMAIN_API FBMPhotoshootBeerGlassSpawnData();
};

