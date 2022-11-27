// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenVector;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TWEENMAKER_BP_OnTweenActorHitVectorDelegate_generated_h
#error "BP_OnTweenActorHitVectorDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenActorHitVectorDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenActorHitVectorDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenActorHitVectorDelegate_h_10_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenActorHitVector_Parms \
{ \
	UTweenVector* Tween; \
	AActor* ThisActor; \
	AActor* OtherActor; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FBP_OnTweenActorHitVector_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenActorHitVector, UTweenVector* Tween, AActor* ThisActor, AActor* OtherActor, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_TweenMaker_eventBP_OnTweenActorHitVector_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisActor=ThisActor; \
	Parms.OtherActor=OtherActor; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	BP_OnTweenActorHitVector.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenActorHitVectorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
