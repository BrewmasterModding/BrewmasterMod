#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BMIconGenerationData.h"
#include "BMIconGenerationDataAsset.generated.h"

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMIconGenerationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMIconGenerationData> IconGenerationData;
    
    UBMIconGenerationDataAsset();
};

