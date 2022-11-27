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
#ifdef TWEENMAKER_BP_OnTweenActorBeginOverlapVectorDelegate_generated_h
#error "BP_OnTweenActorBeginOverlapVectorDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenActorBeginOverlapVectorDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenActorBeginOverlapVectorDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenActorBeginOverlapVectorDelegate_h_8_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenActorBeginOverlapVector_Parms \
{ \
	UTweenVector* Tween; \
	AActor* ThisActor; \
	AActor* OtherActor; \
}; \
static inline void FBP_OnTweenActorBeginOverlapVector_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenActorBeginOverlapVector, UTweenVector* Tween, AActor* ThisActor, AActor* OtherActor) \
{ \
	_Script_TweenMaker_eventBP_OnTweenActorBeginOverlapVector_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisActor=ThisActor; \
	Parms.OtherActor=OtherActor; \
	BP_OnTweenActorBeginOverlapVector.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenActorBeginOverlapVectorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
