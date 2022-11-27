// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWEENMAKER_ETweenVectorType_generated_h
#error "ETweenVectorType.generated.h already included, missing '#pragma once' in ETweenVectorType.h"
#endif
#define TWEENMAKER_ETweenVectorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_ETweenVectorType_h


#define FOREACH_ENUM_ETWEENVECTORTYPE(op) \
	op(ETweenVectorType::MoveTo) \
	op(ETweenVectorType::MoveBy) \
	op(ETweenVectorType::ScaleTo) \
	op(ETweenVectorType::ScaleBy) \
	op(ETweenVectorType::Custom) 

enum class ETweenVectorType;
template<> TWEENMAKER_API UEnum* StaticEnum<ETweenVectorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
