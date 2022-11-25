#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataBeerBottles_Textures.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArtDataBeerBottles_Textures : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	TSoftObjectPtr<UTexture> NormalMap;

	FBMArtDataBeerBottles_Textures()
	{
	}
};
