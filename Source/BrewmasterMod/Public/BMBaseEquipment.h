// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseActor.h"
#include "GameFramework/Actor.h"
#include "BMDynamicContainer.h"
#include "BMBaseEquipment.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseEquipment : public ABMBaseActor
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void TurnOnOff(bool bNewOnState);
    
	UFUNCTION()
	void GetTaps(TArray<ABMBaseTap*>& returnTaps);
    
	UFUNCTION(BlueprintCallable)
	ABMDynamicContainer* GetContainerThisAttachedTo();
    
	UFUNCTION(BlueprintCallable)
	ABMDynamicContainer* GetContainerAttachedToThis();
};
