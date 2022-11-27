// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenFloat;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TWEENMAKER_BP_OnTweenActorHitFloatDelegate_generated_h
#error "BP_OnTweenActorHitFloatDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenActorHitFloatDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenActorHitFloatDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenActorHitFloatDelegate_h_10_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenActorHitFloat_Parms \
{ \
	UTweenFloat* Tween; \
	AActor* ThisActor; \
	AActor* OtherActor; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FBP_OnTweenActorHitFloat_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenActorHitFloat, UTweenFloat* Tween, AActor* ThisActor, AActor* OtherActor, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_TweenMaker_eventBP_OnTweenActorHitFloat_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisActor=ThisActor; \
	Parms.OtherActor=OtherActor; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	BP_OnTweenActorHitFloat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenActorHitFloatDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
