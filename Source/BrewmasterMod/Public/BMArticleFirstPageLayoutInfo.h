#pragma once
#include "CoreMinimal.h"
#include "BMArticleFirstPageLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArticleFirstPageLayoutInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ArticleImageFill;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector2D BeerStyleImageSize;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector2D HistoryTextBoxSizeWithoutRecipes;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector2D HistoryTextBoxMaximumSize;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ESlateVisibility RecipeListVisibility;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ESlateVisibility SummaryTextVisibility;

	FBMArticleFirstPageLayoutInfo()
	{
	}
};
