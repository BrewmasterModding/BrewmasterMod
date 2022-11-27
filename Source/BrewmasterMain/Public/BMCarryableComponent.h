#pragma once
#include "CoreMinimal.h"
#include "OnCarryStateChangedDelegate.h"
#include "BMInteractionComponent.h"
#include "EBMAudioAction.h"
#include "ECarryState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMCarryableComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class ABMCharacter;
class UBMPlayerAttachmentComponent;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMCarryableComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
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
    
    UBMCarryableComponent();
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

