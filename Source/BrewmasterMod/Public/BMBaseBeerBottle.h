// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BMBaseBeerGlass.h"
#include "BMCarryableComponent.h"
#include "EBMBottleColour.h"
#include "BMLabelComponent.h"
#include "BMBaseBeerBottle.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseBeerBottle : public ABMBaseBeerGlass
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, Instanced)
	UStaticMeshComponent* BottleCapOff;
    
	UPROPERTY(EditDefaultsOnly, Instanced)
	UStaticMeshComponent* BottleCapOn;
    
	UPROPERTY(EditDefaultsOnly, Instanced)
	UStaticMeshComponent* BottleLabel;
    
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBMLabelComponent> LabelComponentClass;
    
	UPROPERTY(EditDefaultsOnly)
	TMap<EBMBottleColour, UMaterialInstance*> InsideGlassColour;
    
	UPROPERTY(EditDefaultsOnly)
	TMap<EBMBottleColour, UMaterialInstance*> OutsideGlassColour;
    
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	UBMLabelComponent* LabelComponent;
    
	UPROPERTY(EditDefaultsOnly, SaveGame)
	bool CapOn;
    
public:
	UFUNCTION(BlueprintImplementableEvent)
	void ToggleContactShadow(bool bShowShadow);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetBottleTextures();
    
	UFUNCTION(BlueprintCallable)
	void SetBottleColour(EBMBottleColour BottleColour);
    
	UFUNCTION(BlueprintCallable)
	void SetBottleCapOn(bool bCapOn);
    
	UFUNCTION()
	void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
	UFUNCTION(BlueprintImplementableEvent)
	void AddCollisionMeshToIgnore();
};
