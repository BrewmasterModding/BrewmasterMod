#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "BMStaticPropType.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMStaticPropType : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> PropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PropName;
    
    FBMStaticPropType();
};

