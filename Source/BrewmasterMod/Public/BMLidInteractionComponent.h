// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMDockingAnimationComponent.h"
#include "BMBaseLid.h"
#include "BMAudioAssetListBase.h"
#include "BMLidInteractionComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMOD_API UBMLidInteractionComponent : public UBMInteractionComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
	bool LidStartsOpen;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool OpenBeforePour;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool OpenInHand;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool Reclose;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UAnimSequence* MorpherAnimation;
    
	UPROPERTY()
	FTimerHandle MorpherAnimationTimerHandle;
    
protected:
	UPROPERTY(Instanced)
	UBMDockingAnimationComponent* DockingComponent;
    
	UPROPERTY()
	ABMBaseLid* Lid;
    
	UPROPERTY()
	UBMAudioAssetListBase* AudioAssetList;

	UFUNCTION()
	void SetLidOpen(AActor* ActorCalledDocking);
    
	UFUNCTION()
	void SetLidClosed(AActor* ActorCalledDocking);
    
	UFUNCTION()
	void MorpherAnimationComplete();
    
public:
	UFUNCTION()
	bool GetLidAnimating();
};
