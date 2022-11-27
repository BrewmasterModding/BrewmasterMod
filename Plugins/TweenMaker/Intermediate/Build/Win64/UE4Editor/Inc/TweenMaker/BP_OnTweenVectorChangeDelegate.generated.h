// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenVector;
#ifdef TWEENMAKER_BP_OnTweenVectorChangeDelegate_generated_h
#error "BP_OnTweenVectorChangeDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenVectorChangeDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenVectorChangeDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenVectorChangeDelegate_h_7_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenVectorChange_Parms \
{ \
	UTweenVector* Tween; \
}; \
static inline void FBP_OnTweenVectorChange_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenVectorChange, UTweenVector* Tween) \
{ \
	_Script_TweenMaker_eventBP_OnTweenVectorChange_Parms Parms; \
	Parms.Tween=Tween; \
	BP_OnTweenVectorChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenVectorChangeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
