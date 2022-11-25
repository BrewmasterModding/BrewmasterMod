#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMBeerCategory.h"
#include "EBMIngredientSubCategory.h"
#include "EBMMastery.h"
#include "EBMArticleType.h"
#include "BMArticleImageData.h"
#include "BMArticleData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArticleData : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	FName ArticleID;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	FName Title;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	FName Summary;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	FName MainText;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	TArray<FBMArticleImageData> ArticleImages;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	EBMArticleType ArticleType;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	TArray<FName> Recipes;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	TArray<FName> ArticleDependencies;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	EBMBeerCategory BeerCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	FName BeerStyle;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	EBMIngredientSubCategory IngredientSubCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	EBMMastery MasteryLevel;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	bool UnlockedAtStart;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	TArray<FName> CompleteNarrativeStages;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	bool bForceSpawnIfNarrative;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	bool bForceSpawnIfValid;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	int32 SeasonMin;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	int32 Weighting;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
	bool bExcludeFromDemo;

	FBMArticleData()
	{
	}
};
