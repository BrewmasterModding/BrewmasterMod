// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "BMInputActionData.h"
#include "BMAudioAssetListBase.h"
#include "BMButton.generated.h"


/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonIndex, int32, ButtonID);
UCLASS()
class BREWMASTERMOD_API UBMButton : public UButton
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FBMInputActionData ActionInputData;

    UPROPERTY()
        FButtonIndex Index;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        int32 ButtonID;

    UPROPERTY()
        UBMAudioAssetListBase* AudioAssetList;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        bool bOverridePressAudio;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        bool bOverrideHoverAudio;

	UBMButton()
	{
	}

	UFUNCTION(BlueprintCallable)
	void SetActionInputValue(EBMInput NewInput)
	{
	}

	UFUNCTION(BlueprintCallable)
	void PlayPressAudio()
	{
	}

	UFUNCTION(BlueprintCallable)
	void PlayHoverAudio()
	{
	}

	UFUNCTION()
	void BroadcastButtonIndex()
	{
	}

	UFUNCTION(BlueprintCallable)
	void BroadcastActionDelegate()
	{
	}
};
