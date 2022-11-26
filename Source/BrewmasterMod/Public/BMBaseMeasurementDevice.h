// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "GameFramework/Actor.h"
#include "BMDynamicContainer.h"
#include "BMPlayerAttachmentComponent.h"
#include "BMObjectTransfer.h"
#include "BMCarryableComponent.h"
#include "EBMLiquidStatType.h"
#include "EBMBeerStatType.h"
#include "BMTemperatureLCD.h"
#include "BMBaseMeasurementDevice.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseMeasurementDevice : public ABMBaseEquipment
{
	GENERATED_BODY()
	public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* MeasureDeviceSKMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* DialNeedle;
    
    UPROPERTY()
    UAnimSequence* NeedleAnimation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPlayerAttachmentComponent* AttachmentComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMObjectTransfer* ObjectTransferComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMCarryableComponent* CarryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsTemperatureMountedDial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMLiquidStatType LiquidStatMeasurement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMBeerStatType BeerStatMeasurement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MeasurementUnitsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NeedleZeroAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NeedlePositionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NeedleMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NeedleMinValue;
    
    UPROPERTY()
    ABMDynamicContainer* CurrentMeasuredContainer;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MeasurementValue;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UBMTemperatureLCD* LCDWidget;
    
    UPROPERTY(EditAnywhere)
    bool bIsPlaceInType;
    
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInteractionCollisionPosition();
    
    UFUNCTION()
    void SetExtraInteractionCollisonEnabled(bool bNewState);
    
public:
    UFUNCTION()
    void GetMeasurementUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    ABMDynamicContainer* GetMeasuredContainer();
    
    UFUNCTION(BlueprintImplementableEvent)
    UCapsuleComponent* GetInteractionCollision();
    
public:
    UFUNCTION()
    void CompleteMovement();
};
