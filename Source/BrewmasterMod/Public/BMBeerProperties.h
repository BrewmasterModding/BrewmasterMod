﻿#pragma once
#include "CoreMinimal.h"
#include "EFlavourCategory.h"
#include "EFlavourNotes.h"
#include "BMContaminationData.h"
#include "BMBeerProperties.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMBeerProperties
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        bool bContainsLiquid;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float TotalContainerContentsMass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float TotalLiquidVolume;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float TotalContainerContentsVolume;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Temperature;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Colour;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        TMap<EFlavourCategory, float> Flavor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        TMap<EFlavourNotes, float> FlavourNotes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float AlcoholByVolume_PerCent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float SpecificGravity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float InternationalBitternessUnits;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Carbonation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Contamination;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        FBMContaminationData ContaminationData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float ProteinContent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float OriginalGravity;

    UPROPERTY(EditAnywhere, SaveGame)
        TMap<int32, double> DissolvedIngredientsMasses;

    UPROPERTY(EditAnywhere, SaveGame)
        TMap<int32, double> NonDissolvedIngredientsMasses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        TMap<int32, FName> DissolvedIngredientNames;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        TMap<int32, FName> NonDissolvedIngredientNames;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Clarity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Body;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float HeadSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Bubbles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float AliveYeastPopulation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float ActiveYeastPopulation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float DormantYeastPopulation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float DeadYeastPopulation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float DeadYeastWhileActive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Agitation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float Particulates;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        TArray<FName> UsedEquipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        TArray<FName> UsedYeastTypes;

	FBMBeerProperties()
	{
	}
};
