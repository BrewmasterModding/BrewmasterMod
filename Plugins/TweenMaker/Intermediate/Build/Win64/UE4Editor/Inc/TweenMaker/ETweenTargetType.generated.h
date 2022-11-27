// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWEENMAKER_ETweenTargetType_generated_h
#error "ETweenTargetType.generated.h already included, missing '#pragma once' in ETweenTargetType.h"
#endif
#define TWEENMAKER_ETweenTargetType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_ETweenTargetType_h


#define FOREACH_ENUM_ETWEENTARGETTYPE(op) \
	op(ETweenTargetType::Actor) \
	op(ETweenTargetType::SceneComponent) \
	op(ETweenTargetType::UMG) \
	op(ETweenTargetType::Material) \
	op(ETweenTargetType::Custom) 

enum class ETweenTargetType;
template<> TWEENMAKER_API UEnum* StaticEnum<ETweenTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
