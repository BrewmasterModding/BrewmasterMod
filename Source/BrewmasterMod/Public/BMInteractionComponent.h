// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBMInteractionType.h"
#include "BMInteractionComponent.generated.h"


UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInteract, class UBMInteractionComponent*, InteractionComponent, bool, IsActive, AActor*, Interactee);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BREWMASTERMOD_API UBMInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBMInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    UPROPERTY(EditDefaultsOnly)
        bool bInteractableInWorld;

    UPROPERTY(EditDefaultsOnly)
        bool bInteractableInHand;

    UPROPERTY(EditDefaultsOnly)
        bool bHasInteractionSequence;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        bool bCanCameraMoveInSequence;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FRotator MaxRotationAngles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        bool ExcludeAttachedActorsForFade;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        float CameraMaxRotationTolerence;

    UPROPERTY()
        FVector CurrentCenterPoint;

    UPROPERTY()
        float Radius;

    UPROPERTY()
        bool ChangeOriginalCameraPosition;

    UPROPERTY()
        float YawOffsetPosition;

public:
    UPROPERTY(BlueprintAssignable)
        FOnInteract OnInteract;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TMap<TSubclassOf<AActor>, bool> InteractableTARGETClasses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TMap<TSubclassOf<AActor>, bool> InteractableACTIVEClasses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TArray<FName> HideActionIDPrompts;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TMap<FName, FName> OverrideActionIDForLocalisation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TMap<FName, FName> MapActionIDsAsAxial;

    UPROPERTY(EditDefaultsOnly)
        bool IsGhostInteraction;

    UPROPERTY()
        FTimerHandle TimerHandle;

    UPROPERTY()
        FName LinkedRepeatableAction;

    UPROPERTY()
        int32 LinkedActionButtonID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        EBMInteractionType InteractionType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
        TArray<UMeshComponent*> MeshesToExcludeWithCollisionCheck;

    UFUNCTION()
        void SetRadius(float value);

    UFUNCTION()
        EBMInteractionType GetInteractionType();

    UFUNCTION(BlueprintPure)
        void GetFocusView(FVector& CameraForwards, FRotator& CameraRotation, FBoxSphereBounds& RequiredInView, TArray<AActor*>& FocusObjects);
};
