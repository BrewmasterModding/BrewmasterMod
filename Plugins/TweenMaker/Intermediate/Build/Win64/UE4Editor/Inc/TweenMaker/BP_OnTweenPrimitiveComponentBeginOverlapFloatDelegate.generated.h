// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenFloat;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TWEENMAKER_BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate_generated_h
#error "BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate_h_10_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapFloat_Parms \
{ \
	UTweenFloat* Tween; \
	UPrimitiveComponent* ThisComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FHitResult SweepResult; \
}; \
static inline void FBP_OnTweenPrimitiveComponentBeginOverlapFloat_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenPrimitiveComponentBeginOverlapFloat, UTweenFloat* Tween, UPrimitiveComponent* ThisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult) \
{ \
	_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapFloat_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisComponent=ThisComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.SweepResult=SweepResult; \
	BP_OnTweenPrimitiveComponentBeginOverlapFloat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentBeginOverlapFloatDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
