#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMSugarEnzymeStructData.h"
#include "BMMaltIngredientData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMMaltIngredientData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName IngredientName;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool bIsExtract;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    bool bIsSeepable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float StarchPercentUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMSugarEnzymeStructData FermentableSugarEnzymeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMSugarEnzymeStructData UnfermentableSugarEnzymeData;
    
    FBMMaltIngredientData();
};

