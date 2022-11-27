#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMScrollboxWidget.generated.h"

class UNamedSlot;
class UBMScrollBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMScrollboxWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBMScrollBox* ScrollBox;
    
    UPROPERTY(Instanced)
    UNamedSlot* ScrollboxNamedContentSlot;
    
public:
    UBMScrollboxWidget();
    UFUNCTION(BlueprintImplementableEvent)
    UNamedSlot* GetBMScrollboxNamedContentSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetBMScrollbox();
    
};

