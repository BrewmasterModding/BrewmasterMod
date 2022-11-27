#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMRecipeInstructionVariable.h"
#include "EBMIngredientCategory.h"
#include "EBMRecipeInstructionType.h"
#include "BMRecipeAmountData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRecipeAmountData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMRecipeInstructionVariable Context;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMIngredientCategory IngredientCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBMRecipeInstructionType Instruction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartingValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IncrementValue;
    
    FBMRecipeAmountData();
};

