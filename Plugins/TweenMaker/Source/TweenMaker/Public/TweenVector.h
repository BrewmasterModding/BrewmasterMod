#pragma once
#include "CoreMinimal.h"
#include "BP_OnTweenVectorChangeDelegate.h"
#include "BaseTween.h"
#include "BP_OnTweenActorHitVectorDelegate.h"
#include "BP_OnTweenActorBeginOverlapVectorDelegate.h"
#include "BP_OnTweenPrimitiveComponentHitVectorDelegate.h"
#include "BP_OnTweenPrimitiveComponentBeginOverlapVectorDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TweenVector.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class TWEENMAKER_API UTweenVector : public UBaseTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVectorChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVectorChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenVectorChange OnTweenEnd;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenActorHitVector OnTweenActorHit;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenActorBeginOverlapVector OnTweenActorBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenPrimitiveComponentHitVector OnTweenPrimitiveComponentHit;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenPrimitiveComponentBeginOverlapVector OnTweenPrimitiveComponentBeginOverlap;
    
    UTweenVector();
private:
    UFUNCTION()
    void OnPrimitiveComponentHit(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector pNormalImpulse, const FHitResult& pHitResult);
    
    UFUNCTION()
    void OnPrimitiveComponentBeginOverlap(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool bFromSweep, const FHitResult& pSweepResult);
    
    UFUNCTION()
    void OnActorHit(AActor* pThisActor, AActor* pOtherActor, FVector pNormalImpulse, const FHitResult& pHit);
    
    UFUNCTION()
    void OnActorBeginOverlap(AActor* pThisActor, AActor* pOtherActor);
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetCurrentValue() const;
    
};

