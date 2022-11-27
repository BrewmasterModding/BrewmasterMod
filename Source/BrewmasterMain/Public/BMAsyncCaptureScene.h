#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncCaptureSceneCompleteDelegate.h"
#include "BMAsyncCaptureScene.generated.h"

class UBMAsyncCaptureScene;
class ASceneCapture2D;
class UTextureRenderTarget2D;
class UCameraComponent;

UCLASS(MinimalAPI)
class UBMAsyncCaptureScene : public UBlueprintAsyncActionBase {
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
    UBMAsyncCaptureScene();
    UFUNCTION(BlueprintCallable)
    static UBMAsyncCaptureScene* CaptureSceneAsync(UCameraComponent* ViewCamera, TSubclassOf<ASceneCapture2D> SceneCaptureClass, int32 ResX, int32 ResY);
    
};

