#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "BMUserWidget.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "BMOptionKeyboardBinding.generated.h"

class UBMButton;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMOptionKeyboardBinding : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMOptionKeyboardBinding();
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyBindingText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelect(UBMButton* Button, bool Selected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAlternatingStyle(bool IsEvenEntry);
    
    UFUNCTION()
    void OverrideMapping();
    
    UFUNCTION(BlueprintCallable)
    void KeyPressedMouse(FGeometry MyGeometry, FPointerEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void KeyPressed(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSecondaryButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetSecondaryAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetPrimaryButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPrimaryAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMainButton();
    
    UFUNCTION()
    void CancelMappingChange();
    
    UFUNCTION()
    void ButtonPressed(int32 Index);
    
};

