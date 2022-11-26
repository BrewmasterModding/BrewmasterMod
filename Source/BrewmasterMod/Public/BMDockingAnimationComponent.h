// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMSaveableActorInterface.h"
#include "Components/ActorComponent.h"
#include "BMAttachPointID.h"
#include "EDockingState.h"
#include "EBMTransferType.h"
#include "ESizeBand.h"
#include "BMDockingAnimationComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUndocked, AActor*, ActorUndocking);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDocked, AActor*, ActorDocking);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BREWMASTERMOD_API UBMDockingAnimationComponent : public UActorComponent, public IBMSaveableActorInterface
{
	GENERATED_BODY()
protected:
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<AActor*> DockedObjects;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FBMAttachPointID, FBMAttachPointID> SocketsDockedTogether;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, bool> SocketUseMap;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<bool> ClipPointUse;
    
    UPROPERTY(EditAnywhere)
    FName RootObjectBoneName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FName DefaultSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseThisObjectSocket;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FBMAttachPointID DockeePoint;
    
    UPROPERTY(Instanced)
    UBMObjectTransfer* ObjectTransferSystem;
    
    UPROPERTY(Instanced, SaveGame)
    USceneComponent* ObjectDockedTo;
    
    UPROPERTY(SaveGame)
    FBMAttachPointID AttachPointToDockTo;
    
    UPROPERTY(SaveGame)
    EDockingState DockingState;
    
    UPROPERTY()
    FTimerHandle UndockingAnimationTimerHandle;
    
    UPROPERTY()
    FTimerHandle DockingAnimationTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnUndocked ObjectUndocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDocked ObjectDocked;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DockingAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* UndockingAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DockingResponseAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* UndockingResponseAnimation;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfClipPoints;
    
    UPROPERTY(VisibleAnywhere)
    FVector ClipPointsCentrePoint;
    
    UPROPERTY(VisibleAnywhere)
    float ClipPointsRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESizeBand, int32> ContainerSizeToNumberOfClips;
    
public:
    UFUNCTION(BlueprintCallable)
    void UndockObject();
    
    UFUNCTION(BlueprintCallable)
    void UnDockingReaction();
    
protected:
    UFUNCTION()
    void UndockingAnimationComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDockingState(EDockingState NewDockingState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveDockedChild(AActor* Child);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayDetachAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAttachAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(USceneComponent* AnimatingObject, UAnimationAsset* AnimationToPlay, bool IsLooping);
    
    UFUNCTION()
    void MovementComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAttachmentPointFree(FBMAttachPointID AttachmentPoint);
    
    UFUNCTION(BlueprintCallable)
    void DockToObjectSocket(FBMAttachPointID DockPointID, EBMTransferType transferType);
    
    UFUNCTION(BlueprintCallable)
    void DockingReaction();
    
protected:
    UFUNCTION()
    void DockingAnimationComplete();
    
    UFUNCTION()
    void DetachComplete();
    
    UFUNCTION(BlueprintCallable)
    void AddDockedChild(AActor* Child);

		
};
