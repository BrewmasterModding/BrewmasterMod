#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Styling/SlateColor.h"
#include "BMKeywordWidget.generated.h"

class URichTextBlock;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMKeywordWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText KeywordText;
    
    UBMKeywordWidget();
    UFUNCTION(BlueprintImplementableEvent)
    FSlateColor GetTooltipSlateColor();
    
    UFUNCTION(BlueprintImplementableEvent)
    URichTextBlock* GetRichTextBlock();
    
};

