#pragma once
#include "CoreMinimal.h"
#include "BMStaticFurniture.h"
#include "UObject/NoExportTypes.h"
#include "BMKegStand.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMKegStand : public ABMStaticFurniture {
    GENERATED_BODY()
public:
    ABMKegStand();
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetGhostExtents();
    
};

