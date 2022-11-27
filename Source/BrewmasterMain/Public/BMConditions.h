#pragma once
#include "CoreMinimal.h"
#include "EBMConditionText.h"
#include "Engine/DataTable.h"
#include "EBMConditionsStats.h"
#include "BMConditionsDataTypes.h"
#include "BMConditions.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMConditions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    EBMConditionText Condition;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMConditionsStats Stat;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMConditionsDataTypes DataType1;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMConditionsDataTypes DataType2;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMConditionsDataTypes DataType3;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool ConditionNeedsBeer;
    
    FBMConditions();
};

