// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "BMActionGlyph.h"
#include "BMActionGlyphDecorator.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType)
class BREWMASTERMOD_API UBMActionGlyphDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
        float GlyphScaleMultiplier;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
        TSubclassOf<UBMActionGlyph> ActionGlyphBP;
};
