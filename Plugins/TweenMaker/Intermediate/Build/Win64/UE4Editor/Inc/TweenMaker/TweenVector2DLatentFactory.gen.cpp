// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenVector2DLatentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenVector2DLatentFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2DLatentFactory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_AppendLatentTweenCustomVector2D)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_AppendLatentTweenCustomVector2D(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_AppendLatentTweenMoveWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_AppendLatentTweenMoveWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_AppendLatentTweenMoveWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_AppendLatentTweenMoveWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_AppendLatentTweenScaleWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_AppendLatentTweenScaleWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_AppendLatentTweenScaleWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_AppendLatentTweenScaleWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_AppendLatentTweenShearWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_AppendLatentTweenShearWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_CreateLatentTweenCustomVector2D)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_STRUCT(FVector2D,Z_Param_From);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_CreateLatentTweenCustomVector2D(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_CreateLatentTweenMoveWidgetBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_CreateLatentTweenMoveWidgetBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_CreateLatentTweenMoveWidgetTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_CreateLatentTweenMoveWidgetTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_CreateLatentTweenScaleWidgetBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_CreateLatentTweenScaleWidgetBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_CreateLatentTweenScaleWidgetTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_CreateLatentTweenScaleWidgetTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_CreateLatentTweenShearWidgetTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_CreateLatentTweenShearWidgetTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_JoinLatentTweenCustomVector2D)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_From);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_JoinLatentTweenCustomVector2D(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_JoinLatentTweenMoveWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_JoinLatentTweenMoveWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_JoinLatentTweenMoveWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_JoinLatentTweenMoveWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_JoinLatentTweenScaleWidgetBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_JoinLatentTweenScaleWidgetBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_JoinLatentTweenScaleWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_JoinLatentTweenScaleWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenVector2DLatentFactory::execBP_JoinLatentTweenShearWidgetTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenVector2D,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2DLatentFactory**)Z_Param__Result=UTweenVector2DLatentFactory::BP_JoinLatentTweenShearWidgetTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	void UTweenVector2DLatentFactory::StaticRegisterNativesUTweenVector2DLatentFactory()
	{
		UClass* Class = UTweenVector2DLatentFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendLatentTweenCustomVector2D", &UTweenVector2DLatentFactory::execBP_AppendLatentTweenCustomVector2D },
			{ "BP_AppendLatentTweenMoveWidgetBy", &UTweenVector2DLatentFactory::execBP_AppendLatentTweenMoveWidgetBy },
			{ "BP_AppendLatentTweenMoveWidgetTo", &UTweenVector2DLatentFactory::execBP_AppendLatentTweenMoveWidgetTo },
			{ "BP_AppendLatentTweenScaleWidgetBy", &UTweenVector2DLatentFactory::execBP_AppendLatentTweenScaleWidgetBy },
			{ "BP_AppendLatentTweenScaleWidgetTo", &UTweenVector2DLatentFactory::execBP_AppendLatentTweenScaleWidgetTo },
			{ "BP_AppendLatentTweenShearWidgetTo", &UTweenVector2DLatentFactory::execBP_AppendLatentTweenShearWidgetTo },
			{ "BP_CreateLatentTweenCustomVector2D", &UTweenVector2DLatentFactory::execBP_CreateLatentTweenCustomVector2D },
			{ "BP_CreateLatentTweenMoveWidgetBy", &UTweenVector2DLatentFactory::execBP_CreateLatentTweenMoveWidgetBy },
			{ "BP_CreateLatentTweenMoveWidgetTo", &UTweenVector2DLatentFactory::execBP_CreateLatentTweenMoveWidgetTo },
			{ "BP_CreateLatentTweenScaleWidgetBy", &UTweenVector2DLatentFactory::execBP_CreateLatentTweenScaleWidgetBy },
			{ "BP_CreateLatentTweenScaleWidgetTo", &UTweenVector2DLatentFactory::execBP_CreateLatentTweenScaleWidgetTo },
			{ "BP_CreateLatentTweenShearWidgetTo", &UTweenVector2DLatentFactory::execBP_CreateLatentTweenShearWidgetTo },
			{ "BP_JoinLatentTweenCustomVector2D", &UTweenVector2DLatentFactory::execBP_JoinLatentTweenCustomVector2D },
			{ "BP_JoinLatentTweenMoveWidgetBy", &UTweenVector2DLatentFactory::execBP_JoinLatentTweenMoveWidgetBy },
			{ "BP_JoinLatentTweenMoveWidgetTo", &UTweenVector2DLatentFactory::execBP_JoinLatentTweenMoveWidgetTo },
			{ "BP_JoinLatentTweenScaleWidgetBy", &UTweenVector2DLatentFactory::execBP_JoinLatentTweenScaleWidgetBy },
			{ "BP_JoinLatentTweenScaleWidgetTo", &UTweenVector2DLatentFactory::execBP_JoinLatentTweenScaleWidgetTo },
			{ "BP_JoinLatentTweenShearWidgetTo", &UTweenVector2DLatentFactory::execBP_JoinLatentTweenShearWidgetTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
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
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_AppendLatentTweenCustomVector2D", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenCustomVector2D_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_AppendLatentTweenMoveWidgetBy", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_AppendLatentTweenMoveWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_AppendLatentTweenScaleWidgetBy", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_AppendLatentTweenScaleWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_AppendLatentTweenShearWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_AppendLatentTweenShearWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms
		{
			UTweenManagerComponent* TweenManager;
			UObject* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenVector2D* OutTween;
			FVector2D From;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_CreateLatentTweenCustomVector2D", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenCustomVector2D_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenVector2D* OutTween;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_CreateLatentTweenMoveWidgetBy", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenVector2D* OutTween;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_CreateLatentTweenMoveWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenVector2D* OutTween;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_CreateLatentTweenScaleWidgetBy", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenVector2D* OutTween;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_CreateLatentTweenScaleWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenVector2D* OutTween;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_CreateLatentTweenShearWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_CreateLatentTweenShearWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UObject* TweenTarget;
			FVector2D From;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_JoinLatentTweenCustomVector2D", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenCustomVector2D_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_JoinLatentTweenMoveWidgetBy", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_JoinLatentTweenMoveWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_JoinLatentTweenScaleWidgetBy", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_JoinLatentTweenScaleWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics
	{
		struct TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenVector2D* OutTween;
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2DLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, OutTween), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2DLatentFactory, nullptr, "BP_JoinLatentTweenShearWidgetTo", nullptr, nullptr, sizeof(TweenVector2DLatentFactory_eventBP_JoinLatentTweenShearWidgetTo_Parms), Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenVector2DLatentFactory_NoRegister()
	{
		return UTweenVector2DLatentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenVector2DLatentFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D, "BP_AppendLatentTweenCustomVector2D" }, // 3514520266
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy, "BP_AppendLatentTweenMoveWidgetBy" }, // 3807958205
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo, "BP_AppendLatentTweenMoveWidgetTo" }, // 1302148731
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy, "BP_AppendLatentTweenScaleWidgetBy" }, // 2844027220
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo, "BP_AppendLatentTweenScaleWidgetTo" }, // 4263335588
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo, "BP_AppendLatentTweenShearWidgetTo" }, // 2326352079
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D, "BP_CreateLatentTweenCustomVector2D" }, // 1320741776
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy, "BP_CreateLatentTweenMoveWidgetBy" }, // 2379535378
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo, "BP_CreateLatentTweenMoveWidgetTo" }, // 3952413067
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy, "BP_CreateLatentTweenScaleWidgetBy" }, // 2630574193
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo, "BP_CreateLatentTweenScaleWidgetTo" }, // 909008207
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo, "BP_CreateLatentTweenShearWidgetTo" }, // 1588371953
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D, "BP_JoinLatentTweenCustomVector2D" }, // 3713375924
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy, "BP_JoinLatentTweenMoveWidgetBy" }, // 1768882079
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo, "BP_JoinLatentTweenMoveWidgetTo" }, // 3807567765
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy, "BP_JoinLatentTweenScaleWidgetBy" }, // 1948633463
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo, "BP_JoinLatentTweenScaleWidgetTo" }, // 946170371
		{ &Z_Construct_UFunction_UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo, "BP_JoinLatentTweenShearWidgetTo" }, // 88956104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenVector2DLatentFactory.h" },
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenVector2DLatentFactory, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenVector2DLatentFactory, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenVector2DLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenVector2DLatentFactory, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::NewProp_OnTweenEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenVector2DLatentFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::ClassParams = {
		&UTweenVector2DLatentFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenVector2DLatentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenVector2DLatentFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenVector2DLatentFactory, 3192515274);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenVector2DLatentFactory>()
	{
		return UTweenVector2DLatentFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenVector2DLatentFactory(Z_Construct_UClass_UTweenVector2DLatentFactory, &UTweenVector2DLatentFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenVector2DLatentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenVector2DLatentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
