// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMResourceSystem.h"
#include "BMObjectiveSystem.h"
#include "BMActiveQuestWidget.generated.h"



UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMActiveQuestWidget : public UBMUserWidget
{
	GENERATED_BODY()
public:
	UBMActiveQuestWidget()
	{
	}

	UFUNCTION(BlueprintImplementableEvent)
        void SetTitle(const FText& Title);

    UFUNCTION(BlueprintImplementableEvent)
        void SetDescription(const FText& Title);

    UFUNCTION(BlueprintImplementableEvent)
        UBMResourceSystem* GetResourceSystem();

    UFUNCTION(BlueprintImplementableEvent)
        UBMObjectiveSystem* GetRequirmentHolder();
};
