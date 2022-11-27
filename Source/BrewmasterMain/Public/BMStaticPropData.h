#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BMStaticPropType.h"
#include "BMStaticPropData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStaticPropData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform PropTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMStaticPropType PropType;
    
    FBMStaticPropData();
};

