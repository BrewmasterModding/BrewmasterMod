#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataGrainBagIngredients_Textures.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataGrainBagIngredients_Textures : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture> BaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture> Mask;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture> Normal;
    
    FBMArtDataGrainBagIngredients_Textures();
};

