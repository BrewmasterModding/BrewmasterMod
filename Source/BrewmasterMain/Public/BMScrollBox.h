#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "BMScrollBox.generated.h"

UCLASS()
class BREWMASTERMAIN_API UBMScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StickScrollMultiplier;
    
    UBMScrollBox();
    UFUNCTION()
    void VisibilityChanged();
    
    UFUNCTION(BlueprintCallable)
    void UnbindToRightStick();
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSpeed();
    
    UFUNCTION()
    void ResetScrolling();
    
    UFUNCTION(BlueprintCallable)
    void BindToRightStick();
    
protected:
    UFUNCTION()
    void AcceptRightStickInput(float Pitch, float Yaw);
    
};

