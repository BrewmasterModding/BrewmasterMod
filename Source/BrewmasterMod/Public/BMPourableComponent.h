// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "ECarryState.h"
#include "BMCarryableComponent.h"
#include "BMObjectTransfer.h"
#include "BMAnalogueControlComponent.h"
#include "BMLidInteractionComponent.h"
#include "BMPouringMeshComponent.h"
#include "BMPourableComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMOD_API UBMPourableComponent : public UBMInteractionComponent
{
	GENERATED_BODY()
	protected:
    UPROPERTY(Instanced)
    UBMAnalogueControlComponent* AnalogueControlComp;
    
    UPROPERTY(Instanced)
    UBMObjectTransfer* ObjectTransferComp;
    
    UPROPERTY(Instanced)
    UBMCarryableComponent* CarryComponent;
    
    UPROPERTY(Instanced)
    UBMLidInteractionComponent* LidComponent;
    
    UPROPERTY(Instanced)
    TArray<UBMPouringMeshComponent*> PourMeshComponents;
    
    UPROPERTY()
    ABMDynamicContainer* PourTarget;
    
    UPROPERTY()
    ABMSink* PouringIntoSink;
    
    UPROPERTY()
    AActor* InteracteeToTransferTo;
    
    UPROPERTY()
    FRotator OriginalRotationOfPourtarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PouringMaxHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringAreaRotationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LiquidTransferScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PourSocketName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    ECarryState PouringState;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool IsPouring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrottlePourArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrottleAbovePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MiniumPourSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockToAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CollisionPadding;

protected:
    UFUNCTION()
    void TransferLiquid();
    
    UFUNCTION()
    void TransferIngredient();
    
    UFUNCTION()
    void StopAdjustPour(float NewPouringWidth, float NewPouringHeight, FVector NewSplinePosition);
    
    UFUNCTION()
    void OpeningContainerDoneLocAndRot(AActor* ActorCalledDocking);
    
    UFUNCTION()
    void OpeningContainerDone(AActor* ActorCalledDocking);
    
    UFUNCTION()
    void CompleteMovement();
    
    UFUNCTION()
    void AdjustPour(bool bIncreasePour);
};
