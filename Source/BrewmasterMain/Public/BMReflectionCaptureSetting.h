#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BMReflectionCaptureSetting.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMReflectionCaptureSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ReflectionPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    FBMReflectionCaptureSetting();
};

