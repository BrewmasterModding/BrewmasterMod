#pragma once
#include "CoreMinimal.h"
#include "BMNiagaraEffectControl.h"
#include "EBMGrainEffectPropertyType.h"
#include "BMGrainEffectStuct.h"
#include "BMSingleVolumeState.h"
#include "BMGrainEffectControl.generated.h"

class ABMBaseIngredientPacket;
class UParticleSystem;
class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMGrainEffectControl : public UBMNiagaraEffectControl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UParticleSystem*> ParticleSystemBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMGrainEffectStuct> Properties;
    
public:
    UBMGrainEffectControl();
    UFUNCTION(BlueprintCallable)
    void UpdateBrewShaderPropertiesPacket(ABMBaseIngredientPacket* Packet);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, ABMBaseIngredientPacket* Packet, bool InEditor);
    
    UFUNCTION()
    float GetCodeValuePacket(EBMGrainEffectPropertyType PropertyType, ABMBaseIngredientPacket* Packet);
    
    UFUNCTION()
    float GetCodeValue(EBMGrainEffectPropertyType PropertyType);
    
};

