// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMResourceWidget.generated.h"

/**
 * 
 */
UCLASS()
class BREWMASTERMOD_API UBMResourceWidget : public UBMUserWidget
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
        bool ShowCurrentAmountTextInTooltip;

	UBMResourceWidget()
	{
	}

	UFUNCTION(BlueprintImplementableEvent)
        void SetStyle();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetRewardType(EBMResource Resource);

    UFUNCTION(BlueprintImplementableEvent)
        void SetItemImage(UTexture2D* ImageTexture);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetAmountText(const FText& Amount);
};
