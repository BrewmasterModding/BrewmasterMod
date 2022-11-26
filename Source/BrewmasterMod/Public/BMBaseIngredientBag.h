// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseIngredient.h"
#include "GameFramework/Actor.h"
#include "BMCarryableComponent.h"
#include "BMPlayerAttachmentComponent.h"
#include "BMDockingAnimationComponent.h"
#include "BMBaseIngredientBag.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseIngredientBag : public ABMBaseIngredient
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	UBMPlayerAttachmentComponent* AttachmentComponent;
    
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	UBMDockingAnimationComponent* DockingComponent;
    
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	USkeletalMeshComponent* ClipHanger;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterialInterface* IngredientMaterial;
    
	UPROPERTY()
	UMaterialInstanceDynamic* IngredientMaterialInstance;
    
	UPROPERTY(Instanced)
	UBMCarryableComponent* AttachedParentCarryComp;
    
	UPROPERTY(EditDefaultsOnly)
	USkeletalMesh* SittingBag;
    
	UPROPERTY(EditDefaultsOnly)
	USkeletalMesh* Bag;
    
	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle MorphTargetsData;
    
	UPROPERTY()
	FTimerHandle WetnessFadeHandle;
    
	UPROPERTY(SaveGame)
	bool BaseDampnessTriggered;
    
	UPROPERTY(EditDefaultsOnly)
	float TopHeightLagTime;
    
	UPROPERTY(EditDefaultsOnly)
	float BaseDampnessStart;
    
	UPROPERTY(EditDefaultsOnly)
	float BaseDampnessEnd;
    
	UPROPERTY(EditDefaultsOnly)
	float BaseDampnessFadeTime;
    
	UPROPERTY(SaveGame)
	bool bIsSitting;
    
	UPROPERTY(SaveGame)
	bool ClipVisible;
    
	UPROPERTY(SaveGame)
	FVector Position;
    
	UPROPERTY(EditDefaultsOnly)
	float BufferFromWall;
	
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateLabel();
    
	UFUNCTION()
	void SetClipHangerVisibility();
    
	UFUNCTION()
	void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
	UFUNCTION()
	void AttachmentStateChanged(AActor* Actor);
};
