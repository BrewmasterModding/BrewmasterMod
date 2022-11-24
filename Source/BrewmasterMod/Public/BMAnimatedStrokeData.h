#pragma once
#include "CoreMinimal.h"
#include "BMAnimatedStrokeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAnimatedStrokeData
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
        FSlateBrush Brush;

	FBMAnimatedStrokeData()
	{
	}
};
