// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenVector2DStandardFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenVector2DStandardFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2DStandardFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2DStandardFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_AppendTweenCustomVector2D)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_From);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_AppendTweenCustomVector2D(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_AppendTweenMoveWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_AppendTweenMoveWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_AppendTweenMoveWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_AppendTweenMoveWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_AppendTweenScaleWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_AppendTweenScaleWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_AppendTweenScaleWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_AppendTweenScaleWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_AppendTweenShearWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_AppendTweenShearWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_CreateTweenCustomVector2D)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector2D,Z_Param_From);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenVector2DStandardFactory::BP_CreateTweenCustomVector2D(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_CreateTweenMoveWidgetBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenVector2DStandardFactory::BP_CreateTweenMoveWidgetBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_CreateTweenMoveWidgetTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenVector2DStandardFactory::BP_CreateTweenMoveWidgetTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_CreateTweenScaleWidgetBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenVector2DStandardFactory::BP_CreateTweenScaleWidgetBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_CreateTweenScaleWidgetTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenVector2DStandardFactory::BP_CreateTweenScaleWidgetTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_CreateTweenShearWidgetTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenVector2DStandardFactory::BP_CreateTweenShearWidgetTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_JoinTweenCustomVector2D)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_From);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_JoinTweenCustomVector2D(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_JoinTweenMoveWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_JoinTweenMoveWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_JoinTweenMoveWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_JoinTweenMoveWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_JoinTweenScaleWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_JoinTweenScaleWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_JoinTweenScaleWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_JoinTweenScaleWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DStandardFactory::execBP_JoinTweenShearWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=UTweenVector2DStandardFactory::BP_JoinTweenShearWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	void UTweenVector2DStandardFactory::StaticRegisterNativesUTweenVector2DStandardFactory()
	{
		UClass* Class = UTweenVector2DStandardFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendTweenCustomVector2D", &UTweenVector2DStandardFactory::execBP_AppendTweenCustomVector2D },
			{ "BP_AppendTweenMoveWidgetBy", &UTweenVector2DStandardFactory::execBP_AppendTweenMoveWidgetBy },
			{ "BP_AppendTweenMoveWidgetTo", &UTweenVector2DStandardFactory::execBP_AppendTweenMoveWidgetTo },
			{ "BP_AppendTweenScaleWidgetBy", &UTweenVector2DStandardFactory::execBP_AppendTweenScaleWidgetBy },
			{ "BP_AppendTweenScaleWidgetTo", &UTweenVector2DStandardFactory::execBP_AppendTweenScaleWidgetTo },
			{ "BP_AppendTweenShearWidgetTo", &UTweenVector2DStandardFactory::execBP_AppendTweenShearWidgetTo },
			{ "BP_CreateTweenCustomVector2D", &UTweenVector2DStandardFactory::execBP_CreateTweenCustomVector2D },
			{ "BP_CreateTweenMoveWidgetBy", &UTweenVector2DStandardFactory::execBP_CreateTweenMoveWidgetBy },
			{ "BP_CreateTweenMoveWidgetTo", &UTweenVector2DStandardFactory::execBP_CreateTweenMoveWidgetTo },
			{ "BP_CreateTweenScaleWidgetBy", &UTweenVector2DStandardFactory::execBP_CreateTweenScaleWidgetBy },
			{ "BP_CreateTweenScaleWidgetTo", &UTweenVector2DStandardFactory::execBP_CreateTweenScaleWidgetTo },
			{ "BP_CreateTweenShearWidgetTo", &UTweenVector2DStandardFactory::execBP_CreateTweenShearWidgetTo },
			{ "BP_JoinTweenCustomVector2D", &UTweenVector2DStandardFactory::execBP_JoinTweenCustomVector2D },
			{ "BP_JoinTweenMoveWidgetBy", &UTweenVector2DStandardFactory::execBP_JoinTweenMoveWidgetBy },
			{ "BP_JoinTweenMoveWidgetTo", &UTweenVector2DStandardFactory::execBP_JoinTweenMoveWidgetTo },
			{ "BP_JoinTweenScaleWidgetBy", &UTweenVector2DStandardFactory::execBP_JoinTweenScaleWidgetBy },
			{ "BP_JoinTweenScaleWidgetTo", &UTweenVector2DStandardFactory::execBP_JoinTweenScaleWidgetTo },
			{ "BP_JoinTweenShearWidgetTo", &UTweenVector2DStandardFactory::execBP_JoinTweenShearWidgetTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms
		{
			UTweenContainer* TweenContainer;
			UObject* TweenTarget;
			FVector2D From;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_AppendTweenCustomVector2D", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenCustomVector2D_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_AppendTweenMoveWidgetBy", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_AppendTweenMoveWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_AppendTweenScaleWidgetBy", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_AppendTweenScaleWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_AppendTweenShearWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_AppendTweenShearWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms
		{
			UTweenManagerComponent* TweenManager;
			UObject* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenVector2D* Tween;
			FVector2D From;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, Tween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_CreateTweenCustomVector2D", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenCustomVector2D_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenVector2D* Tween;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, Tween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_CreateTweenMoveWidgetBy", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenVector2D* Tween;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, Tween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_CreateTweenMoveWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenVector2D* Tween;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, Tween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_CreateTweenScaleWidgetBy", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenVector2D* Tween;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, Tween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_CreateTweenScaleWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenVector2D* Tween;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, Tween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_CreateTweenShearWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_CreateTweenShearWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms
		{
			UTweenContainer* TweenContainer;
			UObject* TweenTarget;
			FVector2D From;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_JoinTweenCustomVector2D", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenCustomVector2D_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_JoinTweenMoveWidgetBy", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_JoinTweenMoveWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_JoinTweenScaleWidgetBy", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_JoinTweenScaleWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics
	{
		struct TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenVector2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static void NewProp_TweenWhileGameIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TweenWhileGameIsPaused;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DStandardFactory, nullptr, "BP_JoinTweenShearWidgetTo", nullptr, nullptr, sizeof(TweenVector2DStandardFactory_eventBP_JoinTweenShearWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenVector2DStandardFactory_NoRegister()
	{
		return UTweenVector2DStandardFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenVector2DStandardFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D, "BP_AppendTweenCustomVector2D" }, // 3464920312
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy, "BP_AppendTweenMoveWidgetBy" }, // 339049416
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo, "BP_AppendTweenMoveWidgetTo" }, // 860885923
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy, "BP_AppendTweenScaleWidgetBy" }, // 3565799038
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo, "BP_AppendTweenScaleWidgetTo" }, // 852056464
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo, "BP_AppendTweenShearWidgetTo" }, // 1680882508
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D, "BP_CreateTweenCustomVector2D" }, // 72042388
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy, "BP_CreateTweenMoveWidgetBy" }, // 2202253832
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo, "BP_CreateTweenMoveWidgetTo" }, // 3377252930
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy, "BP_CreateTweenScaleWidgetBy" }, // 804656944
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo, "BP_CreateTweenScaleWidgetTo" }, // 3698490804
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo, "BP_CreateTweenShearWidgetTo" }, // 57161040
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D, "BP_JoinTweenCustomVector2D" }, // 2241054538
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy, "BP_JoinTweenMoveWidgetBy" }, // 2035818358
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo, "BP_JoinTweenMoveWidgetTo" }, // 2079898712
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy, "BP_JoinTweenScaleWidgetBy" }, // 3130733240
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo, "BP_JoinTweenScaleWidgetTo" }, // 214407646
		{ &Z_Construct_UFunction_UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo, "BP_JoinTweenShearWidgetTo" }, // 440817227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TweenVector2DStandardFactory.h" },
		{ "ModuleRelativePath", "Public/TweenVector2DStandardFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenVector2DStandardFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::ClassParams = {
		&UTweenVector2DStandardFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenVector2DStandardFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenVector2DStandardFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenVector2DStandardFactory, 3356046098);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenVector2DStandardFactory>()
	{
		return UTweenVector2DStandardFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenVector2DStandardFactory(Z_Construct_UClass_UTweenVector2DStandardFactory, &UTweenVector2DStandardFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenVector2DStandardFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenVector2DStandardFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
