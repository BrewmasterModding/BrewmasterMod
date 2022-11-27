#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BP_OnTweenActorHitRotatorDelegate.generated.h"

class UTweenRotator;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FBP_OnTweenActorHitRotator, UTweenRotator*, Tween, AActor*, ThisActor, AActor*, OtherActor, FVector, NormalImpulse, const FHitResult&, Hit);

