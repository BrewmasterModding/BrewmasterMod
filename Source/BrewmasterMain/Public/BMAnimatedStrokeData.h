#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "BMAnimatedStrokeData.generated.h"

USTRUCT(BlueprintType)
struct FBMAnimatedStrokeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    BREWMASTERMAIN_API FBMAnimatedStrokeData();
};

