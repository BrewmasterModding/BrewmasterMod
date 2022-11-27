// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseTween;
#ifdef TWEENMAKER_OnTweenDestroyedDelegate_generated_h
#error "OnTweenDestroyedDelegate.generated.h already included, missing '#pragma once' in OnTweenDestroyedDelegate.h"
#endif
#define TWEENMAKER_OnTweenDestroyedDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_OnTweenDestroyedDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventOnTweenDestroyed_Parms \
{ \
	UBaseTween* pTween; \
}; \
static inline void FOnTweenDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnTweenDestroyed, UBaseTween* pTween) \
{ \
	_Script_TweenMaker_eventOnTweenDestroyed_Parms Parms; \
	Parms.pTween=pTween; \
	OnTweenDestroyed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_OnTweenDestroyedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
