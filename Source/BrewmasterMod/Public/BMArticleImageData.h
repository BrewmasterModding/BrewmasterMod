#pragma once
#include "CoreMinimal.h"
#include "BMArticleImageData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArticleImageData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bShouldUseMaterialInstance;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UTexture2D> ImageAsTexture;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UMaterialInstance> ImageAsMaterialInstance;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseAutomaticImageSize;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ImageCaption;

	FBMArticleImageData()
	{
	}
};
