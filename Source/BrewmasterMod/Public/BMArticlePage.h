// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMArticleItem.h"
#include "BMRichText.h"
#include "BMArticlePageTextBoxLayout.h"
#include "BMArticlePage.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMArticlePage : public UBMUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FBMArticlePageTextBoxLayout> TextBoxLayouts;
    
public:
	UBMArticlePage()
	{
	}

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
	UFUNCTION(BlueprintImplementableEvent)
	void SetCategoryName(const EBMArticleType ArticleType);
    
	UFUNCTION(BlueprintImplementableEvent)
	void RightPageSetUp(int32 ImageNumber);
    
	UFUNCTION(BlueprintImplementableEvent)
	void LeftPageSetUp(int32 ImageNumber);
    
	UFUNCTION(BlueprintImplementableEvent)
	void HideQuarterlyLogo();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMArticleItem* GetTopRightPicture();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMArticleItem* GetTopLeftPicture();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMRichText* GetStartingRichTextBox();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMArticleItem* GetMiddleRightPicture();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMArticleItem* GetMiddleLeftPicture();
    
	UFUNCTION(BlueprintImplementableEvent)
	TArray<UBMRichText*> GetLinkedArticleTextBoxes();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMArticleItem* getBottomRightPicture();
    
	UFUNCTION(BlueprintImplementableEvent)
	UBMArticleItem* GetBottomLeftPicture();
};
