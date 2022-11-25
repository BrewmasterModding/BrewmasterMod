#pragma once
#include "CoreMinimal.h"
#include "BMArticlePageTextBoxLayoutAsIntPoint.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArticlePageTextBoxLayoutAsIntPoint
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FIntPoint> TextBoxSizes;
};
