#pragma once
#include "CoreMinimal.h"
#include "BMAnalyticApplicationData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAnalyticApplicationData
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FDateTime SessionStart;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FDateTime SessionStop;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FString SessionDurationInSeconds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FString SessionDate;

	FBMAnalyticApplicationData()
	{
	}
};
