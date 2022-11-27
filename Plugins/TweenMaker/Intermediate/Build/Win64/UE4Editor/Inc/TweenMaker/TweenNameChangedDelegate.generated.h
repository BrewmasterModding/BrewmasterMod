// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseTween;
#ifdef TWEENMAKER_TweenNameChangedDelegate_generated_h
#error "TweenNameChangedDelegate.generated.h already included, missing '#pragma once' in TweenNameChangedDelegate.h"
#endif
#define TWEENMAKER_TweenNameChangedDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenNameChangedDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventTweenNameChanged_Parms \
{ \
	UBaseTween* pTween; \
	FName pPreviousName; \
	FName pNewName; \
}; \
static inline void FTweenNameChanged_DelegateWrapper(const FMulticastScriptDelegate& TweenNameChanged, UBaseTween* pTween, FName const& pPreviousName, FName const& pNewName) \
{ \
	_Script_TweenMaker_eventTweenNameChanged_Parms Parms; \
	Parms.pTween=pTween; \
	Parms.pPreviousName=pPreviousName; \
	Parms.pNewName=pNewName; \
	TweenNameChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenNameChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
