#pragma once
#include "CoreMinimal.h"
#include "BaseTween.h"
#include "BP_OnTweenPrimitiveComponentHitRotatorDelegate.h"
#include "BP_OnTweenRotatorChangeDelegate.h"
#include "BP_OnTweenActorHitRotatorDelegate.h"
#include "BP_OnTweenActorBeginOverlapRotatorDelegate.h"
#include "BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TweenRotator.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class TWEENMAKER_API UTweenRotator : public UBaseTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenRotatorChange OnTweenStart;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenRotatorChange OnTweenUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenRotatorChange OnTweenEnd;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenActorHitRotator OnTweenActorHit;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenActorBeginOverlapRotator OnTweenActorBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenPrimitiveComponentHitRotator OnTweenPrimitiveComponentHit;
    
    UPROPERTY(BlueprintAssignable)
    FBP_OnTweenPrimitiveComponentBeginOverlapRotator OnTweenPrimitiveComponentBeginOverlap;
    
    UTweenRotator();
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
    FRotator GetCurrentValue() const;
    
};

