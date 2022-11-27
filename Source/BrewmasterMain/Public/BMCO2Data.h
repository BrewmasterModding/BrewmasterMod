#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESizeBand.h"
#include "BMCO2Data.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCO2Data : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bActive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetCarbonation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Pressure;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESizeBand MinimumContainerSize;
    
    UPROPERTY(BlueprintReadOnly)
    FName ItemName;
    
    FBMCO2Data();
};

