// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMArticleItem.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMArticleItem : public UBMUserWidget
{
	GENERATED_BODY()
public:
	UBMArticleItem()
	{
	}

	UFUNCTION(BlueprintImplementableEvent)
	void SetImageAsMaterial(UMaterialInstance* InMaterial, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetImage(UTexture2D* Texture, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetCaption(const FText& Text, ESlateVisibility WidgetVisibility);
};
