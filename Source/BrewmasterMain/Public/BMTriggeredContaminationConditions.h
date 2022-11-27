#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMTriggeredContaminationType.h"
#include "BMConditions.h"
#include "BMTriggeredContaminationConditions.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTriggeredContaminationConditions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMTriggeredContaminationType ContaminationType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float MaxValue;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float RateOfChange;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FBMConditions> TriggeredConditions;
    
    FBMTriggeredContaminationConditions();
};

