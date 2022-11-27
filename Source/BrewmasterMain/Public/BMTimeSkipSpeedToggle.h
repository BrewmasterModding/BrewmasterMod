#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMTimeSkipSpeedToggle.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTimeSkipSpeedToggle : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool bCurrentActiveTimeSpeed;
    
public:
    UBMTimeSkipSpeedToggle();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTimeSpeedText(const FText& InText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsActiveTimeSpeed(bool InIsEnabled);
    
};

