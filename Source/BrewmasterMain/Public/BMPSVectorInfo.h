#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMPSVectorInfo.generated.h"

class UCurveLinearColor;
class UCurveVector;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPSVectorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName VectorParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* CurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* VectorCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RandomizationToOutputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RandomizationToOutputColor;
    
    FBMPSVectorInfo();
};

