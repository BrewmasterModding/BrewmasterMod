// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "GameFramework/Actor.h"
#include "BMIngredientAmount.h"
#include "EBMIngredientContainerSize.h"
#include "BMObjectTransfer.h"
#include "BMCarryableComponent.h"
#include "BMBaseIngredient.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseIngredient : public ABMBaseEquipment, public IBMSaveableActorInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
	FBMIngredientAmount Contents;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
	EBMIngredientContainerSize IngredientContainerSize;
    
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
	USkeletalMeshComponent* ContainerMesh;
    
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	UBMObjectTransfer* ObjectTransferComponent;
    
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	UBMCarryableComponent* CarryComponent;
};
