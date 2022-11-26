// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "GameFramework/Actor.h"
#include "BMBaseLid.generated.h"

UCLASS()
class BREWMASTERMOD_API ABMBaseLid : public ABMBaseEquipment
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool StartOpen;
};
