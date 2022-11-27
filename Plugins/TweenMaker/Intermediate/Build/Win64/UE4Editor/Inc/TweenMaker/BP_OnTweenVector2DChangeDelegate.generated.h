// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenVector2D;
#ifdef TWEENMAKER_BP_OnTweenVector2DChangeDelegate_generated_h
#error "BP_OnTweenVector2DChangeDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenVector2DChangeDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenVector2DChangeDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenVector2DChangeDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenVector2DChange_Parms \
{ \
	UTweenVector2D* Tween; \
}; \
static inline void FBP_OnTweenVector2DChange_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenVector2DChange, UTweenVector2D* Tween) \
{ \
	_Script_TweenMaker_eventBP_OnTweenVector2DChange_Parms Parms; \
	Parms.Tween=Tween; \
	BP_OnTweenVector2DChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenVector2DChangeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
