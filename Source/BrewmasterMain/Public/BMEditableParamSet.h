#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMEditableParamID.h"
#include "EBMLabelTextSlot.h"
#include "BMEditableParamSet.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEditableParamSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMEditableParamID> Params;
    
    UPROPERTY(VisibleAnywhere)
    TArray<EBMLabelTextSlot> RelevantText;
    
    FBMEditableParamSet();
};

