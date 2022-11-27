#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "Styling/SlateBrush.h"
#include "InlineDecoratorGlyphSizes.h"
#include "Styling/SlateTypes.h"
#include "BMActionGlyph.generated.h"

class UImage;
class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMActionGlyph : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsInlinedAsDecoratorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowGlyphIfUnbound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSlateBrush UnboundErrorGlyph;
    
    UBMActionGlyph();
    UFUNCTION()
    void UpdateIcon(bool IsGamepad);
    
    UFUNCTION()
    void SetShowUnboundActionGlyph(bool InShouldShowIfUnbound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlusImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLongHoldTime(float TotalTime, float TimePassed, float MinimumHoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconGlyphBrush(const FSlateBrush BGBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetElapsedLongHoldTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePlusImage();
    
    UFUNCTION()
    FSlateBrush GetUnboundErrorGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UBMRichText*> GetTextBoxes();
    
    UFUNCTION()
    bool GetShowUnboundActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UImage*> GetImages();
    
    UFUNCTION(BlueprintImplementableEvent)
    FInlineDecoratorGlyphSizes GetActionGlyphBrushSizes();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyInlineDecoratorStyling(FInlineDecoratorGlyphSizes NewGlyphSizes, FTextBlockStyle NewTextStyle);
    
};

