// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseActor.h"
#include "GameFramework/Actor.h"
#include "BMFurnitureData.h"
#include "BMBuildModeComponent.h"
#include "EBMInteractingWith.h"
#include "BMBaseFurniture.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseFurniture : public ABMBaseActor
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDebugCorners;
    
protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	FBMFurnitureData FurnitureData;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
	UBMBuildModeComponent* BuildModeComponent;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	bool bShouldOffsetViewAngle;
    
	UPROPERTY()
	FName ItemSpecificDataSourceRowName;
    
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InteractingWith(EBMInteractingWith NewInteractingWith);
    
	UFUNCTION(BlueprintImplementableEvent)
	UBoxComponent* GetSwapCollisionBoxComp();
    
	UFUNCTION(BlueprintCallable)
	FBMFurnitureData GetFurnitureData();
    
	UFUNCTION(BlueprintCallable)
	FBoxSphereBounds BMGetLocalBounds();
};
