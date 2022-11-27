#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenActorHitVectorDelegate.generated.h"

class UTweenVector;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenActorHitVector, UTweenVector*, Tween, AActor*, ThisActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit);

