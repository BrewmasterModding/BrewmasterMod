#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "RichTipTypeRow.generated.h"

class UBMKeywordWidget;
class UBMKeywordTooltipWidget;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FRichTipTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMKeywordWidget> KeywordWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMKeywordTooltipWidget> KeywordTooltipWidget;
    
    FRichTipTypeRow();
};

