// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMCharacter.h"
#include "BMInteractionComponent.h"
#include "BMPlayerAttachmentComponent.h"
#include "EBMAudioAction.h"
#include "ECarryState.h"
#include "BMCarryableComponent.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCarryStateChanged, UBMCarryableComponent*, CarryableComponent, AActor*, Interactee);
UCLASS()
class BREWMASTERMOD_API UBMCarryableComponent : public UBMInteractionComponent
{
	GENERATED_BODY()
	protected:
    UPROPERTY()
    AActor* TransitioningInteractee;
    
    UPROPERTY()
    ABMCharacter* PlayerChar;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* RootComp;
    
    UPROPERTY()
    TArray<AActor*> AttachedActorsGhosts;
    
    UPROPERTY(Instanced)
    UBMPlayerAttachmentComponent* PlayerAttachment;
    
public:
    UPROPERTY()
    AActor* ActorGhost;
    
    UPROPERTY(BlueprintAssignable)
    FOnCarryStateChanged OnCarryStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSingleHanded;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanRotate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECarryState CarryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NonStaticHeightTolerence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NotPlaceableColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PlaceableColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ColorAndOpacityParamName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPreventPickupWhenContainerAttached;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseToggleCarryInputForDetach;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* PlacementPreviewMaterial;
    
    UPROPERTY()
    float PutDownInputStartTime;
    
    UPROPERTY()
    bool bIsPutDownInputHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseTime;
    
    UPROPERTY()
    FTimerHandle ActorVisibilityTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseDelay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CarryPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CarryPositionScale;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetYaw(float Yaw);
    
protected:
    UFUNCTION()
    void UndockComplete(AActor* ActorUndocking);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGhostIsStale(bool IsStale);
    
protected:
    UFUNCTION()
    void PlayInteractionAudio(EBMAudioAction AudioAction, AActor* DockingContext);
    
public:
    UFUNCTION()
    AActor* GetGhostActor();
    
    UFUNCTION()
    void CompleteMovement();
    
protected:
    UFUNCTION()
    void AdjustRotation(bool bRotateClockwise);
};
