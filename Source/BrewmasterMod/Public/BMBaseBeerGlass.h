// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BMDynamicContainer.h"
#include "BMBeerProperties.h"
#include "BMBeerStyle.h"
#include "BMBeerShaderControl.h"
#include "BMBeerBubblesEffectControl.h"
#include "BMBeerLaceShaderControl.h"
#include "BMBeerArtVisualsDataAsset.h"
#include "BMBaseBeerGlass.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseBeerGlass : public ABMDynamicContainer
{
	GENERATED_BODY()
	public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UBMBeerArtVisualsDataAsset* BeerArtVisualsData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_GlassOutside;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_GlassInside;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_ClingingBubbles;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_FakeGlow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerLaceShaderControl> LaceBeerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerShaderControl> BeerShaderClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerShaderControl> BeerCliningBubblesClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerShaderControl> BeerGlowClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerBubblesEffectControl> BeerParticlesClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* BeerBubblesParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeerBubblesParticlesTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* BeerBubblesParticleComponent;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> BeerBubblesDynamicMats;
    
    UPROPERTY(Instanced)
    UBMBeerShaderControl* BeerShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerLaceShaderControl* BeerLaceShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerShaderControl* BeerBubblesShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerShaderControl* BeerGlowShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerBubblesEffectControl* BeerParticlesControl;
    
    UPROPERTY()
    UMaterialInstanceDynamic* GlassOutsideMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* GlassInsideMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ClingingBubblesMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* FakeGlowMaterialInstance;
    
    UPROPERTY(VisibleAnywhere)
    FBMBeerProperties CachedBeerProperties;
    
    UPROPERTY(Instanced)
    UPointLightComponent* BeerPointLight;
    
    UPROPERTY()
    bool bHasSetupShaders;
    
    UPROPERTY(EditDefaultsOnly)
    float FilledAmount;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void TurnOffCustomStencil();
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlassFromEditorTool(FBMBeerStyle BeerProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlassFromDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlassFromBP(FBMBeerProperties BeerProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlass(FBMBeerProperties& BeerProperties);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPointLightComponent* GetPointLight();
};
