// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMResourceWidget.h"
#include "BMResourceSystem.generated.h"

/**
 * 
 */
UCLASS()
class BREWMASTERMOD_API UBMResourceSystem : public UBMUserWidget
{
	GENERATED_BODY()
protected:
    UPROPERTY(EditDefaultsOnly)
        TSubclassOf<UBMResourceWidget> ResourceWidgetClass;

public:
	UBMResourceSystem()
	{
	}

	UFUNCTION(BlueprintImplementableEvent)
        UGridPanel* GetRewardHolder();
};
