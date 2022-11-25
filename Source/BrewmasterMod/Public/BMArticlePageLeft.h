// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMArticleType.h"
#include "BMRichText.h"
#include "BMArticleItem.h"
#include "BMRecipeStat.h"
#include "BMBulletList.h"
#include "BMArticleFirstPageLayoutInfo.h"
#include "BMArticlePageLeft.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMArticlePageLeft : public UBMUserWidget
{
	GENERATED_BODY()
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMArticleType, FBMArticleFirstPageLayoutInfo> ArticleLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecipeTitleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecipeBulletHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecipeListBottomPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeStat> KeyStatsItemClass;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyStatsTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsLeftPage(bool bIsLeftPage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageProperties(float InParentFillSize, FSlateChildSize ImageSizeRule, FVector2D ImageSize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageAndKeystatContainerVisibility(ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHistoryTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHistoryText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHistoryLinkedText(const FText& Text, ESlateVisibility WidgetVisibility, bool UseLinkedTextedBox, UBMRichText* LinkedTextBox);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescriptionTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescriptionText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideQuarterlyLogo();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetStartingRichTextBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetKeyStatsHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBulletList* GetBulletList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMArticleItem* GetArticleItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetAletsContainer();
};
