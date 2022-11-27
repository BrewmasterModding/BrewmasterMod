#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BMArticlePageTextBoxLayoutAsIntPoint.generated.h"

USTRUCT(BlueprintType)
struct FBMArticlePageTextBoxLayoutAsIntPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIntPoint> TextBoxSizes;
    
    BREWMASTERMAIN_API FBMArticlePageTextBoxLayoutAsIntPoint();
};

