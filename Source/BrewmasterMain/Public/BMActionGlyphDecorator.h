#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/RichTextBlockDecorator.h"
#include "BMActionGlyphDecorator.generated.h"

class UBMActionGlyph;

UCLASS(Abstract, BlueprintType)
class BREWMASTERMAIN_API UBMActionGlyphDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float GlyphScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UBMActionGlyph> ActionGlyphBP;
    
    UBMActionGlyphDecorator();
};

