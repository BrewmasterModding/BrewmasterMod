// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenFloat;
#ifdef TWEENMAKER_BP_OnTweenSplinePointReachedDelegate_generated_h
#error "BP_OnTweenSplinePointReachedDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenSplinePointReachedDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenSplinePointReachedDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenSplinePointReachedDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenSplinePointReached_Parms \
{ \
	UTweenFloat* Tween; \
	int32 PointIndex; \
}; \
static inline void FBP_OnTweenSplinePointReached_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenSplinePointReached, UTweenFloat* Tween, int32 PointIndex) \
{ \
	_Script_TweenMaker_eventBP_OnTweenSplinePointReached_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.PointIndex=PointIndex; \
	BP_OnTweenSplinePointReached.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenSplinePointReachedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
