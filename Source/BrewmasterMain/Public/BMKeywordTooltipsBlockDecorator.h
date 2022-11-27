#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "BMKeywordTooltipsBlockDecorator.generated.h"

class UDataTable;

UCLASS(Abstract)
class BREWMASTERMAIN_API UBMKeywordTooltipsBlockDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* TipTypeSet;
    
public:
    UBMKeywordTooltipsBlockDecorator();
};

