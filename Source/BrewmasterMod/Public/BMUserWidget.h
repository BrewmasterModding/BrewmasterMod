// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMTooltipData.h"
#include "BMUserWidget.generated.h"

class UBMTooltipWidget;

UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent)
        UPanelWidget* GetPopUpAttachPanel();

	UFUNCTION(BlueprintCallable)
	UBMTooltipWidget* CreateTooltipWidget(FBMTooltipData TooltipData)
	{
		return __nullptr;
	}
};
