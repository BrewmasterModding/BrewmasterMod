// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMAnimatedStrokeDataAsset.h"
#include "TweenContainer.h"
#include "BMAnimatedStroke.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMAnimatedStroke : public UBMUserWidget
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        float StrokeDelayInTime;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        float StrokeAnimTime;

    UPROPERTY(EditAnywhere)
        UBMAnimatedStrokeDataAsset* AnimatedStrokeBrushesData;

private:
    UPROPERTY()
        UTweenContainer* ActiveTweenContainer;

    UPROPERTY()
        FVector2D LastLocalSize;

public:
	UBMAnimatedStroke()
	{
	}

	UFUNCTION(BlueprintCallable)
	void ResetAnimatedStroke()
	{
	}

	UFUNCTION(BlueprintCallable)
	void PlayAnimatedStroke()
	{
	}

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        UMaterialInstanceDynamic* GetStrokeMaterialInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        UWidget* GetStrokeImageParentWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        UImage* GetStrokeImage();
};
