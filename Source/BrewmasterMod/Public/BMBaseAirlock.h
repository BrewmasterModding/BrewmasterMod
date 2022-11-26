// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BMBaseEquipment.h"
#include "BMAirlockData.h"
#include "BMBaseAirlock.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseAirlock : public ABMBaseEquipment
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterialInstance* BubblingMaterial;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 BubblingMaterialIndexSlot;
    
protected:
	UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
	FBMAirlockData AirlockData;
    
	UPROPERTY()
	UMaterialInstanceDynamic* BubblingDynamicMaterial;
    
public:
	UFUNCTION()
	void SetBubbleSpeed(float Speed);
    
	UFUNCTION()
	void SetBubbleOpacity(float Opacity);
    
	UFUNCTION()
	FBMAirlockData GetAirlockData();
};
