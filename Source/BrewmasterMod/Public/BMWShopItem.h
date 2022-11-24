// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMShopUIMode.h"
#include "BMWShopItem.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverItem, UBMWShopItem*, ShopItem);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnhoverItem);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedItem, UBMWShopItem*, ShopItem);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedItemMKB, UBMWShopItem*, ShopItem);
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMWShopItem : public UBMUserWidget
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
        FDataTableRowHandle ShopItemData;

    UPROPERTY()
        FOnHoverItem HoveredItemDelegate;

    UPROPERTY()
        FOnUnhoverItem UnHoveredItemDelegate;

    UPROPERTY()
        FOnSelectedItem SelectedItemDelegate;

    UPROPERTY()
        FOnSelectedItemMKB SelectedItemDelegateMKB;

    UPROPERTY(BlueprintReadOnly)
        bool IsIngredient;

    UPROPERTY(BlueprintReadOnly)
        bool IsFurniture;

    UPROPERTY(BlueprintReadOnly)
        bool IsInCart;

    UPROPERTY(Instanced)
        UBMUserWidget* ParentWidget;

	UBMWShopItem()
	{
	}

	UFUNCTION(BlueprintImplementableEvent)
        void ShowInfinitySymbol(bool bShowIcon);

    UFUNCTION(BlueprintImplementableEvent)
        void ShowAmountText(bool bShowText);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetShoppingListOwnedBackground(bool bIsOwnedOrPurchased);

    UFUNCTION(BlueprintImplementableEvent)
        void SetShopItemIcon(FSlateBrush Icon);

    UFUNCTION(BlueprintImplementableEvent)
        void SetShopItemFocused();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetItemStyleForShop(bool bIsPurchaseable, EBMShopUIMode CurrentShopMode);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void SetItemStyleForInventory(bool bIsPurchaseable);

    UFUNCTION(BlueprintImplementableEvent)
        void SetIsInCartIconVisibility(bool IsAddedToCart);

    UFUNCTION(BlueprintImplementableEvent)
        void SetIsChecked(bool IsChecked);

    UFUNCTION(BlueprintImplementableEvent)
        void SetDisabled(bool IsDisabled);

    UFUNCTION(BlueprintImplementableEvent)
        void SetCheckMarkVisibility(ESlateVisibility CheckMarkVisibility);

    UFUNCTION(BlueprintImplementableEvent)
        void SetCheckMark(bool SetChecked);

    UFUNCTION(BlueprintImplementableEvent)
        void SetAmountStoredAndOwnedText(const FText& Amount);

    UFUNCTION(BlueprintImplementableEvent)
        FSlateBrush GetSlateBrush();

	UFUNCTION(BlueprintCallable)
	void BroadcastUnfocusedItem()
	{
	}

	UFUNCTION(BlueprintCallable)
	void BroadcastSelectedItemMKB()
	{
	}

	UFUNCTION(BlueprintCallable)
	void BroadcastSelectedItem()
	{
	}

	UFUNCTION(BlueprintCallable)
	void BroadcastFocusedItem()
	{
	}
};
