// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
#ifdef TWEENMAKER_BP_OnTweenContainerEndDelegate_generated_h
#error "BP_OnTweenContainerEndDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenContainerEndDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenContainerEndDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenContainerEndDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenContainerEnd_Parms \
{ \
	UTweenContainer* TweenContainer; \
}; \
static inline void FBP_OnTweenContainerEnd_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenContainerEnd, UTweenContainer* TweenContainer) \
{ \
	_Script_TweenMaker_eventBP_OnTweenContainerEnd_Parms Parms; \
	Parms.TweenContainer=TweenContainer; \
	BP_OnTweenContainerEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenContainerEndDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
