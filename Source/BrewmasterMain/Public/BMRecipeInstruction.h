#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMRecipeInstructionType.h"
#include "BMInstructionData.h"
#include "BMRecipeInstruction.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRecipeInstruction : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EBMRecipeInstructionType InstructionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString InstructionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString InstructionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMInstructionData> VariableList;
    
    FBMRecipeInstruction();
};

