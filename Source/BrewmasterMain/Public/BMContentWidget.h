#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "Types/SlateEnums.h"
#include "Components/Widget.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "BMContentWidget.generated.h"

UCLASS()
class BREWMASTERMAIN_API UBMContentWidget : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bShowEffectWhenDisabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ContentColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ContentColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DesiredSizeScale;
    
    UPROPERTY(EditAnywhere)
    bool bFlipForRightToLeftFlowDirection;
    
protected:
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
    
public:
    UBMContentWidget();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSizeScale(FVector2D InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetShouldThisShowPlatform();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetShouldThisShowInput();
    
};

