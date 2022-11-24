#pragma once
#include "CoreMinimal.h"
#include "EBMInput.h"
#include "BMActionGlyph.h"
#include "BMInputActionData.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActionDelegate);
USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMInputActionData
{
	GENERATED_BODY()
public:
    UPROPERTY()
        FActionDelegate ActionDelegate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        EBMInput Input;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
        UBMActionGlyph* ActionGlyph;

	FBMInputActionData()
	{
	}
};
