// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenFloatLatentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenFloatLatentFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloatLatentFactory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenFloatChange__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenActorFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenActorFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenCustomFloat)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenCustomFloat(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenMaterialFloatFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenMaterialFloatFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenMaterialFloatTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenMaterialFloatTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateActorAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenRotateActorAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateActorAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenRotateActorAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateSceneComponentAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenRotateSceneComponentAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenSceneComponentFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenSceneComponentFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenWidgetAngleTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenWidgetAngleTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_AppendLatentTweenWidgetOpacityTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_AppendLatentTweenWidgetOpacityTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenActorFollowSpline)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenActorFollowSpline(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenCustomFloat)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenCustomFloat(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenMaterialFloatFromTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenMaterialFloatFromTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenMaterialFloatTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenMaterialFloatTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateActorAroundPoint)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenRotateActorAroundPoint(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateActorAroundPointByOffset)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenRotateActorAroundPointByOffset(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateSceneComponentAroundPoint)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenRotateSceneComponentAroundPoint(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenSceneComponentFollowSpline)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenSceneComponentFollowSpline(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenWidgetAngleTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenWidgetAngleTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_CreateLatentTweenWidgetOpacityTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_CreateLatentTweenWidgetOpacityTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenActorFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenActorFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenCustomFloat)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenCustomFloat(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenMaterialFloatFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenMaterialFloatFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenMaterialFloatTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenMaterialFloatTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateActorAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenRotateActorAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateActorAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenRotateActorAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateSceneComponentAroundPoint)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenRotateSceneComponentAroundPoint(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenSceneComponentFollowSpline)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenSceneComponentFollowSpline(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenWidgetAngleTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenWidgetAngleTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenFloatLatentFactory::execBP_JoinLatentTweenWidgetOpacityTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenFloat,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloatLatentFactory**)Z_Param__Result=UTweenFloatLatentFactory::BP_JoinLatentTweenWidgetOpacityTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	void UTweenFloatLatentFactory::StaticRegisterNativesUTweenFloatLatentFactory()
	{
		UClass* Class = UTweenFloatLatentFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendLatentTweenActorFollowSpline", &UTweenFloatLatentFactory::execBP_AppendLatentTweenActorFollowSpline },
			{ "BP_AppendLatentTweenCustomFloat", &UTweenFloatLatentFactory::execBP_AppendLatentTweenCustomFloat },
			{ "BP_AppendLatentTweenMaterialFloatFromTo", &UTweenFloatLatentFactory::execBP_AppendLatentTweenMaterialFloatFromTo },
			{ "BP_AppendLatentTweenMaterialFloatTo", &UTweenFloatLatentFactory::execBP_AppendLatentTweenMaterialFloatTo },
			{ "BP_AppendLatentTweenRotateActorAroundPoint", &UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateActorAroundPoint },
			{ "BP_AppendLatentTweenRotateActorAroundPointByOffset", &UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateActorAroundPointByOffset },
			{ "BP_AppendLatentTweenRotateSceneComponentAroundPoint", &UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateSceneComponentAroundPoint },
			{ "BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset", &UTweenFloatLatentFactory::execBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset },
			{ "BP_AppendLatentTweenSceneComponentFollowSpline", &UTweenFloatLatentFactory::execBP_AppendLatentTweenSceneComponentFollowSpline },
			{ "BP_AppendLatentTweenWidgetAngleTo", &UTweenFloatLatentFactory::execBP_AppendLatentTweenWidgetAngleTo },
			{ "BP_AppendLatentTweenWidgetOpacityTo", &UTweenFloatLatentFactory::execBP_AppendLatentTweenWidgetOpacityTo },
			{ "BP_CreateLatentTweenActorFollowSpline", &UTweenFloatLatentFactory::execBP_CreateLatentTweenActorFollowSpline },
			{ "BP_CreateLatentTweenCustomFloat", &UTweenFloatLatentFactory::execBP_CreateLatentTweenCustomFloat },
			{ "BP_CreateLatentTweenMaterialFloatFromTo", &UTweenFloatLatentFactory::execBP_CreateLatentTweenMaterialFloatFromTo },
			{ "BP_CreateLatentTweenMaterialFloatTo", &UTweenFloatLatentFactory::execBP_CreateLatentTweenMaterialFloatTo },
			{ "BP_CreateLatentTweenRotateActorAroundPoint", &UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateActorAroundPoint },
			{ "BP_CreateLatentTweenRotateActorAroundPointByOffset", &UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateActorAroundPointByOffset },
			{ "BP_CreateLatentTweenRotateSceneComponentAroundPoint", &UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateSceneComponentAroundPoint },
			{ "BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset", &UTweenFloatLatentFactory::execBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset },
			{ "BP_CreateLatentTweenSceneComponentFollowSpline", &UTweenFloatLatentFactory::execBP_CreateLatentTweenSceneComponentFollowSpline },
			{ "BP_CreateLatentTweenWidgetAngleTo", &UTweenFloatLatentFactory::execBP_CreateLatentTweenWidgetAngleTo },
			{ "BP_CreateLatentTweenWidgetOpacityTo", &UTweenFloatLatentFactory::execBP_CreateLatentTweenWidgetOpacityTo },
			{ "BP_JoinLatentTweenActorFollowSpline", &UTweenFloatLatentFactory::execBP_JoinLatentTweenActorFollowSpline },
			{ "BP_JoinLatentTweenCustomFloat", &UTweenFloatLatentFactory::execBP_JoinLatentTweenCustomFloat },
			{ "BP_JoinLatentTweenMaterialFloatFromTo", &UTweenFloatLatentFactory::execBP_JoinLatentTweenMaterialFloatFromTo },
			{ "BP_JoinLatentTweenMaterialFloatTo", &UTweenFloatLatentFactory::execBP_JoinLatentTweenMaterialFloatTo },
			{ "BP_JoinLatentTweenRotateActorAroundPoint", &UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateActorAroundPoint },
			{ "BP_JoinLatentTweenRotateActorAroundPointByOffset", &UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateActorAroundPointByOffset },
			{ "BP_JoinLatentTweenRotateSceneComponentAroundPoint", &UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateSceneComponentAroundPoint },
			{ "BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset", &UTweenFloatLatentFactory::execBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset },
			{ "BP_JoinLatentTweenSceneComponentFollowSpline", &UTweenFloatLatentFactory::execBP_JoinLatentTweenSceneComponentFollowSpline },
			{ "BP_JoinLatentTweenWidgetAngleTo", &UTweenFloatLatentFactory::execBP_JoinLatentTweenWidgetAngleTo },
			{ "BP_JoinLatentTweenWidgetOpacityTo", &UTweenFloatLatentFactory::execBP_JoinLatentTweenWidgetOpacityTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenActorFollowSpline", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenActorFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenCustomFloat", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenCustomFloat_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenMaterialFloatTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenWidgetAngleTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_AppendLatentTweenWidgetOpacityTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_AppendLatentTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenActorFollowSpline", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenActorFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms
		{
			UTweenManagerComponent* TweenManager;
			UObject* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenCustomFloat", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenCustomFloat_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
			FName ParameterName;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenMaterialFloatTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenWidgetAngleTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenFloat* OutTween;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_CreateLatentTweenWidgetOpacityTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_CreateLatentTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenActorFollowSpline", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenActorFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UObject* TweenTarget;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenCustomFloat", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenCustomFloat_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenMaterialFloatTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
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
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenWidgetAngleTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics
	{
		struct TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenFloat* OutTween;
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloatLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, OutTween), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenFloatLatentFactory, nullptr, "BP_JoinLatentTweenWidgetOpacityTo", nullptr, nullptr, sizeof(TweenFloatLatentFactory_eventBP_JoinLatentTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenFloatLatentFactory_NoRegister()
	{
		return UTweenFloatLatentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenFloatLatentFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UTweenFloatLatentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenFloatLatentFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline, "BP_AppendLatentTweenActorFollowSpline" }, // 2293542458
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat, "BP_AppendLatentTweenCustomFloat" }, // 1969795296
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo, "BP_AppendLatentTweenMaterialFloatFromTo" }, // 11268699
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo, "BP_AppendLatentTweenMaterialFloatTo" }, // 2845693292
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint, "BP_AppendLatentTweenRotateActorAroundPoint" }, // 106338386
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset, "BP_AppendLatentTweenRotateActorAroundPointByOffset" }, // 222519125
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint, "BP_AppendLatentTweenRotateSceneComponentAroundPoint" }, // 1953898233
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset, "BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset" }, // 1846017132
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline, "BP_AppendLatentTweenSceneComponentFollowSpline" }, // 2120999330
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo, "BP_AppendLatentTweenWidgetAngleTo" }, // 1013356711
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo, "BP_AppendLatentTweenWidgetOpacityTo" }, // 1596040283
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline, "BP_CreateLatentTweenActorFollowSpline" }, // 446574207
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat, "BP_CreateLatentTweenCustomFloat" }, // 3934188705
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo, "BP_CreateLatentTweenMaterialFloatFromTo" }, // 31446772
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo, "BP_CreateLatentTweenMaterialFloatTo" }, // 3151990721
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint, "BP_CreateLatentTweenRotateActorAroundPoint" }, // 2847190963
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset, "BP_CreateLatentTweenRotateActorAroundPointByOffset" }, // 3908355347
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint, "BP_CreateLatentTweenRotateSceneComponentAroundPoint" }, // 2966948694
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset, "BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset" }, // 3787766074
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline, "BP_CreateLatentTweenSceneComponentFollowSpline" }, // 2012126449
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo, "BP_CreateLatentTweenWidgetAngleTo" }, // 660912345
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo, "BP_CreateLatentTweenWidgetOpacityTo" }, // 310000726
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline, "BP_JoinLatentTweenActorFollowSpline" }, // 3639649148
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat, "BP_JoinLatentTweenCustomFloat" }, // 3719541462
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo, "BP_JoinLatentTweenMaterialFloatFromTo" }, // 3791287
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo, "BP_JoinLatentTweenMaterialFloatTo" }, // 3098091496
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint, "BP_JoinLatentTweenRotateActorAroundPoint" }, // 860138592
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset, "BP_JoinLatentTweenRotateActorAroundPointByOffset" }, // 4194838722
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint, "BP_JoinLatentTweenRotateSceneComponentAroundPoint" }, // 2543219610
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset, "BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset" }, // 3011621358
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline, "BP_JoinLatentTweenSceneComponentFollowSpline" }, // 1678701403
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo, "BP_JoinLatentTweenWidgetAngleTo" }, // 4464449
		{ &Z_Construct_UFunction_UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo, "BP_JoinLatentTweenWidgetOpacityTo" }, // 8660790
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenFloatLatentFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenFloatLatentFactory.h" },
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenFloatLatentFactory, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenFloatChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenFloatLatentFactory, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenFloatChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenFloatLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenFloatLatentFactory, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenFloatChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenFloatLatentFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenFloatLatentFactory_Statics::NewProp_OnTweenEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenFloatLatentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenFloatLatentFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenFloatLatentFactory_Statics::ClassParams = {
		&UTweenFloatLatentFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenFloatLatentFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenFloatLatentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenFloatLatentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenFloatLatentFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenFloatLatentFactory, 1672755104);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenFloatLatentFactory>()
	{
		return UTweenFloatLatentFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenFloatLatentFactory(Z_Construct_UClass_UTweenFloatLatentFactory, &UTweenFloatLatentFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenFloatLatentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenFloatLatentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
