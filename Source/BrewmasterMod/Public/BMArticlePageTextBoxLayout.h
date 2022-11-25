#pragma once
#include "CoreMinimal.h"
#include "BMArticlePageTextBoxLayout.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArticlePageTextBoxLayout
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FVector2D> TextBoxSizes;
};
