#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMBackgroundSettings.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMBackgroundSettings : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterialInterface* BackgroundMaterial;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTransform BackgroundTransform;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName SettingsName;
};
