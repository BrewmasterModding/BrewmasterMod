// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBulletTextItem.h"
#include "BMBulletList.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMBulletList : public UBMUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UBMBulletTextItem> BulletItemClass;
	
	UFUNCTION(BlueprintImplementableEvent)
	void SetBulletTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	UPanelWidget* GetBulletPointsHolder();
};
