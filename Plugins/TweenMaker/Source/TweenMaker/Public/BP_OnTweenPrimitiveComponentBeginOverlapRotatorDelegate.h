#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate.generated.h"

class UTweenRotator;
class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenPrimitiveComponentBeginOverlapRotator, UTweenRotator*, Tween, UPrimitiveComponent*, ThisComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, const FHitResult&, SweepResult);

