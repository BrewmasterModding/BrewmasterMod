// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BMCarryableComponent.h"
#include "BMInWorldInteraction.h"
#include "BMHighlightComponent.h"
#include "BMBaseActor.h"
#include "EBMXrayInformationMode.h"
#include "BMPlayerInventoryInteractionComp.h"
#include "BMObjectDistanceSort.h"
#include "BMPlayerInventoryData.h"
#include "BMCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRightStickInput, float, Pitch, float, Yaw);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSwapInventoryFailed);
UCLASS()
class BREWMASTERMOD_API ABMCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBMInWorldInteraction> PossibleInteractions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<EBMInput> PossibleInputs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBMInWorldInteraction> InvalidInteractions;
    
    UPROPERTY()
    AActor* Active;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMInteractionComponent* ActiveSequenceInteractionComp;
    
    UPROPERTY(Instanced)
    TArray<UBMHighlightComponent*> CurrentlyHighlightedObjects;
    
    UPROPERTY(Instanced)
    TArray<UBMHighlightComponent*> CurrentlyHighlightedObjectsTemp;
    
    UPROPERTY(Instanced)
    TMap<ABMBaseActor*, UBMHighlightComponent*> PreviousHighlightedObjects;
    
    UPROPERTY(Instanced)
    TMap<ABMBaseActor*, UBMHighlightComponent*> HighlightsToRemoveMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> ControllingOwnHighlight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMXrayInformationMode CurrentXRayMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsContextMenuVisible;
    
    UPROPERTY()
    ACameraActor* InteractionCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ACameraActor> CameraClass;
    
    UPROPERTY()
    TArray<AActor*> DitherFadedActors;
    
    UPROPERTY()
    TMap<UMaterialInstanceDynamic*, UTweenContainer*> ActiveTweens;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 InteractionLength;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* CarrySockets;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPlayerInventoryInteractionComp* PlayerInventoryComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMObjectDistanceSort* ObjectDistanceSortComp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBMPlayerInventoryData PlayerInventoryData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bShouldParentAttachmentHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxAngleDifferenceForCameraBlend;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GamepadCursorSensitivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnRightStickInput RightStickInputDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnSwapInventoryFailed OnSwapInventoryFailed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FadeTime;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* WatchMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bGamepadSticksSwapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseCarryTestA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool UseCarryTestB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* ScalingPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CarryModeBOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool AllowPutDownWhileStowed;
    
protected:
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* FootstepAudioComponent;
    
public:
    ABMCharacter();
protected:
    UFUNCTION()
    void UpdateXRayWidget(AActor* Interactee, TArray<FBMInWorldInteraction> PossibleInteraction);
    
public:
    UFUNCTION()
    void UpdateXRayMode();
    
protected:
    UFUNCTION()
    void UpdateIteractiveCameraAngle(bool StateChanged);
    
    UFUNCTION()
    void UpdateActorsInCursor(TArray<FBMHitCounter>& ActorsInCursor, FHitResult HitResult);
    
    UFUNCTION()
    void UnFadeAllDitherFadeActors();
    
public:
    UFUNCTION()
    void ToggleUpXRayMode();
    
    UFUNCTION()
    void ToggleDownXRayMode();
    
protected:
    UFUNCTION()
    void StartActorsToDitherFade(TArray<AActor*> ActorsToFade);
    
    UFUNCTION()
    bool ShouldKeepHighlight(UBMInteractionComponent* InteractionComp);
    
public:
    UFUNCTION()
    void SetActiveSequenceInteraction(UBMInteractionComponent* NewInteractionComp);
    
    UFUNCTION()
    void RemoveAllActorsControllingOwnHighlight();
    
    UFUNCTION()
    void RemoveActorControllingOwnHighlight(AActor* AddingActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionSequenceActiveStateChange(bool bSequenceActive);
    
    UFUNCTION()
    bool HandleInWorldInput(EBMInput InputID, int32 PressedKeyID);
    
    UFUNCTION()
    USceneComponent* GetScalingPoint();
    
protected:
    UFUNCTION(BlueprintPure)
    static FString GetInteractionString_Debug(FBMInWorldInteraction Interaction);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentActiveItem();
    
protected:
    UFUNCTION()
    void FindAllActorsToDitherFade(TArray<AActor*>& ActorsToFade, float DistToObj, FVector CameraPos, FVector FocusPoint);
    
public:
    UFUNCTION()
    void CreateInteractionCamera();
    
protected:
    UFUNCTION()
    void ChangeCamera(AActor* CameraChangingFrom, AActor* CameraChangingTo);
    
public:
    UFUNCTION()
    void CarryComponentUpdate(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanPlayerMoveOrAdjustView();
    
    UFUNCTION(BlueprintPure)
    bool CanCameraLookInSequence();
    
    UFUNCTION(BlueprintCallable)
    void AmountToYaw(float AmountToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AmountToPitch(float AmountToAdd);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddControllerCursorInput(FVector2D InVector, bool bIsGamepad);
    
    UFUNCTION()
    void AddActorControllingOwnHighlight(AActor* AddingActor);
};
