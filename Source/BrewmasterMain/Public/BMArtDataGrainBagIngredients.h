#pragma once
#include "CoreMinimal.h"
#include "BMArtDataGrainBagIngredients_Textures.h"
#include "Engine/DataTable.h"
#include "BMArtDataGrainBagIngredients.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataGrainBagIngredients : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FBMArtDataGrainBagIngredients_Textures TilingTextures;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FBMArtDataGrainBagIngredients_Textures PouringEffectsTextures;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> PouringDustMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelSmallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelMediumMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelLargeMaterial;
    
    FBMArtDataGrainBagIngredients();
};

