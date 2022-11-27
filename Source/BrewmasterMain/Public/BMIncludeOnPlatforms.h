#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMIncludeOnPlatforms.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIncludeOnPlatforms : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnPC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnPS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnXBox;
    
    FBMIncludeOnPlatforms();
};

