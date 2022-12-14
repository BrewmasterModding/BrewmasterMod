#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataHerbJarIngredients.generated.h"

class UParticleSystem;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataHerbJarIngredients : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> IngredientMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelSmallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UParticleSystem> PouringParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    bool isHerb;
    
    FBMArtDataHerbJarIngredients();
};

