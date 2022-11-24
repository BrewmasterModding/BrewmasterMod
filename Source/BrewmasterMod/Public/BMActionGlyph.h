// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "InlineDecoratorGlyphSizes.h"
#include "BMActionGlyph.generated.h"

class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMActionGlyph : public UBMUserWidget
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
        bool bIsInlinedAsDecoratorWidget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        bool bShowGlyphIfUnbound;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
        FSlateBrush UnboundErrorGlyph;

	UBMActionGlyph()
	{
	}

	UFUNCTION()
	void UpdateIcon(bool IsGamepad)
	{
	}

	UFUNCTION()
	void SetShowUnboundActionGlyph(bool InShouldShowIfUnbound)
	{
	}

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetPlusImage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetLongHoldTime(float TotalTime, float TimePassed, float MinimumHoldTime);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetIconGlyphBrush(const FSlateBrush BGBrush);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void ResetElapsedLongHoldTime();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void HidePlusImage();

	UFUNCTION()
	FSlateBrush GetUnboundErrorGlyph()
	{
        return FSlateBrush();
	}

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        TArray<UBMRichText*> GetTextBoxes();

	UFUNCTION()
	bool GetShowUnboundActionGlyph()
	{
		return false;
	}

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        TArray<UImage*> GetImages();

    UFUNCTION(BlueprintImplementableEvent)
        FInlineDecoratorGlyphSizes GetActionGlyphBrushSizes();

    UFUNCTION(BlueprintImplementableEvent)
        void ApplyInlineDecoratorStyling(FInlineDecoratorGlyphSizes NewGlyphSizes, FTextBlockStyle NewTextStyle);
};
