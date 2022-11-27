// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenFloat;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TWEENMAKER_BP_OnTweenPrimitiveComponentHitFloatDelegate_generated_h
#error "BP_OnTweenPrimitiveComponentHitFloatDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenPrimitiveComponentHitFloatDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenPrimitiveComponentHitFloatDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentHitFloatDelegate_h_11_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenPrimitiveComponentHitFloat_Parms \
{ \
	UTweenFloat* Tween; \
	UPrimitiveComponent* ThisComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FVector NormalImpulse; \
	FHitResult HitResult; \
}; \
static inline void FBP_OnTweenPrimitiveComponentHitFloat_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenPrimitiveComponentHitFloat, UTweenFloat* Tween, UPrimitiveComponent* ThisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& HitResult) \
{ \
	_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentHitFloat_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisComponent=ThisComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.HitResult=HitResult; \
	BP_OnTweenPrimitiveComponentHitFloat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentHitFloatDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
