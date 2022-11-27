#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate.generated.h"

class UTweenFloat;
class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenPrimitiveComponentBeginOverlapFloat, UTweenFloat*, Tween, UPrimitiveComponent*, ThisComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, const FHitResult&, SweepResult);

