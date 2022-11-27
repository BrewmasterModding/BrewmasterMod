#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMCreditsStructure.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCreditsStructure : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ObjectType;
    
    UPROPERTY(EditAnywhere)
    FString Text;
    
    UPROPERTY(EditAnywhere)
    FString TextStyle;
    
    FBMCreditsStructure();
};

