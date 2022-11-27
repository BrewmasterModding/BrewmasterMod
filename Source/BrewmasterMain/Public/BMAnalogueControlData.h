#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMAnalogueControlData.generated.h"

class UCurveFloat;
class USceneComponent;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAnalogueControlData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FComponentReference AnimatingComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* VariableAnimationSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CurveXAxisIsDistanceFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FinalLocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator FinalRotationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketPivotPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZOffsetForPouringPosition;
    
    UPROPERTY(Instanced)
    USceneComponent* AnimatingComponent;
    
    UPROPERTY(Instanced)
    USceneComponent* PivotComp;
    
    FBMAnalogueControlData();
};

