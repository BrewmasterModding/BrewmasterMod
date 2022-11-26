// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "GameFramework/Actor.h"
#include "BMHeatExchangeData.h"
#include "BMTemperatureLCD.h"
#include "BMDynamicContainer.h"
#include "BMBaseHeatExchanger.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseHeatExchanger : public ABMBaseEquipment, public IBMSaveableActorInterface
{
	GENERATED_BODY()
	public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* PlaceOnHeaterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterial* GlowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialIndexSlot;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMHeatExchangeData HeatExchangeData;
    
    UPROPERTY(SaveGame)
    bool bHeatDataSaved;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* GasAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* LiquidHeatingElementAudioComponent;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicGlowMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicHeatingLightMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicCoolingLightMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bHasLCD;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UBMTemperatureLCD* LCDWidget;
    
    UPROPERTY()
    ABMDynamicContainer* RelevantContainer;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHasHeatingCoolingLights;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsHeating;
    
    UPROPERTY(VisibleAnywhere)
    bool bHeatingLightOn;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsCooling;
    
    UPROPERTY(VisibleAnywhere)
    bool bCoolingLightOn;
    
    UPROPERTY(EditAnywhere)
    bool bHasPhysicalButtons;
    
    UPROPERTY()
    UTweenContainer* IncreaseButtonTweenContainer;
    
    UPROPERTY()
    UTweenContainer* DecreaseButtonTweenContainer;
    
    UPROPERTY()
    float IncreaseButtonCurrentMorph;
    
    UPROPERTY()
    float DecreaseButtonCurrentMorph;
    
public:
    UFUNCTION()
    void UpdateIncreaseButtonMorph(UTweenFloat* MorphTween);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHeatExchangerActiveAudio(const float TempFractValue);
    
    UFUNCTION()
    void UpdateDecreaseButtonMorph(UTweenFloat* MorphTween);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTemperatureVisuals();
    
    UFUNCTION()
    void SetupUpdatesBinding();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetTemperature(float inTemperature);
    
    UFUNCTION()
    void OnButtonPress(bool bIsIncrease);
    
    UFUNCTION()
    void OnBrewSimUpdated();
    
    UFUNCTION()
    bool IsActive();
    
    UFUNCTION()
    FBMHeatExchangeData GetHeatExchData();
    
    UFUNCTION(BlueprintImplementableEvent)
    USkeletalMeshComponent* GetControllerMesh();
    
    UFUNCTION(BlueprintImplementableEvent)
    USkeletalMeshComponent* GetAnimationMesh();
};
