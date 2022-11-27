#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMHardwareBorderWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHardwareBorderWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESlateVisibility SlateVisibilityWhenShown;
    
    UPROPERTY(EditAnywhere)
    bool bShowOnSwitch;
    
    UPROPERTY(EditAnywhere)
    bool bShowOnXBox;
    
    UPROPERTY(EditAnywhere)
    bool bShowOnPlayStation;
    
    UPROPERTY(EditAnywhere)
    bool bShowOnPC;
    
    UPROPERTY(EditAnywhere)
    bool bShowWithController;
    
    UPROPERTY(EditAnywhere)
    bool bShowWithMouseAndKeyboard;
    
    UBMHardwareBorderWidget();
    UFUNCTION()
    void RefreshVisibility_Internal(bool bIsCurrentlyUsingGamepad);
    
    UFUNCTION(BlueprintCallable)
    void RefreshVisibility();
    
    UFUNCTION()
    bool CheckShouldShowForCurrentPlatform();
    
    UFUNCTION()
    bool CheckShouldShowForCurrentInputDevice(bool bIsCurrentlyUsingGamepad);
    
};

