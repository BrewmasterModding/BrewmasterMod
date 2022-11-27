#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataYeastPacketIngredients.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataYeastPacketIngredients : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> IngredientMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelMediumMaterial;
    
    FBMArtDataYeastPacketIngredients();
};

