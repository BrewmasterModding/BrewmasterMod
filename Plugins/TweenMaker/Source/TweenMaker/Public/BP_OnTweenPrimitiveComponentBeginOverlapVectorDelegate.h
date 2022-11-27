#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenPrimitiveComponentBeginOverlapVectorDelegate.generated.h"

class UPrimitiveComponent;
class UTweenVector;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenPrimitiveComponentBeginOverlapVector, UTweenVector*, Tween, UPrimitiveComponent*, ThisComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, const FHitResult&, SweepResult);

