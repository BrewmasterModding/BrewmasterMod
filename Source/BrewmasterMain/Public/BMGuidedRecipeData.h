#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMRecipeInstruction.h"
#include "BMGuidedRecipeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMGuidedRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GuidedRecipeID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBMRecipeInstruction InstructionStage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName InstructionTipLoc;
    
    FBMGuidedRecipeData();
};

