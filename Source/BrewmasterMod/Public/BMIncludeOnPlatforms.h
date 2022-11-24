#pragma once
#include "CoreMinimal.h"
#include "BMIncludeOnPlatforms.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMIncludeOnPlatforms
{
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

	FBMIncludeOnPlatforms()
	{
	}
};
