#pragma once
#include "CoreMinimal.h"
#include "InlineDecoratorGlyphSizes.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FInlineDecoratorGlyphSizes
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
        FVector2D PrimaryGlyphSize;

    UPROPERTY(BlueprintReadWrite)
        FVector2D MultiButtonIconSize;

    UPROPERTY(BlueprintReadWrite)
        FVector2D SecondaryGlyphSize;

	FInlineDecoratorGlyphSizes()
	{
	}
};
