#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMTransferData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMTransferData : public FTableRowBase
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere)
	float TimeToComplete;
    
	UPROPERTY(EditAnywhere)
	UCurveFloat* MovementCurve;
    
	UPROPERTY(EditAnywhere)
	FName Socket;
    
	UPROPERTY(EditAnywhere)
	UCurveVector* MovementOffsetCurve;
    
	UPROPERTY(EditAnywhere)
	float CurveZOffsetMaximum;
    
	UPROPERTY(EditAnywhere)
	float CurveXOffsetMaximum;
    
	UPROPERTY(EditAnywhere)
	float CurveYOffsetMaximum;
};
