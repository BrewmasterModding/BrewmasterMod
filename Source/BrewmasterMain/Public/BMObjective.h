#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMConditions.h"
#include "BMObjective.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMObjective : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ObjectiveID;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMConditions> Conditions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FString ToolTipHintLoc;
    
    FBMObjective();
};

