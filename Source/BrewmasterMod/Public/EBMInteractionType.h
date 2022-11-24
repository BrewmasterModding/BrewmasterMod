// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EBMInteractionType : uint8 {
    NONE,
    Pouring,
    Temperature,
    FlowControl,
    Pump,
    All,
    IconFraming,
    SwapItem,
};
