#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBMParamControlType.h"
#include "UObject/NoExportTypes.h"
#include "BMEditableParamID.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEditableParamID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName UniqueParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMParamControlType ControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FloatMinMax;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsTextParam;
    
    FBMEditableParamID();
};

