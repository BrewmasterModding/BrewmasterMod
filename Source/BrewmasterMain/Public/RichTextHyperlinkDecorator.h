#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "Styling/SlateTypes.h"
#include "RichTextHyperlinkDecorator.generated.h"

UCLASS()
class BREWMASTERMAIN_API URichTextHyperlinkDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHyperlinkStyle HyperlinkStyle;
    
    URichTextHyperlinkDecorator();
    UFUNCTION()
    void OpenHyperlink(const FString& HyperlinkToOpen);
    
};

