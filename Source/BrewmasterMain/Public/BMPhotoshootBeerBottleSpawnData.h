#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "BMPhotoshootBeerBottleSpawnData.generated.h"

class ABMBaseBeerBottle;

USTRUCT(BlueprintType)
struct FBMPhotoshootBeerBottleSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ABMBaseBeerBottle> BeerBottleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SpawnScale;
    
    BREWMASTERMAIN_API FBMPhotoshootBeerBottleSpawnData();
};

