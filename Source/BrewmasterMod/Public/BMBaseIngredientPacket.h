// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseIngredient.h"
#include "EBMPerformance.h"
#include "EBMPlatformLowLevelEnum.h"
#include "BMPourableComponent.h"
#include "BMLidInteractionComponent.h"
#include "BMAnalogueControlComponent.h"
#include "BMPouringMeshComponent.h"
#include "BMBrewingShaderControl.h"
#include "BMGrainShaderControl.h"
#include "BMCarryableComponent.h"
#include "BMGrainEffectControl.h"
#include "BMDynamicContainer.h"
#include "BMBaseIngredientPacket.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseIngredientPacket : public ABMBaseIngredient
{
	GENERATED_BODY()
	protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumLiquidZOffset;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* MainContainerMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_LiquidContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMPlatformLowLevelEnum, EBMPerformance> PlatformOptimisedMeshSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_Low_LiquidContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_Medium_LiquidContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_High_LiquidContainer;
    
    UPROPERTY(Instanced)
    UProceduralMeshComponent* BaseProcMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UProceduralMeshComponent* PM_Liquid;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPourableComponent* PourComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMAnalogueControlComponent* AnalogueControlComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPouringMeshComponent* PouringSpline;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* GrainPouringFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* GrainPouringSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GrainPouringTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> GrainPouringScalarUserParameters;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMLidInteractionComponent* LidInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMBrewingShaderControl* BrewingShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMGrainShaderControl* GrainShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMGrainEffectControl* GrainEffectShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LiquidMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* LiquidMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowSwaying;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> GrainPouringFXMaterials;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float LiquidVolumePercent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlaneNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlanePosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LowLiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MediumLiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HighLiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* MaxSwayCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwayStiffness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwayDampingFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldOverwriteContentsPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverwriteContentsPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverwriteMaxContentsValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool KeepContentAtOverwriteContentsPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldSpawnContentsRegardlessOfLid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumePercentWhenFilled;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UAudioComponent*> ImpactAudioComponentLoops;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAudioComponent* InitialImpactAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAudioComponent* EndingImpactAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAudioComponent* PouringActionAudioComponent;
    
    UPROPERTY()
    ABMDynamicContainer* CurrentPourTarget;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIconScreenshotContentValues(float ContentsValue);
    
    UFUNCTION()
    UBMCarryableComponent* GetCarryComponent();
};
