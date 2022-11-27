#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "OnRecipeInstructionHoveredDelegate.h"
#include "OnRecipeInstructionStepPressedDelegate.h"
#include "OnRecipeInstructionUnhoveredDelegate.h"
#include "Styling/SlateBrush.h"
#include "BMRecipeHUDInstruction.generated.h"

class UMaterialInstanceDynamic;
class UButton;
class UImage;
class UBMRichText;
class UTweenContainer;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeHUDInstruction : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnRecipeInstructionStepPressed OnRecipeInstructionStepPressed;
    
    UPROPERTY()
    FOnRecipeInstructionHovered OnRecipeInstructionHovered;
    
    UPROPERTY()
    FOnRecipeInstructionUnhovered OnRecipeInstructionUnHovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckmarkBackgroundIncompleteBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckmarkBackgroundCompleteBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckmarkBackgroundNextBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrokeAnimTime;
    
    UPROPERTY(Instanced)
    UButton* CheckmarkButton;
    
    UPROPERTY(Instanced)
    UImage* CheckmarkBackgroundImage;
    
    UPROPERTY(Instanced)
    UImage* CheckmarkImage;
    
    UPROPERTY()
    UMaterialInstanceDynamic* CheckmarkMaterialInstance;
    
    UPROPERTY(Instanced)
    UBMRichText* InstructionText;
    
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
public:
    UBMRecipeHUDInstruction();
    UFUNCTION()
    bool TryInterruptActiveTween(UTweenContainer* ContainerToDelete);
    
    UFUNCTION()
    void StopHighlightStepChange();
    
    UFUNCTION()
    void SetStepIncomplete();
    
    UFUNCTION()
    void SetStepComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInstructionTicked(bool bIsTicked);
    
    UFUNCTION()
    void SetInstructionText(FText Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInstructionStepNumber(int32 StepNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInstructionAlpha(float Alpha);
    
    UFUNCTION()
    void PlayStepComplete();
    
    UFUNCTION()
    void PlayHighlightStepChange();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetInstructionText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetCheckmarkMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCheckmarkImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMButton* GetCheckmarkButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCheckmarkBackgroundImage();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastButtonHovered();
    
};

