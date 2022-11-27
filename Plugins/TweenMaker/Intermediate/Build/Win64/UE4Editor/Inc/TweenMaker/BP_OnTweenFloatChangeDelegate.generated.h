// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenFloat;
#ifdef TWEENMAKER_BP_OnTweenFloatChangeDelegate_generated_h
#error "BP_OnTweenFloatChangeDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenFloatChangeDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenFloatChangeDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenFloatChangeDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenFloatChange_Parms \
{ \
	UTweenFloat* Tween; \
}; \
static inline void FBP_OnTweenFloatChange_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenFloatChange, UTweenFloat* Tween) \
{ \
	_Script_TweenMaker_eventBP_OnTweenFloatChange_Parms Parms; \
	Parms.Tween=Tween; \
	BP_OnTweenFloatChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenFloatChangeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
