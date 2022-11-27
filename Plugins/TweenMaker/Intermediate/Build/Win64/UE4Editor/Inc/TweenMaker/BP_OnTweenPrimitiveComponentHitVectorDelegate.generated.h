// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenVector;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TWEENMAKER_BP_OnTweenPrimitiveComponentHitVectorDelegate_generated_h
#error "BP_OnTweenPrimitiveComponentHitVectorDelegate.generated.h already included, missing '#pragma once' in BP_OnTweenPrimitiveComponentHitVectorDelegate.h"
#endif
#define TWEENMAKER_BP_OnTweenPrimitiveComponentHitVectorDelegate_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentHitVectorDelegate_h_11_DELEGATE \
struct _Script_TweenMaker_eventBP_OnTweenPrimitiveComponentHitVector_Parms \
{ \
	UTweenVector* Tween; \
	UPrimitiveComponent* ThisComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FVector NormalImpulse; \
	FHitResult HitResult; \
}; \
static inline void FBP_OnTweenPrimitiveComponentHitVector_DelegateWrapper(const FMulticastScriptDelegate& BP_OnTweenPrimitiveComponentHitVector, UTweenVector* Tween, UPrimitiveComponent* ThisComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& HitResult) \
{ \
	_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentHitVector_Parms Parms; \
	Parms.Tween=Tween; \
	Parms.ThisComponent=ThisComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.HitResult=HitResult; \
	BP_OnTweenPrimitiveComponentHitVector.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BP_OnTweenPrimitiveComponentHitVectorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
