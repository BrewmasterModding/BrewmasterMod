#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMAirlockData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAirlockData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PressureReleased;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PressureReleaseThreshold;
    
    FBMAirlockData();
};

