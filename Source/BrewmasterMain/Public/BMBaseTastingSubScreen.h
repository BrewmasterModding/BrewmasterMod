#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBeerProperties.h"
#include "BMBaseTastingSubScreen.generated.h"

class UTweenContainer;
class UBMActionGlyph;
class UBMTextButtonWidget;

UCLASS(Abstract, EditInlineNew)
class BREWMASTERMAIN_API UBMBaseTastingSubScreen : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bPlayAnimation;
    
    UPROPERTY()
    bool bFullNavigationHasBeenEnabled;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UBMBaseTastingSubScreen();
    UFUNCTION()
    void SkipAnimation();
    
    UFUNCTION()
    void SetBindings(bool bBindingsEnabled, bool bFullNavigationOn);
    
    UFUNCTION()
    void PreviousScreen();
    
    UFUNCTION()
    void PlayAnimations(FBMBeerProperties& BeerProperties);
    
    UFUNCTION()
    void NextScreen();
    
    UFUNCTION()
    void MoveToNextSequence();
    
    UFUNCTION()
    void HandleContinueButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetContinueWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetContinueActionGlyph();
    
    UFUNCTION()
    void AnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void AnimateOrSetBinding();
    
};

