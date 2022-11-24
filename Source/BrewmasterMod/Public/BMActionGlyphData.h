#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMActionGlyphData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMActionGlyphData : public FTableRowBase
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        FKey Key;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TSoftObjectPtr<UTexture2D> InputIconGlyph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TSoftObjectPtr<UTexture2D> HoldInputIconGlyph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TSoftObjectPtr<UTexture2D> NextGenPlatformOverride;

	FBMActionGlyphData()
	{
	}
};
