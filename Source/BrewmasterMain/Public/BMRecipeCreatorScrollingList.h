#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "EBMRecipeCreatorListType.h"
#include "EBMIngredientCategory.h"
#include "BMRecipeInstruction.h"
#include "Styling/SlateBrush.h"
#include "BMRecipeCreatorScrollingList.generated.h"

class UBMRecipeCreatorScreen;
class UDataTable;
class UWidget;
class UBMRecipeOptionButton;
class UBMRichText;
class UScrollBox;
class UBMWItemDetailsPanel;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeCreatorScrollingList : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* IngredientDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMRecipeOptionButton> OptionButtonBP;
    
    UPROPERTY(Instanced)
    UBMRecipeOptionButton* CurrentlySelectedOptionButton;
    
    UPROPERTY()
    EBMRecipeCreatorListType CurrentListType;
    
    UPROPERTY()
    EBMIngredientCategory CurrentIngredientCategory;
    
protected:
    UPROPERTY(Instanced)
    TArray<UBMRecipeOptionButton*> OptionButtonList;
    
    UPROPERTY()
    TArray<FString> ButtonNameList;
    
    UPROPERTY(Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Instanced)
    UBMRecipeCreatorScreen* RecipeCreator;
    
    UPROPERTY(Instanced)
    UWidget* IngredientDetailsPanel;
    
    UPROPERTY(Instanced)
    UBMRichText* SelectedItemDescription;
    
    UPROPERTY(Instanced)
    UBMRichText* ListTitleText;
    
public:
    UBMRecipeCreatorScrollingList();
    UFUNCTION()
    void SortByOwnedButtonPressed();
    
protected:
    UFUNCTION()
    TArray<FString> SortByOwned();
    
public:
    UFUNCTION()
    void SetRecipeCreator(UBMRecipeCreatorScreen* Creator);
    
    UFUNCTION()
    void SetOptionButtonCallback(UBMRecipeOptionButton* OptionButton);
    
protected:
    UFUNCTION()
    void SetListType(EBMRecipeCreatorListType Type);
    
public:
    UFUNCTION()
    void SetListActive(EBMRecipeCreatorListType NewType, FBMRecipeInstruction CurrentInstruction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDetailPanelValues(const FText& Name, FSlateBrush Icon, const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentPhraseText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetChooseText(const FText& Text);
    
protected:
    UFUNCTION()
    void RefreshOptionButtonSelectedStates();
    
    UFUNCTION()
    void PopulateListWithButtons();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetSelectedItemDescription();
    
    UFUNCTION(BlueprintImplementableEvent)
    UScrollBox* GetScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetListTitleText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWItemDetailsPanel* GetItemsPanel();
    
protected:
    UFUNCTION()
    TArray<FString> GetIngredientNames();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetIngredientDetailsPanel();
    
protected:
    UFUNCTION()
    TArray<FString> GetIngredientCategories();
    
    UFUNCTION()
    TArray<FString> GetContainerCategories();
    
    UFUNCTION()
    void FillNameList();
    
};

