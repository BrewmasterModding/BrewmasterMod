#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMLabelTextureAsset.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelTextureAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UTexture2D> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector4 TextureMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsSDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector2D IconScale;
    
    FBMLabelTextureAsset();
};

