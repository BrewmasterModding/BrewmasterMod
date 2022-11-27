#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BMArticlePageTextBoxLayout.generated.h"

USTRUCT(BlueprintType)
struct FBMArticlePageTextBoxLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> TextBoxSizes;
    
    BREWMASTERMAIN_API FBMArticlePageTextBoxLayout();
};

