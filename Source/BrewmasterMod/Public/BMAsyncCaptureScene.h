// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BMAsyncCaptureScene.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncCaptureSceneComplete, UTextureRenderTarget2D*, Texture);
UCLASS(MinimalAPI)
class UBMAsyncCaptureScene : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnAsyncCaptureSceneComplete Complete;
    
private:
	UPROPERTY()
	ASceneCapture2D* SceneCapture;
    
	UPROPERTY()
	UTextureRenderTarget2D* SceneCaptureRT;
    
public:
	UFUNCTION(BlueprintCallable)
	static UBMAsyncCaptureScene* CaptureSceneAsync(UCameraComponent* ViewCamera,
	                                               TSubclassOf<ASceneCapture2D> SceneCaptureClass, int32 ResX,
	                                               int32 ResY)
	{
		return nullptr;
	}
};
