// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMPlayerInventoryInteractionComp.generated.h"

class ABMCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMOD_API UBMPlayerInventoryInteractionComp : public UBMInteractionComponent
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	ABMCharacter* PlayerChar;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float ItemSwitchGracePeriod;

	UFUNCTION()
	void ChangeActiveItem(int32 NewActiveItem);
};
