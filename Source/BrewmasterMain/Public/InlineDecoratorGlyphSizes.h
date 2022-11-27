#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InlineDecoratorGlyphSizes.generated.h"

USTRUCT(BlueprintType)
struct FInlineDecoratorGlyphSizes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector2D PrimaryGlyphSize;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D MultiButtonIconSize;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D SecondaryGlyphSize;
    
    BREWMASTERMAIN_API FInlineDecoratorGlyphSizes();
};

