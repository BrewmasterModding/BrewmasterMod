#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMKeywordTooltipWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMKeywordTooltipWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText HoverHeader;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText HoverText;
    
    UBMKeywordTooltipWidget();
};

