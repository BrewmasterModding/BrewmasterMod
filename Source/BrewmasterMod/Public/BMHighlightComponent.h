// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "EBMHighlightTypes.h"
#include "BMBaseTap.h"
#include "BMDynamicContainer.h"
#include "BMTube.h"
#include "BMCarryableComponent.h"
#include "BMHighlightComponent.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMOD_API UBMHighlightComponent : public UBMInteractionComponent
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, EBMHighlightTypes> HighlightComponentMapping;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool TreatAsBaseParentActor;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ABMBaseTap* Tap;
    
	UPROPERTY(BlueprintReadWrite)
	bool bIsTap;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ABMDynamicContainer* Container;
    
	UPROPERTY(BlueprintReadWrite)
	bool bIsContainer;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<ABMTube*> Tubes;
    
	UPROPERTY(BlueprintReadWrite)
	bool bIsTube;
    
	UPROPERTY(BlueprintReadWrite)
	bool bIsShowingTubeConnection;
    
	UPROPERTY()
	FTimerHandle HideConnectionTimerHandle;
    
	UPROPERTY()
	float HighlightTime;
    
public:
	UFUNCTION()
	void ShowTubeConnection();
    
	UFUNCTION()
	void HideTubeConnection();
    
	UFUNCTION()
	void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
};
