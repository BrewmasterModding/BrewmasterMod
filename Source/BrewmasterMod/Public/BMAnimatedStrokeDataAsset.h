// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BMAnimatedStrokeData.h"
#include "BMAnimatedStrokeDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class BREWMASTERMOD_API UBMAnimatedStrokeDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
        FSlateBrush DefaultAnimatedStrokeBrush;

    UPROPERTY(EditAnywhere)
        TArray<FBMAnimatedStrokeData> AnimatedStrokeBrushes;

private:
    UPROPERTY(EditAnywhere)
        float SelectionStepSize;

    UPROPERTY(EditAnywhere)
        bool SelectBrushByHeight;

public:
	UBMAnimatedStrokeDataAsset()
	{
	}

	UFUNCTION(BlueprintCallable)
	FSlateBrush ChooseAnimatedStrokeBrushFromWidgetSize(const FVector2D WidgetLocalSize)
	{
		return FSlateBrush();
	}
};
