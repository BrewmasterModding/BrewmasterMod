#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenActorHitFloatDelegate.generated.h"

class UTweenFloat;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenActorHitFloat, UTweenFloat*, Tween, AActor*, ThisActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit);

