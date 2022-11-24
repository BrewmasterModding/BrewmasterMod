#pragma once
#include "CoreMinimal.h"
#include "EBMTriggeredContaminationType.h"
#include "EBMInherentContaminationType.h"
#include "BMInherentContaminationData.h"
#include "BMContaminationData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMContaminationData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, SaveGame)
        TMap<EBMTriggeredContaminationType, float> TriggeredContaminationData;

    UPROPERTY(BlueprintReadOnly, SaveGame)
        TMap<EBMInherentContaminationType, FBMInherentContaminationData> InherentContaminationData;

	FBMContaminationData()
	{
	}
};
