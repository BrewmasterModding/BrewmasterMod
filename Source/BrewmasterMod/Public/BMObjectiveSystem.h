// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMObjectiveWidget.h"
#include "BMObjectiveSystem.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMObjectiveSystem : public UBMUserWidget
{
	GENERATED_BODY()
protected:
    UPROPERTY(EditDefaultsOnly)
        TSubclassOf<UBMObjectiveWidget> ObjectiveWidgetClass;

public:
	UBMObjectiveSystem()
	{
	}

protected:
    UFUNCTION(BlueprintImplementableEvent)
        UVerticalBox* GetObjectivesHolder();
};
