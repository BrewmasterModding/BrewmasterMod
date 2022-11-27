// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenFloatStandardFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenFloatStandardFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloatStandardFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloatStandardFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloat_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenActorFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_ApplyRotation);
		P_GET_UBOOL(Z_Param_ApplyScale);
		P_GET_UBOOL(Z_Param_UseConstantSpeed);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenActorFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenCustomFloat)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenCustomFloat(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenMaterialFloatFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenMaterialFloatFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenMaterialFloatTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenMaterialFloatTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenRotateActorAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenRotateActorAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenRotateActorAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetAngle);
		P_GET_ENUM(ETweenReferenceAxis,Z_Param_ReferenceAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenRotateActorAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenRotateSceneComponentAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenRotateSceneComponentAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenRotateSceneComponentAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetAngle);
		P_GET_ENUM(ETweenReferenceAxis,Z_Param_ReferenceAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenRotateSceneComponentAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenSceneComponentFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_ApplyRotation);
		P_GET_UBOOL(Z_Param_ApplyScale);
		P_GET_UBOOL(Z_Param_UseConstantSpeed);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenSceneComponentFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenWidgetAngleTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenWidgetAngleTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_AppendTweenWidgetOpacityTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_AppendTweenWidgetOpacityTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenActorFollowSpline)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_ApplyRotation);
		P_GET_UBOOL(Z_Param_ApplyScale);
		P_GET_UBOOL(Z_Param_UseConstantSpeed);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenFloatStandardFactory::BP_CreateTweenActorFollowSpline(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenCustomFloat)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		UTweenFloatStandardFactory::BP_CreateTweenCustomFloat(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenMaterialFloatFromTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		UTweenFloatStandardFactory::BP_CreateTweenMaterialFloatFromTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenMaterialFloatTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		UTweenFloatStandardFactory::BP_CreateTweenMaterialFloatTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenRotateActorAroundPoint)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenFloatStandardFactory::BP_CreateTweenRotateActorAroundPoint(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenRotateActorAroundPointByOffset)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetAngle);
		P_GET_ENUM(ETweenReferenceAxis,Z_Param_ReferenceAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenFloatStandardFactory::BP_CreateTweenRotateActorAroundPointByOffset(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenRotateSceneComponentAroundPoint)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenFloatStandardFactory::BP_CreateTweenRotateSceneComponentAroundPoint(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenRotateSceneComponentAroundPointByOffset)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetAngle);
		P_GET_ENUM(ETweenReferenceAxis,Z_Param_ReferenceAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenFloatStandardFactory::BP_CreateTweenRotateSceneComponentAroundPointByOffset(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenSceneComponentFollowSpline)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_ApplyRotation);
		P_GET_UBOOL(Z_Param_ApplyScale);
		P_GET_UBOOL(Z_Param_UseConstantSpeed);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenFloatStandardFactory::BP_CreateTweenSceneComponentFollowSpline(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenWidgetAngleTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		UTweenFloatStandardFactory::BP_CreateTweenWidgetAngleTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_CreateTweenWidgetOpacityTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_Tween);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
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
		UTweenFloatStandardFactory::BP_CreateTweenWidgetOpacityTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenActorFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_ApplyRotation);
		P_GET_UBOOL(Z_Param_ApplyScale);
		P_GET_UBOOL(Z_Param_UseConstantSpeed);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenActorFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenCustomFloat)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenCustomFloat(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenMaterialFloatFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenMaterialFloatFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenMaterialFloatTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenMaterialFloatTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenRotateActorAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenRotateActorAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenRotateActorAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetAngle);
		P_GET_ENUM(ETweenReferenceAxis,Z_Param_ReferenceAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenRotateActorAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenRotateSceneComponentAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndingAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenRotateSceneComponentAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenRotateSceneComponentAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetAngle);
		P_GET_ENUM(ETweenReferenceAxis,Z_Param_ReferenceAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenRotateSceneComponentAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenSceneComponentFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_ApplyRotation);
		P_GET_UBOOL(Z_Param_ApplyScale);
		P_GET_UBOOL(Z_Param_UseConstantSpeed);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenSceneComponentFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenWidgetAngleTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenWidgetAngleTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatStandardFactory::execBP_JoinTweenWidgetOpacityTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=UTweenFloatStandardFactory::BP_JoinTweenWidgetOpacityTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	void UTweenFloatStandardFactory::StaticRegisterNativesUTweenFloatStandardFactory()
	{
		UClass* Class = UTweenFloatStandardFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendTweenActorFollowSpline", &UTweenFloatStandardFactory::execBP_AppendTweenActorFollowSpline },
			{ "BP_AppendTweenCustomFloat", &UTweenFloatStandardFactory::execBP_AppendTweenCustomFloat },
			{ "BP_AppendTweenMaterialFloatFromTo", &UTweenFloatStandardFactory::execBP_AppendTweenMaterialFloatFromTo },
			{ "BP_AppendTweenMaterialFloatTo", &UTweenFloatStandardFactory::execBP_AppendTweenMaterialFloatTo },
			{ "BP_AppendTweenRotateActorAroundPoint", &UTweenFloatStandardFactory::execBP_AppendTweenRotateActorAroundPoint },
			{ "BP_AppendTweenRotateActorAroundPointByOffset", &UTweenFloatStandardFactory::execBP_AppendTweenRotateActorAroundPointByOffset },
			{ "BP_AppendTweenRotateSceneComponentAroundPoint", &UTweenFloatStandardFactory::execBP_AppendTweenRotateSceneComponentAroundPoint },
			{ "BP_AppendTweenRotateSceneComponentAroundPointByOffset", &UTweenFloatStandardFactory::execBP_AppendTweenRotateSceneComponentAroundPointByOffset },
			{ "BP_AppendTweenSceneComponentFollowSpline", &UTweenFloatStandardFactory::execBP_AppendTweenSceneComponentFollowSpline },
			{ "BP_AppendTweenWidgetAngleTo", &UTweenFloatStandardFactory::execBP_AppendTweenWidgetAngleTo },
			{ "BP_AppendTweenWidgetOpacityTo", &UTweenFloatStandardFactory::execBP_AppendTweenWidgetOpacityTo },
			{ "BP_CreateTweenActorFollowSpline", &UTweenFloatStandardFactory::execBP_CreateTweenActorFollowSpline },
			{ "BP_CreateTweenCustomFloat", &UTweenFloatStandardFactory::execBP_CreateTweenCustomFloat },
			{ "BP_CreateTweenMaterialFloatFromTo", &UTweenFloatStandardFactory::execBP_CreateTweenMaterialFloatFromTo },
			{ "BP_CreateTweenMaterialFloatTo", &UTweenFloatStandardFactory::execBP_CreateTweenMaterialFloatTo },
			{ "BP_CreateTweenRotateActorAroundPoint", &UTweenFloatStandardFactory::execBP_CreateTweenRotateActorAroundPoint },
			{ "BP_CreateTweenRotateActorAroundPointByOffset", &UTweenFloatStandardFactory::execBP_CreateTweenRotateActorAroundPointByOffset },
			{ "BP_CreateTweenRotateSceneComponentAroundPoint", &UTweenFloatStandardFactory::execBP_CreateTweenRotateSceneComponentAroundPoint },
			{ "BP_CreateTweenRotateSceneComponentAroundPointByOffset", &UTweenFloatStandardFactory::execBP_CreateTweenRotateSceneComponentAroundPointByOffset },
			{ "BP_CreateTweenSceneComponentFollowSpline", &UTweenFloatStandardFactory::execBP_CreateTweenSceneComponentFollowSpline },
			{ "BP_CreateTweenWidgetAngleTo", &UTweenFloatStandardFactory::execBP_CreateTweenWidgetAngleTo },
			{ "BP_CreateTweenWidgetOpacityTo", &UTweenFloatStandardFactory::execBP_CreateTweenWidgetOpacityTo },
			{ "BP_JoinTweenActorFollowSpline", &UTweenFloatStandardFactory::execBP_JoinTweenActorFollowSpline },
			{ "BP_JoinTweenCustomFloat", &UTweenFloatStandardFactory::execBP_JoinTweenCustomFloat },
			{ "BP_JoinTweenMaterialFloatFromTo", &UTweenFloatStandardFactory::execBP_JoinTweenMaterialFloatFromTo },
			{ "BP_JoinTweenMaterialFloatTo", &UTweenFloatStandardFactory::execBP_JoinTweenMaterialFloatTo },
			{ "BP_JoinTweenRotateActorAroundPoint", &UTweenFloatStandardFactory::execBP_JoinTweenRotateActorAroundPoint },
			{ "BP_JoinTweenRotateActorAroundPointByOffset", &UTweenFloatStandardFactory::execBP_JoinTweenRotateActorAroundPointByOffset },
			{ "BP_JoinTweenRotateSceneComponentAroundPoint", &UTweenFloatStandardFactory::execBP_JoinTweenRotateSceneComponentAroundPoint },
			{ "BP_JoinTweenRotateSceneComponentAroundPointByOffset", &UTweenFloatStandardFactory::execBP_JoinTweenRotateSceneComponentAroundPointByOffset },
			{ "BP_JoinTweenSceneComponentFollowSpline", &UTweenFloatStandardFactory::execBP_JoinTweenSceneComponentFollowSpline },
			{ "BP_JoinTweenWidgetAngleTo", &UTweenFloatStandardFactory::execBP_JoinTweenWidgetAngleTo },
			{ "BP_JoinTweenWidgetOpacityTo", &UTweenFloatStandardFactory::execBP_JoinTweenWidgetOpacityTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			USplineComponent* Spline;
			float Duration;
			bool ApplyRotation;
			bool ApplyScale;
			bool UseConstantSpeed;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_ApplyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation;
		static void NewProp_ApplyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyScale;
		static void NewProp_UseConstantSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstantSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenActorFollowSpline", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenActorFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms
		{
			UTweenContainer* TweenContainer;
			UObject* TweenTarget;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenCustomFloat", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenCustomFloat_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms
		{
			UTweenContainer* TweenContainer;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenMaterialFloatTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			FVector PivotPoint;
			float StartingAngle;
			float EndingAngle;
			float Radius;
			FVector Axis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			FVector PivotPoint;
			float OffsetAngle;
			ETweenReferenceAxis ReferenceAxis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAxis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			FVector PivotPoint;
			float StartingAngle;
			float EndingAngle;
			float Radius;
			FVector Axis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			FVector PivotPoint;
			float OffsetAngle;
			ETweenReferenceAxis ReferenceAxis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAxis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			USplineComponent* Spline;
			float Duration;
			bool ApplyRotation;
			bool ApplyScale;
			bool UseConstantSpeed;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_ApplyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation;
		static void NewProp_ApplyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyScale;
		static void NewProp_UseConstantSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstantSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenWidgetAngleTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_AppendTweenWidgetOpacityTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_AppendTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			USplineComponent* Spline;
			float Duration;
			bool ApplyRotation;
			bool ApplyScale;
			bool UseConstantSpeed;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_ApplyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation;
		static void NewProp_ApplyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyScale;
		static void NewProp_UseConstantSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstantSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenActorFollowSpline", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenActorFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms
		{
			UTweenManagerComponent* TweenManager;
			UObject* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			float From;
			float To;
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenCustomFloat", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenCustomFloat_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			FName ParameterName;
			float From;
			float To;
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
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			FName ParameterName;
			float To;
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
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenMaterialFloatTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			FVector PivotPoint;
			float StartingAngle;
			float EndingAngle;
			float Radius;
			FVector Axis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			FVector PivotPoint;
			float OffsetAngle;
			ETweenReferenceAxis ReferenceAxis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAxis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			FVector PivotPoint;
			float StartingAngle;
			float EndingAngle;
			float Radius;
			FVector Axis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			FVector PivotPoint;
			float OffsetAngle;
			ETweenReferenceAxis ReferenceAxis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAxis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			USplineComponent* Spline;
			float Duration;
			bool ApplyRotation;
			bool ApplyScale;
			bool UseConstantSpeed;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_ApplyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation;
		static void NewProp_ApplyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyScale;
		static void NewProp_UseConstantSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstantSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			float To;
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenWidgetAngleTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenFloat* Tween;
			float To;
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, Tween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_CreateTweenWidgetOpacityTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_CreateTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			USplineComponent* Spline;
			float Duration;
			bool ApplyRotation;
			bool ApplyScale;
			bool UseConstantSpeed;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_ApplyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation;
		static void NewProp_ApplyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyScale;
		static void NewProp_UseConstantSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstantSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenActorFollowSpline", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenActorFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms
		{
			UTweenContainer* TweenContainer;
			UObject* TweenTarget;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenCustomFloat", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenCustomFloat_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms
		{
			UTweenContainer* TweenContainer;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenMaterialFloatTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			FVector PivotPoint;
			float StartingAngle;
			float EndingAngle;
			float Radius;
			FVector Axis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			FVector PivotPoint;
			float OffsetAngle;
			ETweenReferenceAxis ReferenceAxis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAxis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			FVector PivotPoint;
			float StartingAngle;
			float EndingAngle;
			float Radius;
			FVector Axis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndingAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			FVector PivotPoint;
			float OffsetAngle;
			ETweenReferenceAxis ReferenceAxis;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAxis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			USplineComponent* Spline;
			float Duration;
			bool ApplyRotation;
			bool ApplyScale;
			bool UseConstantSpeed;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static void NewProp_ApplyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation;
		static void NewProp_ApplyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyScale;
		static void NewProp_UseConstantSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConstantSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EaseType;
		static void NewProp_DeleteTweenOnHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnHit;
		static void NewProp_DeleteTweenOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeleteTweenOnOverlap;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenWidgetAngleTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics
	{
		struct TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenFloat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatStandardFactory, nullptr, "BP_JoinTweenWidgetOpacityTo", nullptr, nullptr, sizeof(TweenFloatStandardFactory_eventBP_JoinTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenFloatStandardFactory_NoRegister()
	{
		return UTweenFloatStandardFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenFloatStandardFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenFloatStandardFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenFloatStandardFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline, "BP_AppendTweenActorFollowSpline" }, // 4041729520
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenCustomFloat, "BP_AppendTweenCustomFloat" }, // 1028822637
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo, "BP_AppendTweenMaterialFloatFromTo" }, // 1324224342
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo, "BP_AppendTweenMaterialFloatTo" }, // 2563132527
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint, "BP_AppendTweenRotateActorAroundPoint" }, // 430549354
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset, "BP_AppendTweenRotateActorAroundPointByOffset" }, // 3087428218
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint, "BP_AppendTweenRotateSceneComponentAroundPoint" }, // 234473425
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset, "BP_AppendTweenRotateSceneComponentAroundPointByOffset" }, // 3105830668
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline, "BP_AppendTweenSceneComponentFollowSpline" }, // 4081975344
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo, "BP_AppendTweenWidgetAngleTo" }, // 3267496298
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo, "BP_AppendTweenWidgetOpacityTo" }, // 3017274751
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline, "BP_CreateTweenActorFollowSpline" }, // 1866439127
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenCustomFloat, "BP_CreateTweenCustomFloat" }, // 875784536
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo, "BP_CreateTweenMaterialFloatFromTo" }, // 185427346
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo, "BP_CreateTweenMaterialFloatTo" }, // 3922789196
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint, "BP_CreateTweenRotateActorAroundPoint" }, // 1148357611
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset, "BP_CreateTweenRotateActorAroundPointByOffset" }, // 4065377127
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint, "BP_CreateTweenRotateSceneComponentAroundPoint" }, // 2526406297
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset, "BP_CreateTweenRotateSceneComponentAroundPointByOffset" }, // 1622509862
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline, "BP_CreateTweenSceneComponentFollowSpline" }, // 571969896
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo, "BP_CreateTweenWidgetAngleTo" }, // 2091008720
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo, "BP_CreateTweenWidgetOpacityTo" }, // 2482143849
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline, "BP_JoinTweenActorFollowSpline" }, // 728858238
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenCustomFloat, "BP_JoinTweenCustomFloat" }, // 2957297786
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo, "BP_JoinTweenMaterialFloatFromTo" }, // 2037294865
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo, "BP_JoinTweenMaterialFloatTo" }, // 4089165181
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint, "BP_JoinTweenRotateActorAroundPoint" }, // 3260280936
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset, "BP_JoinTweenRotateActorAroundPointByOffset" }, // 3154806554
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint, "BP_JoinTweenRotateSceneComponentAroundPoint" }, // 909399138
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset, "BP_JoinTweenRotateSceneComponentAroundPointByOffset" }, // 1476987682
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline, "BP_JoinTweenSceneComponentFollowSpline" }, // 345864992
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo, "BP_JoinTweenWidgetAngleTo" }, // 3052230022
		{ &Z_Construct_UFunction_UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo, "BP_JoinTweenWidgetOpacityTo" }, // 946362031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenFloatStandardFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TweenFloatStandardFactory.h" },
		{ "ModuleRelativePath", "Public/TweenFloatStandardFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenFloatStandardFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenFloatStandardFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenFloatStandardFactory_Statics::ClassParams = {
		&UTweenFloatStandardFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTweenFloatStandardFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenFloatStandardFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenFloatStandardFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenFloatStandardFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenFloatStandardFactory, 717291053);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenFloatStandardFactory>()
	{
		return UTweenFloatStandardFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenFloatStandardFactory(Z_Construct_UClass_UTweenFloatStandardFactory, &UTweenFloatStandardFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenFloatStandardFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenFloatStandardFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
