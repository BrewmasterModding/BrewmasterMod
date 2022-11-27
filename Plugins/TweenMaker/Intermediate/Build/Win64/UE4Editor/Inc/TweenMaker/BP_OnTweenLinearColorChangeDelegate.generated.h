// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenLinearColor;
#ifdef TWEENMAKER_BP_OnTweenLinearColorChangeDelegate_generated_h
#error "BP_OnTweenLinearColorChangeDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenLinearColorChangeDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenLinearColorChangeDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenLinearColorChangeDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenLinearColorChange_Parms \
{ \
	UTweenLinearColor* Tween; \
}; \
static inline void FBP_OnTweenLinearColorChange_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenLinearColorChange, UTweenLinearColor* Tween) \
{ \
	_Script_TweenMaker_eventBP_OnTweenLinearColorChange_Parms Parms; \
	Parms.Tween=Tween; \
	BP_OnTweenLinearColorChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenLinearColorChangeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
