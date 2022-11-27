#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMContainerBrewSimFixedProperties.h"
#include "ESizeBand.h"
#include "EBMLidType.h"
#include "BMContainerItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContainerItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBMContainerBrewSimFixedProperties BrewSimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESizeBand SizeBand;
    
    UPROPERTY(EditDefaultsOnly)
    EBMLidType LidType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNumberOfDirectTubeConnections;
    
    FBMContainerItemData();
};

