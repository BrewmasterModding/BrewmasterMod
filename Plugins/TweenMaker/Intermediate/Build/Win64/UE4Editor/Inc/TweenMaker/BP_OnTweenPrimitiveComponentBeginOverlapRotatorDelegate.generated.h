// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenRotator;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TWEENMAKER_BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate_generated_h
#error "BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate_h_10_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms \
{ \
	UTweenRotator* Tween; \
	UPrimitiveComponent* ThisComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FHitResult SweepResult; \
}; \
static inline void FBP_OnTweenPrimitiveComponentBeginOverlapRotator_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenPrimitiveComponentBeginOverlapRotator, UTweenRotator* Tween, UPrimitiveComponent* ThisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult) \
{ \
	_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisComponent=ThisComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.SweepResult=SweepResult; \
	BP_OnTweenPrimitiveComponentBeginOverlapRotator.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
