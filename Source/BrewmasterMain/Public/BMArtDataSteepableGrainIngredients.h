#pragma once
#include "CoreMinimal.h"
#include "BMArtDataGrainBagIngredients_Textures.h"
#include "Engine/DataTable.h"
#include "BMArtDataSteepableGrainIngredients.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataSteepableGrainIngredients : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FBMArtDataGrainBagIngredients_Textures TilingTextures;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelSmallMaterial;
    
    FBMArtDataSteepableGrainIngredients();
};

