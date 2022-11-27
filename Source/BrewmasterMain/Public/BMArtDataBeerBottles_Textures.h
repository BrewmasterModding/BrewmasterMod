#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataBeerBottles_Textures.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataBeerBottles_Textures : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture> NormalMap;
    
    FBMArtDataBeerBottles_Textures();
};

