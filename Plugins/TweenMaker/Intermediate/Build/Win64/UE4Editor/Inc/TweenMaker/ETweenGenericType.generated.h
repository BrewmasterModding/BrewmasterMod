// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWEENMAKER_ETweenGenericType_generated_h
#error "ETweenGenericType.generated.h already included, missing '#pragma once' in ETweenGenericType.h"
#endif
#define TWEENMAKER_ETweenGenericType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_ETweenGenericType_h


#define FOREACH_ENUM_ETWEENGENERICTYPE(op) \
	op(ETweenGenericType::Any) \
	op(ETweenGenericType::Move) \
	op(ETweenGenericType::Scale) \
	op(ETweenGenericType::Rotate) \
	op(ETweenGenericType::RotateAroundPoint) \
	op(ETweenGenericType::FollowSpline) \
	op(ETweenGenericType::MaterialVector) \
	op(ETweenGenericType::MaterialScalar) \
	op(ETweenGenericType::WidgetAngle) \
	op(ETweenGenericType::WidgetOpacity) \
	op(ETweenGenericType::WidgetShear) \
	op(ETweenGenericType::CustomVector) \
	op(ETweenGenericType::CustomFloat) \
	op(ETweenGenericType::CustomVector2D) 

enum class ETweenGenericType : uint8;
template<> TWEENMAKER_API UEnum* StaticEnum<ETweenGenericType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
