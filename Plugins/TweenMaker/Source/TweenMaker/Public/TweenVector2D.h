#pragma once
#include "CoreMinimal.h"
#include "BaseTween.h"
#include "BP_OnTweenVector2DChangeDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TweenVector2D.generated.h"

UCLASS()
class TWEENMAKER_API UTweenVector2D : public UBaseTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVector2DChange OnTweenEnd;
    
    UTweenVector2D();
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentValue() const;
    
};

