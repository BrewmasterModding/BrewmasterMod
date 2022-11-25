// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMRecipeStat.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMRecipeStat : public UBMUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetStatValueText(const FText& Text, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetStatTitleText(const FText& Text, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetDashText(const FText& Text, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetCriticalIcon(bool ShowIcon);
};
