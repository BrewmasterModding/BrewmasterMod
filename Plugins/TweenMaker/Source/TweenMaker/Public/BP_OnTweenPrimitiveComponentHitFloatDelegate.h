#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenPrimitiveComponentHitFloatDelegate.generated.h"

class UTweenFloat;
class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FBP_OnTweenPrimitiveComponentHitFloat, UTweenFloat*, Tween, UPrimitiveComponent*, ThisComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, FVector, NormalImpulse, const FHitResult&, HitResult);

