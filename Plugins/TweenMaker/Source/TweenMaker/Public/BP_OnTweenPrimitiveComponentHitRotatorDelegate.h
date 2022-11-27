#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenPrimitiveComponentHitRotatorDelegate.generated.h"

class UTweenRotator;
class UPrimitiveComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FBP_OnTweenPrimitiveComponentHitRotator, UTweenRotator*, Tween, UPrimitiveComponent*, ThisComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, FVector, NormalImpulse, const FHitResult&, HitResult);

