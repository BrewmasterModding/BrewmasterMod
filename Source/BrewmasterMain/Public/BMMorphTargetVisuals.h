#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMMeshBagStates.h"
#include "BMMorphTargetVisuals.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMMorphTargetVisuals : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    EBMMeshBagStates BagState;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TMap<FName, float> MorphTargets;
    
    FBMMorphTargetVisuals();
};

