// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/BaseTween.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTween() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenFloat_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotator_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseTween::execAppendTweenActorFollowSpline)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenActorFollowSpline(Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenCustomFloat)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenCustomFloat(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenCustomVector)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_From);
		P_GET_STRUCT(FVector,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenCustomVector(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenCustomVector2D)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->AppendTweenCustomVector2D(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMaterialFloatFromTo)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenMaterialFloatFromTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMaterialFloatTo)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenMaterialFloatTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->AppendTweenMaterialVectorFromTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMaterialVectorTo)
	{
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->AppendTweenMaterialVectorTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMoveActorBy)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenMoveActorBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMoveActorTo)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenMoveActorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMoveSceneComponentBy)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenMoveSceneComponentBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMoveSceneComponentTo)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenMoveSceneComponentTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMoveWidgetBy)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->AppendTweenMoveWidgetBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenMoveWidgetTo)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->AppendTweenMoveWidgetTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateActorAroundPoint)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenRotateActorAroundPoint(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateActorAroundPointByOffset)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenRotateActorAroundPointByOffset(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateActorBy)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_bY);
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
		*(UTweenRotator**)Z_Param__Result=P_THIS->AppendTweenRotateActorBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateActorTo)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_To);
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
		*(UTweenRotator**)Z_Param__Result=P_THIS->AppendTweenRotateActorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateSceneComponentAroundPoint)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenRotateSceneComponentAroundPoint(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateSceneComponentAroundPointByOffset)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenRotateSceneComponentAroundPointByOffset(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_bY);
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
		*(UTweenRotator**)Z_Param__Result=P_THIS->AppendTweenRotateSceneComponentBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_To);
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
		*(UTweenRotator**)Z_Param__Result=P_THIS->AppendTweenRotateSceneComponentTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenScaleActorBy)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenScaleActorBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenScaleActorTo)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenScaleActorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenScaleSceneComponentBy)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenScaleSceneComponentBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenScaleSceneComponentTo)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
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
		*(UTweenVector**)Z_Param__Result=P_THIS->AppendTweenScaleSceneComponentTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenScaleWidgetBy)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->AppendTweenScaleWidgetBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenScaleWidgetTo)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->AppendTweenScaleWidgetTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenSceneComponentFollowSpline)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenSceneComponentFollowSpline(Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenShearWidgetTo)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->AppendTweenShearWidgetTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenWidgetAngleTo)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenWidgetAngleTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenWidgetColorFromTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->AppendTweenWidgetColorFromTo(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenWidgetColorTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->AppendTweenWidgetColorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execAppendTweenWidgetOpacityTo)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->AppendTweenWidgetOpacityTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execDeleteTween)
	{
		P_GET_UBOOL(Z_Param_FireEndEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTween(Z_Param_FireEndEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execGetTimeScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execGetTweenContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenContainer**)Z_Param__Result=P_THIS->GetTweenContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execGetTweenDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTweenDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execGetTweenElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTweenElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execGetTweenName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTweenName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execGetTweenTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetTweenTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execIsTweening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTweening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execIsTweenPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTweenPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenActorFollowSpline)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenActorFollowSpline(Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenCustomFloat)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenCustomFloat(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenCustomVector)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_From);
		P_GET_STRUCT(FVector,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenCustomVector(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenCustomVector2D)
	{
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
		*(UTweenVector2D**)Z_Param__Result=P_THIS->JoinTweenCustomVector2D(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMaterialFloatFromTo)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenMaterialFloatFromTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMaterialFloatTo)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenMaterialFloatTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->JoinTweenMaterialVectorFromTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMaterialVectorTo)
	{
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->JoinTweenMaterialVectorTo(Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMoveActorBy)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenMoveActorBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMoveActorTo)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenMoveActorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMoveSceneComponentBy)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenMoveSceneComponentBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMoveSceneComponentTo)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenMoveSceneComponentTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMoveWidgetBy)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=P_THIS->JoinTweenMoveWidgetBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenMoveWidgetTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=P_THIS->JoinTweenMoveWidgetTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateActorAroundPoint)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenRotateActorAroundPoint(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateActorAroundPointByOffset)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenRotateActorAroundPointByOffset(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateActorBy)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=P_THIS->JoinTweenRotateActorBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateActorTo)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=P_THIS->JoinTweenRotateActorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateSceneComponentAroundPoint)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenRotateSceneComponentAroundPoint(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_StartingAngle,Z_Param_EndingAngle,Z_Param_Radius,Z_Param_Axis,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateSceneComponentAroundPointByOffset)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenRotateSceneComponentAroundPointByOffset(Z_Param_Out_TweenTarget,Z_Param_PivotPoint,Z_Param_OffsetAngle,ETweenReferenceAxis(Z_Param_ReferenceAxis),Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=P_THIS->JoinTweenRotateSceneComponentBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=P_THIS->JoinTweenRotateSceneComponentTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenScaleActorBy)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenScaleActorBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenScaleActorTo)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenScaleActorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenScaleSceneComponentBy)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenScaleSceneComponentBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenScaleSceneComponentTo)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_UBOOL(Z_Param_DeleteTweenOnHit);
		P_GET_UBOOL(Z_Param_DeleteTweenOnOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector**)Z_Param__Result=P_THIS->JoinTweenScaleSceneComponentTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenScaleWidgetBy)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=P_THIS->JoinTweenScaleWidgetBy(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenScaleWidgetTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=P_THIS->JoinTweenScaleWidgetTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenSceneComponentFollowSpline)
	{
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
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenSceneComponentFollowSpline(Z_Param_Out_TweenTarget,Z_Param_Spline,Z_Param_Duration,Z_Param_ApplyRotation,Z_Param_ApplyScale,Z_Param_UseConstantSpeed,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenShearWidgetTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FVector2D,Z_Param_bY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenVector2D**)Z_Param__Result=P_THIS->JoinTweenShearWidgetTo(Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenWidgetAngleTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenWidgetAngleTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenWidgetColorFromTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->JoinTweenWidgetColorFromTo(Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenWidgetColorTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=P_THIS->JoinTweenWidgetColorTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execJoinTweenWidgetOpacityTo)
	{
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenFloat**)Z_Param__Result=P_THIS->JoinTweenWidgetOpacityTo(Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execPauseTween)
	{
		P_GET_UBOOL(Z_Param_SkipTween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTween(Z_Param_SkipTween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execRestartTween)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartTween();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execResumeTween)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTween();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execSetCustomEasisng)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomEasisng(Z_Param_Curve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execSetDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDelay(Z_Param_NewDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execSetTimeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeScale(Z_Param_NewTimeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execSetTweenName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TweenName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTweenName(Z_Param_TweenName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseTween::execTogglePauseTween)
	{
		P_GET_UBOOL(Z_Param_SkipTween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePauseTween(Z_Param_SkipTween);
		P_NATIVE_END;
	}
	void UBaseTween::StaticRegisterNativesUBaseTween()
	{
		UClass* Class = UBaseTween::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendTweenActorFollowSpline", &UBaseTween::execAppendTweenActorFollowSpline },
			{ "AppendTweenCustomFloat", &UBaseTween::execAppendTweenCustomFloat },
			{ "AppendTweenCustomVector", &UBaseTween::execAppendTweenCustomVector },
			{ "AppendTweenCustomVector2D", &UBaseTween::execAppendTweenCustomVector2D },
			{ "AppendTweenMaterialFloatFromTo", &UBaseTween::execAppendTweenMaterialFloatFromTo },
			{ "AppendTweenMaterialFloatTo", &UBaseTween::execAppendTweenMaterialFloatTo },
			{ "AppendTweenMaterialVectorFromTo", &UBaseTween::execAppendTweenMaterialVectorFromTo },
			{ "AppendTweenMaterialVectorTo", &UBaseTween::execAppendTweenMaterialVectorTo },
			{ "AppendTweenMoveActorBy", &UBaseTween::execAppendTweenMoveActorBy },
			{ "AppendTweenMoveActorTo", &UBaseTween::execAppendTweenMoveActorTo },
			{ "AppendTweenMoveSceneComponentBy", &UBaseTween::execAppendTweenMoveSceneComponentBy },
			{ "AppendTweenMoveSceneComponentTo", &UBaseTween::execAppendTweenMoveSceneComponentTo },
			{ "AppendTweenMoveWidgetBy", &UBaseTween::execAppendTweenMoveWidgetBy },
			{ "AppendTweenMoveWidgetTo", &UBaseTween::execAppendTweenMoveWidgetTo },
			{ "AppendTweenRotateActorAroundPoint", &UBaseTween::execAppendTweenRotateActorAroundPoint },
			{ "AppendTweenRotateActorAroundPointByOffset", &UBaseTween::execAppendTweenRotateActorAroundPointByOffset },
			{ "AppendTweenRotateActorBy", &UBaseTween::execAppendTweenRotateActorBy },
			{ "AppendTweenRotateActorTo", &UBaseTween::execAppendTweenRotateActorTo },
			{ "AppendTweenRotateSceneComponentAroundPoint", &UBaseTween::execAppendTweenRotateSceneComponentAroundPoint },
			{ "AppendTweenRotateSceneComponentAroundPointByOffset", &UBaseTween::execAppendTweenRotateSceneComponentAroundPointByOffset },
			{ "AppendTweenRotateSceneComponentBy", &UBaseTween::execAppendTweenRotateSceneComponentBy },
			{ "AppendTweenRotateSceneComponentTo", &UBaseTween::execAppendTweenRotateSceneComponentTo },
			{ "AppendTweenScaleActorBy", &UBaseTween::execAppendTweenScaleActorBy },
			{ "AppendTweenScaleActorTo", &UBaseTween::execAppendTweenScaleActorTo },
			{ "AppendTweenScaleSceneComponentBy", &UBaseTween::execAppendTweenScaleSceneComponentBy },
			{ "AppendTweenScaleSceneComponentTo", &UBaseTween::execAppendTweenScaleSceneComponentTo },
			{ "AppendTweenScaleWidgetBy", &UBaseTween::execAppendTweenScaleWidgetBy },
			{ "AppendTweenScaleWidgetTo", &UBaseTween::execAppendTweenScaleWidgetTo },
			{ "AppendTweenSceneComponentFollowSpline", &UBaseTween::execAppendTweenSceneComponentFollowSpline },
			{ "AppendTweenShearWidgetTo", &UBaseTween::execAppendTweenShearWidgetTo },
			{ "AppendTweenWidgetAngleTo", &UBaseTween::execAppendTweenWidgetAngleTo },
			{ "AppendTweenWidgetColorFromTo", &UBaseTween::execAppendTweenWidgetColorFromTo },
			{ "AppendTweenWidgetColorTo", &UBaseTween::execAppendTweenWidgetColorTo },
			{ "AppendTweenWidgetOpacityTo", &UBaseTween::execAppendTweenWidgetOpacityTo },
			{ "DeleteTween", &UBaseTween::execDeleteTween },
			{ "GetTimeScale", &UBaseTween::execGetTimeScale },
			{ "GetTweenContainer", &UBaseTween::execGetTweenContainer },
			{ "GetTweenDuration", &UBaseTween::execGetTweenDuration },
			{ "GetTweenElapsedTime", &UBaseTween::execGetTweenElapsedTime },
			{ "GetTweenName", &UBaseTween::execGetTweenName },
			{ "GetTweenTarget", &UBaseTween::execGetTweenTarget },
			{ "IsTweening", &UBaseTween::execIsTweening },
			{ "IsTweenPaused", &UBaseTween::execIsTweenPaused },
			{ "JoinTweenActorFollowSpline", &UBaseTween::execJoinTweenActorFollowSpline },
			{ "JoinTweenCustomFloat", &UBaseTween::execJoinTweenCustomFloat },
			{ "JoinTweenCustomVector", &UBaseTween::execJoinTweenCustomVector },
			{ "JoinTweenCustomVector2D", &UBaseTween::execJoinTweenCustomVector2D },
			{ "JoinTweenMaterialFloatFromTo", &UBaseTween::execJoinTweenMaterialFloatFromTo },
			{ "JoinTweenMaterialFloatTo", &UBaseTween::execJoinTweenMaterialFloatTo },
			{ "JoinTweenMaterialVectorFromTo", &UBaseTween::execJoinTweenMaterialVectorFromTo },
			{ "JoinTweenMaterialVectorTo", &UBaseTween::execJoinTweenMaterialVectorTo },
			{ "JoinTweenMoveActorBy", &UBaseTween::execJoinTweenMoveActorBy },
			{ "JoinTweenMoveActorTo", &UBaseTween::execJoinTweenMoveActorTo },
			{ "JoinTweenMoveSceneComponentBy", &UBaseTween::execJoinTweenMoveSceneComponentBy },
			{ "JoinTweenMoveSceneComponentTo", &UBaseTween::execJoinTweenMoveSceneComponentTo },
			{ "JoinTweenMoveWidgetBy", &UBaseTween::execJoinTweenMoveWidgetBy },
			{ "JoinTweenMoveWidgetTo", &UBaseTween::execJoinTweenMoveWidgetTo },
			{ "JoinTweenRotateActorAroundPoint", &UBaseTween::execJoinTweenRotateActorAroundPoint },
			{ "JoinTweenRotateActorAroundPointByOffset", &UBaseTween::execJoinTweenRotateActorAroundPointByOffset },
			{ "JoinTweenRotateActorBy", &UBaseTween::execJoinTweenRotateActorBy },
			{ "JoinTweenRotateActorTo", &UBaseTween::execJoinTweenRotateActorTo },
			{ "JoinTweenRotateSceneComponentAroundPoint", &UBaseTween::execJoinTweenRotateSceneComponentAroundPoint },
			{ "JoinTweenRotateSceneComponentAroundPointByOffset", &UBaseTween::execJoinTweenRotateSceneComponentAroundPointByOffset },
			{ "JoinTweenRotateSceneComponentBy", &UBaseTween::execJoinTweenRotateSceneComponentBy },
			{ "JoinTweenRotateSceneComponentTo", &UBaseTween::execJoinTweenRotateSceneComponentTo },
			{ "JoinTweenScaleActorBy", &UBaseTween::execJoinTweenScaleActorBy },
			{ "JoinTweenScaleActorTo", &UBaseTween::execJoinTweenScaleActorTo },
			{ "JoinTweenScaleSceneComponentBy", &UBaseTween::execJoinTweenScaleSceneComponentBy },
			{ "JoinTweenScaleSceneComponentTo", &UBaseTween::execJoinTweenScaleSceneComponentTo },
			{ "JoinTweenScaleWidgetBy", &UBaseTween::execJoinTweenScaleWidgetBy },
			{ "JoinTweenScaleWidgetTo", &UBaseTween::execJoinTweenScaleWidgetTo },
			{ "JoinTweenSceneComponentFollowSpline", &UBaseTween::execJoinTweenSceneComponentFollowSpline },
			{ "JoinTweenShearWidgetTo", &UBaseTween::execJoinTweenShearWidgetTo },
			{ "JoinTweenWidgetAngleTo", &UBaseTween::execJoinTweenWidgetAngleTo },
			{ "JoinTweenWidgetColorFromTo", &UBaseTween::execJoinTweenWidgetColorFromTo },
			{ "JoinTweenWidgetColorTo", &UBaseTween::execJoinTweenWidgetColorTo },
			{ "JoinTweenWidgetOpacityTo", &UBaseTween::execJoinTweenWidgetOpacityTo },
			{ "PauseTween", &UBaseTween::execPauseTween },
			{ "RestartTween", &UBaseTween::execRestartTween },
			{ "ResumeTween", &UBaseTween::execResumeTween },
			{ "SetCustomEasisng", &UBaseTween::execSetCustomEasisng },
			{ "SetDelay", &UBaseTween::execSetDelay },
			{ "SetTimeScale", &UBaseTween::execSetTimeScale },
			{ "SetTweenName", &UBaseTween::execSetTweenName },
			{ "TogglePauseTween", &UBaseTween::execTogglePauseTween },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics
	{
		struct BaseTween_eventAppendTweenActorFollowSpline_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenActorFollowSpline", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenActorFollowSpline_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics
	{
		struct BaseTween_eventAppendTweenCustomFloat_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenCustomFloat_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenCustomFloat", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenCustomFloat_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics
	{
		struct BaseTween_eventAppendTweenCustomVector_Parms
		{
			UObject* TweenTarget;
			FVector From;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, From), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenCustomVector_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenCustomVector_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenCustomVector", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenCustomVector_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics
	{
		struct BaseTween_eventAppendTweenCustomVector2D_Parms
		{
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
			UTweenVector2D* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenCustomVector2D_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenCustomVector2D", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenCustomVector2D_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics
	{
		struct BaseTween_eventAppendTweenMaterialFloatFromTo_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics
	{
		struct BaseTween_eventAppendTweenMaterialFloatTo_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMaterialFloatTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics
	{
		struct BaseTween_eventAppendTweenMaterialVectorFromTo_Parms
		{
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics
	{
		struct BaseTween_eventAppendTweenMaterialVectorTo_Parms
		{
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMaterialVectorTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics
	{
		struct BaseTween_eventAppendTweenMoveActorBy_Parms
		{
			AActor* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMoveActorBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMoveActorBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics
	{
		struct BaseTween_eventAppendTweenMoveActorTo_Parms
		{
			AActor* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMoveActorTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMoveActorTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics
	{
		struct BaseTween_eventAppendTweenMoveSceneComponentBy_Parms
		{
			USceneComponent* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMoveSceneComponentBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMoveSceneComponentBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics
	{
		struct BaseTween_eventAppendTweenMoveSceneComponentTo_Parms
		{
			USceneComponent* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMoveSceneComponentTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMoveSceneComponentTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics
	{
		struct BaseTween_eventAppendTweenMoveWidgetBy_Parms
		{
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMoveWidgetBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics
	{
		struct BaseTween_eventAppendTweenMoveWidgetTo_Parms
		{
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenMoveWidgetTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics
	{
		struct BaseTween_eventAppendTweenRotateActorAroundPoint_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics
	{
		struct BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics
	{
		struct BaseTween_eventAppendTweenRotateActorBy_Parms
		{
			AActor* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateActorBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateActorBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics
	{
		struct BaseTween_eventAppendTweenRotateActorTo_Parms
		{
			AActor* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateActorTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateActorTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics
	{
		struct BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics
	{
		struct BaseTween_eventAppendTweenRotateSceneComponentBy_Parms
		{
			USceneComponent* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics
	{
		struct BaseTween_eventAppendTweenRotateSceneComponentTo_Parms
		{
			USceneComponent* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics
	{
		struct BaseTween_eventAppendTweenScaleActorBy_Parms
		{
			AActor* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleActorBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenScaleActorBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenScaleActorBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics
	{
		struct BaseTween_eventAppendTweenScaleActorTo_Parms
		{
			AActor* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleActorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenScaleActorTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenScaleActorTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics
	{
		struct BaseTween_eventAppendTweenScaleSceneComponentBy_Parms
		{
			USceneComponent* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenScaleSceneComponentBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenScaleSceneComponentBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics
	{
		struct BaseTween_eventAppendTweenScaleSceneComponentTo_Parms
		{
			USceneComponent* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenScaleSceneComponentTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenScaleSceneComponentTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics
	{
		struct BaseTween_eventAppendTweenScaleWidgetBy_Parms
		{
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenScaleWidgetBy", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics
	{
		struct BaseTween_eventAppendTweenScaleWidgetTo_Parms
		{
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenScaleWidgetTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics
	{
		struct BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics
	{
		struct BaseTween_eventAppendTweenShearWidgetTo_Parms
		{
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenShearWidgetTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenShearWidgetTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics
	{
		struct BaseTween_eventAppendTweenWidgetAngleTo_Parms
		{
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenWidgetAngleTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics
	{
		struct BaseTween_eventAppendTweenWidgetColorFromTo_Parms
		{
			UWidget* TweenTarget;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenWidgetColorFromTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics
	{
		struct BaseTween_eventAppendTweenWidgetColorTo_Parms
		{
			UWidget* TweenTarget;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenWidgetColorTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenWidgetColorTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics
	{
		struct BaseTween_eventAppendTweenWidgetOpacityTo_Parms
		{
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventAppendTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventAppendTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventAppendTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "AppendTweenWidgetOpacityTo", nullptr, nullptr, sizeof(BaseTween_eventAppendTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_DeleteTween_Statics
	{
		struct BaseTween_eventDeleteTween_Parms
		{
			bool FireEndEvent;
		};
		static void NewProp_FireEndEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FireEndEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::NewProp_FireEndEvent_SetBit(void* Obj)
	{
		((BaseTween_eventDeleteTween_Parms*)Obj)->FireEndEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::NewProp_FireEndEvent = { "FireEndEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventDeleteTween_Parms), &Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::NewProp_FireEndEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::NewProp_FireEndEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "DeleteTween", nullptr, nullptr, sizeof(BaseTween_eventDeleteTween_Parms), Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_DeleteTween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_DeleteTween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics
	{
		struct BaseTween_eventGetTimeScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventGetTimeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "GetTimeScale", nullptr, nullptr, sizeof(BaseTween_eventGetTimeScale_Parms), Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_GetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_GetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics
	{
		struct BaseTween_eventGetTweenContainer_Parms
		{
			UTweenContainer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventGetTweenContainer_Parms, ReturnValue), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "GetTweenContainer", nullptr, nullptr, sizeof(BaseTween_eventGetTweenContainer_Parms), Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_GetTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_GetTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics
	{
		struct BaseTween_eventGetTweenDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventGetTweenDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "GetTweenDuration", nullptr, nullptr, sizeof(BaseTween_eventGetTweenDuration_Parms), Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_GetTweenDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_GetTweenDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics
	{
		struct BaseTween_eventGetTweenElapsedTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventGetTweenElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "GetTweenElapsedTime", nullptr, nullptr, sizeof(BaseTween_eventGetTweenElapsedTime_Parms), Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_GetTweenName_Statics
	{
		struct BaseTween_eventGetTweenName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventGetTweenName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "GetTweenName", nullptr, nullptr, sizeof(BaseTween_eventGetTweenName_Parms), Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_GetTweenName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_GetTweenName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics
	{
		struct BaseTween_eventGetTweenTarget_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventGetTweenTarget_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "GetTweenTarget", nullptr, nullptr, sizeof(BaseTween_eventGetTweenTarget_Parms), Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_GetTweenTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_GetTweenTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_IsTweening_Statics
	{
		struct BaseTween_eventIsTweening_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTween_IsTweening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseTween_eventIsTweening_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_IsTweening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventIsTweening_Parms), &Z_Construct_UFunction_UBaseTween_IsTweening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_IsTweening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_IsTweening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_IsTweening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_IsTweening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "IsTweening", nullptr, nullptr, sizeof(BaseTween_eventIsTweening_Parms), Z_Construct_UFunction_UBaseTween_IsTweening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_IsTweening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_IsTweening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_IsTweening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_IsTweening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_IsTweening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics
	{
		struct BaseTween_eventIsTweenPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseTween_eventIsTweenPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventIsTweenPaused_Parms), &Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "IsTweenPaused", nullptr, nullptr, sizeof(BaseTween_eventIsTweenPaused_Parms), Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_IsTweenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_IsTweenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics
	{
		struct BaseTween_eventJoinTweenActorFollowSpline_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenActorFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenActorFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenActorFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenActorFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenActorFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenActorFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenActorFollowSpline", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenActorFollowSpline_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics
	{
		struct BaseTween_eventJoinTweenCustomFloat_Parms
		{
			UObject* TweenTarget;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenCustomFloat_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenCustomFloat_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomFloat_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenCustomFloat", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenCustomFloat_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics
	{
		struct BaseTween_eventJoinTweenCustomVector_Parms
		{
			UObject* TweenTarget;
			FVector From;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, From), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenCustomVector_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenCustomVector_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenCustomVector", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenCustomVector_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics
	{
		struct BaseTween_eventJoinTweenCustomVector2D_Parms
		{
			UObject* TweenTarget;
			FVector2D From;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, From), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenCustomVector2D_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenCustomVector2D_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenCustomVector2D_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenCustomVector2D", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenCustomVector2D_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics
	{
		struct BaseTween_eventJoinTweenMaterialFloatFromTo_Parms
		{
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float From;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMaterialFloatFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMaterialFloatFromTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMaterialFloatFromTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics
	{
		struct BaseTween_eventJoinTweenMaterialFloatTo_Parms
		{
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMaterialFloatTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMaterialFloatTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialFloatTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMaterialFloatTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMaterialFloatTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics
	{
		struct BaseTween_eventJoinTweenMaterialVectorFromTo_Parms
		{
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics
	{
		struct BaseTween_eventJoinTweenMaterialVectorTo_Parms
		{
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMaterialVectorTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics
	{
		struct BaseTween_eventJoinTweenMoveActorBy_Parms
		{
			AActor* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMoveActorBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMoveActorBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics
	{
		struct BaseTween_eventJoinTweenMoveActorTo_Parms
		{
			AActor* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMoveActorTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMoveActorTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics
	{
		struct BaseTween_eventJoinTweenMoveSceneComponentBy_Parms
		{
			USceneComponent* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMoveSceneComponentBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMoveSceneComponentBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics
	{
		struct BaseTween_eventJoinTweenMoveSceneComponentTo_Parms
		{
			USceneComponent* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMoveSceneComponentTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMoveSceneComponentTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics
	{
		struct BaseTween_eventJoinTweenMoveWidgetBy_Parms
		{
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveWidgetBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMoveWidgetBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMoveWidgetBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics
	{
		struct BaseTween_eventJoinTweenMoveWidgetTo_Parms
		{
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenMoveWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenMoveWidgetTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenMoveWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenMoveWidgetTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenMoveWidgetTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics
	{
		struct BaseTween_eventJoinTweenRotateActorAroundPoint_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateActorAroundPoint", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateActorAroundPoint_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics
	{
		struct BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateActorAroundPointByOffset", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateActorAroundPointByOffset_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics
	{
		struct BaseTween_eventJoinTweenRotateActorBy_Parms
		{
			AActor* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateActorBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateActorBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics
	{
		struct BaseTween_eventJoinTweenRotateActorTo_Parms
		{
			AActor* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateActorTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateActorTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics
	{
		struct BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle = { "StartingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, StartingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle = { "EndingAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, EndingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_StartingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EndingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateSceneComponentAroundPoint", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPoint_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics
	{
		struct BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle = { "OffsetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, OffsetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis = { "ReferenceAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, ReferenceAxis), Z_Construct_UEnum_TweenMaker_ETweenReferenceAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_OffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReferenceAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateSceneComponentAroundPointByOffset", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateSceneComponentAroundPointByOffset_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics
	{
		struct BaseTween_eventJoinTweenRotateSceneComponentBy_Parms
		{
			USceneComponent* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics
	{
		struct BaseTween_eventJoinTweenRotateSceneComponentTo_Parms
		{
			USceneComponent* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotator* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics
	{
		struct BaseTween_eventJoinTweenScaleActorBy_Parms
		{
			AActor* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleActorBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenScaleActorBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenScaleActorBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics
	{
		struct BaseTween_eventJoinTweenScaleActorTo_Parms
		{
			AActor* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleActorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenScaleActorTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenScaleActorTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics
	{
		struct BaseTween_eventJoinTweenScaleSceneComponentBy_Parms
		{
			USceneComponent* TweenTarget;
			FVector bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bY;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenScaleSceneComponentBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenScaleSceneComponentBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics
	{
		struct BaseTween_eventJoinTweenScaleSceneComponentTo_Parms
		{
			USceneComponent* TweenTarget;
			FVector To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenScaleSceneComponentTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenScaleSceneComponentTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics
	{
		struct BaseTween_eventJoinTweenScaleWidgetBy_Parms
		{
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleWidgetBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleWidgetBy_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetBy_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenScaleWidgetBy", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenScaleWidgetBy_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics
	{
		struct BaseTween_eventJoinTweenScaleWidgetTo_Parms
		{
			UWidget* TweenTarget;
			FVector2D To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, To), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenScaleWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenScaleWidgetTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenScaleWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenScaleWidgetTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenScaleWidgetTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics
	{
		struct BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms
		{
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
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms*)Obj)->ApplyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale = { "ApplyScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms*)Obj)->UseConstantSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed = { "UseConstantSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ApplyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_UseConstantSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenSceneComponentFollowSpline", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenSceneComponentFollowSpline_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics
	{
		struct BaseTween_eventJoinTweenShearWidgetTo_Parms
		{
			UWidget* TweenTarget;
			FVector2D bY;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenVector2D* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, bY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenShearWidgetTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenShearWidgetTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenShearWidgetTo_Parms, ReturnValue), Z_Construct_UClass_UTweenVector2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenShearWidgetTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenShearWidgetTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics
	{
		struct BaseTween_eventJoinTweenWidgetAngleTo_Parms
		{
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenWidgetAngleTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenWidgetAngleTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetAngleTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenWidgetAngleTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenWidgetAngleTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics
	{
		struct BaseTween_eventJoinTweenWidgetColorFromTo_Parms
		{
			UWidget* TweenTarget;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenTarget_MetaData[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenWidgetColorFromTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics
	{
		struct BaseTween_eventJoinTweenWidgetColorTo_Parms
		{
			UWidget* TweenTarget;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColor* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenWidgetColorTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenWidgetColorTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics
	{
		struct BaseTween_eventJoinTweenWidgetOpacityTo_Parms
		{
			UWidget* TweenTarget;
			float To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenFloat* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((BaseTween_eventJoinTweenWidgetOpacityTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventJoinTweenWidgetOpacityTo_Parms), &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventJoinTweenWidgetOpacityTo_Parms, ReturnValue), Z_Construct_UClass_UTweenFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "JoinTweenWidgetOpacityTo", nullptr, nullptr, sizeof(BaseTween_eventJoinTweenWidgetOpacityTo_Parms), Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_PauseTween_Statics
	{
		struct BaseTween_eventPauseTween_Parms
		{
			bool SkipTween;
		};
		static void NewProp_SkipTween_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipTween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTween_PauseTween_Statics::NewProp_SkipTween_SetBit(void* Obj)
	{
		((BaseTween_eventPauseTween_Parms*)Obj)->SkipTween = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_PauseTween_Statics::NewProp_SkipTween = { "SkipTween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventPauseTween_Parms), &Z_Construct_UFunction_UBaseTween_PauseTween_Statics::NewProp_SkipTween_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_PauseTween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_PauseTween_Statics::NewProp_SkipTween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_PauseTween_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_PauseTween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "PauseTween", nullptr, nullptr, sizeof(BaseTween_eventPauseTween_Parms), Z_Construct_UFunction_UBaseTween_PauseTween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_PauseTween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_PauseTween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_PauseTween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_PauseTween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_PauseTween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_RestartTween_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_RestartTween_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_RestartTween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "RestartTween", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_RestartTween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_RestartTween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_RestartTween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_RestartTween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_ResumeTween_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_ResumeTween_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_ResumeTween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "ResumeTween", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_ResumeTween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_ResumeTween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_ResumeTween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_ResumeTween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics
	{
		struct BaseTween_eventSetCustomEasisng_Parms
		{
			UCurveFloat* Curve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventSetCustomEasisng_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::NewProp_Curve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "SetCustomEasisng", nullptr, nullptr, sizeof(BaseTween_eventSetCustomEasisng_Parms), Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_SetCustomEasisng()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_SetCustomEasisng_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_SetDelay_Statics
	{
		struct BaseTween_eventSetDelay_Parms
		{
			float NewDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_SetDelay_Statics::NewProp_NewDelay = { "NewDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventSetDelay_Parms, NewDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_SetDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_SetDelay_Statics::NewProp_NewDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_SetDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_SetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "SetDelay", nullptr, nullptr, sizeof(BaseTween_eventSetDelay_Parms), Z_Construct_UFunction_UBaseTween_SetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_SetDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_SetDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_SetDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics
	{
		struct BaseTween_eventSetTimeScale_Parms
		{
			float NewTimeScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTimeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::NewProp_NewTimeScale = { "NewTimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventSetTimeScale_Parms, NewTimeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::NewProp_NewTimeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "SetTimeScale", nullptr, nullptr, sizeof(BaseTween_eventSetTimeScale_Parms), Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_SetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_SetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_SetTweenName_Statics
	{
		struct BaseTween_eventSetTweenName_Parms
		{
			FName TweenName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TweenName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::NewProp_TweenName = { "TweenName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTween_eventSetTweenName_Parms, TweenName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::NewProp_TweenName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "SetTweenName", nullptr, nullptr, sizeof(BaseTween_eventSetTweenName_Parms), Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_SetTweenName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_SetTweenName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics
	{
		struct BaseTween_eventTogglePauseTween_Parms
		{
			bool SkipTween;
		};
		static void NewProp_SkipTween_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipTween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::NewProp_SkipTween_SetBit(void* Obj)
	{
		((BaseTween_eventTogglePauseTween_Parms*)Obj)->SkipTween = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::NewProp_SkipTween = { "SkipTween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseTween_eventTogglePauseTween_Parms), &Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::NewProp_SkipTween_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::NewProp_SkipTween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTween, nullptr, "TogglePauseTween", nullptr, nullptr, sizeof(BaseTween_eventTogglePauseTween_Parms), Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTween_TogglePauseTween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTween_TogglePauseTween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseTween_NoRegister()
	{
		return UBaseTween::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTween_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOwningTweenContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOwningTweenContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTween_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTween_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenActorFollowSpline, "AppendTweenActorFollowSpline" }, // 1210116418
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenCustomFloat, "AppendTweenCustomFloat" }, // 3349151555
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector, "AppendTweenCustomVector" }, // 4034684306
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenCustomVector2D, "AppendTweenCustomVector2D" }, // 3979516071
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatFromTo, "AppendTweenMaterialFloatFromTo" }, // 1778662706
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialFloatTo, "AppendTweenMaterialFloatTo" }, // 3836082320
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorFromTo, "AppendTweenMaterialVectorFromTo" }, // 3161692072
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMaterialVectorTo, "AppendTweenMaterialVectorTo" }, // 1010561856
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorBy, "AppendTweenMoveActorBy" }, // 2497793246
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMoveActorTo, "AppendTweenMoveActorTo" }, // 43598848
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentBy, "AppendTweenMoveSceneComponentBy" }, // 3905929202
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMoveSceneComponentTo, "AppendTweenMoveSceneComponentTo" }, // 1213467645
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetBy, "AppendTweenMoveWidgetBy" }, // 3097012519
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenMoveWidgetTo, "AppendTweenMoveWidgetTo" }, // 3227892357
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPoint, "AppendTweenRotateActorAroundPoint" }, // 913410867
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorAroundPointByOffset, "AppendTweenRotateActorAroundPointByOffset" }, // 1614495051
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorBy, "AppendTweenRotateActorBy" }, // 184671604
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateActorTo, "AppendTweenRotateActorTo" }, // 262419157
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPoint, "AppendTweenRotateSceneComponentAroundPoint" }, // 3579151298
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset, "AppendTweenRotateSceneComponentAroundPointByOffset" }, // 3531492315
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentBy, "AppendTweenRotateSceneComponentBy" }, // 2941167842
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenRotateSceneComponentTo, "AppendTweenRotateSceneComponentTo" }, // 83934794
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorBy, "AppendTweenScaleActorBy" }, // 1838789959
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenScaleActorTo, "AppendTweenScaleActorTo" }, // 4275877263
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentBy, "AppendTweenScaleSceneComponentBy" }, // 989064615
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenScaleSceneComponentTo, "AppendTweenScaleSceneComponentTo" }, // 2498360997
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetBy, "AppendTweenScaleWidgetBy" }, // 238285401
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenScaleWidgetTo, "AppendTweenScaleWidgetTo" }, // 2741811257
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenSceneComponentFollowSpline, "AppendTweenSceneComponentFollowSpline" }, // 3578622840
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenShearWidgetTo, "AppendTweenShearWidgetTo" }, // 584513106
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetAngleTo, "AppendTweenWidgetAngleTo" }, // 2975315375
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorFromTo, "AppendTweenWidgetColorFromTo" }, // 1663545812
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetColorTo, "AppendTweenWidgetColorTo" }, // 2437488143
		{ &Z_Construct_UFunction_UBaseTween_AppendTweenWidgetOpacityTo, "AppendTweenWidgetOpacityTo" }, // 1585250517
		{ &Z_Construct_UFunction_UBaseTween_DeleteTween, "DeleteTween" }, // 1353090809
		{ &Z_Construct_UFunction_UBaseTween_GetTimeScale, "GetTimeScale" }, // 1080861901
		{ &Z_Construct_UFunction_UBaseTween_GetTweenContainer, "GetTweenContainer" }, // 3991642458
		{ &Z_Construct_UFunction_UBaseTween_GetTweenDuration, "GetTweenDuration" }, // 2665385288
		{ &Z_Construct_UFunction_UBaseTween_GetTweenElapsedTime, "GetTweenElapsedTime" }, // 145976226
		{ &Z_Construct_UFunction_UBaseTween_GetTweenName, "GetTweenName" }, // 2941671171
		{ &Z_Construct_UFunction_UBaseTween_GetTweenTarget, "GetTweenTarget" }, // 691356318
		{ &Z_Construct_UFunction_UBaseTween_IsTweening, "IsTweening" }, // 2593254495
		{ &Z_Construct_UFunction_UBaseTween_IsTweenPaused, "IsTweenPaused" }, // 3525930203
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenActorFollowSpline, "JoinTweenActorFollowSpline" }, // 993871421
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenCustomFloat, "JoinTweenCustomFloat" }, // 2208343935
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector, "JoinTweenCustomVector" }, // 1634831854
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenCustomVector2D, "JoinTweenCustomVector2D" }, // 3774207172
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatFromTo, "JoinTweenMaterialFloatFromTo" }, // 3023548406
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialFloatTo, "JoinTweenMaterialFloatTo" }, // 828475313
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorFromTo, "JoinTweenMaterialVectorFromTo" }, // 3303790362
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMaterialVectorTo, "JoinTweenMaterialVectorTo" }, // 3739109815
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorBy, "JoinTweenMoveActorBy" }, // 3468433497
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMoveActorTo, "JoinTweenMoveActorTo" }, // 2267250596
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentBy, "JoinTweenMoveSceneComponentBy" }, // 1690805126
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMoveSceneComponentTo, "JoinTweenMoveSceneComponentTo" }, // 2553258102
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetBy, "JoinTweenMoveWidgetBy" }, // 3817521859
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenMoveWidgetTo, "JoinTweenMoveWidgetTo" }, // 500299703
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPoint, "JoinTweenRotateActorAroundPoint" }, // 90460148
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorAroundPointByOffset, "JoinTweenRotateActorAroundPointByOffset" }, // 3073315093
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorBy, "JoinTweenRotateActorBy" }, // 3892740191
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateActorTo, "JoinTweenRotateActorTo" }, // 441105895
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPoint, "JoinTweenRotateSceneComponentAroundPoint" }, // 3040812190
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset, "JoinTweenRotateSceneComponentAroundPointByOffset" }, // 3300516067
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentBy, "JoinTweenRotateSceneComponentBy" }, // 1067309830
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenRotateSceneComponentTo, "JoinTweenRotateSceneComponentTo" }, // 1571806868
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorBy, "JoinTweenScaleActorBy" }, // 3157969999
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenScaleActorTo, "JoinTweenScaleActorTo" }, // 3634435551
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentBy, "JoinTweenScaleSceneComponentBy" }, // 2749523790
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenScaleSceneComponentTo, "JoinTweenScaleSceneComponentTo" }, // 1275568185
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetBy, "JoinTweenScaleWidgetBy" }, // 1631941068
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenScaleWidgetTo, "JoinTweenScaleWidgetTo" }, // 1870929318
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenSceneComponentFollowSpline, "JoinTweenSceneComponentFollowSpline" }, // 1995663387
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenShearWidgetTo, "JoinTweenShearWidgetTo" }, // 2635027623
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetAngleTo, "JoinTweenWidgetAngleTo" }, // 1954140621
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorFromTo, "JoinTweenWidgetColorFromTo" }, // 2940059435
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetColorTo, "JoinTweenWidgetColorTo" }, // 2894219816
		{ &Z_Construct_UFunction_UBaseTween_JoinTweenWidgetOpacityTo, "JoinTweenWidgetOpacityTo" }, // 1057477357
		{ &Z_Construct_UFunction_UBaseTween_PauseTween, "PauseTween" }, // 530145489
		{ &Z_Construct_UFunction_UBaseTween_RestartTween, "RestartTween" }, // 3612487193
		{ &Z_Construct_UFunction_UBaseTween_ResumeTween, "ResumeTween" }, // 510584794
		{ &Z_Construct_UFunction_UBaseTween_SetCustomEasisng, "SetCustomEasisng" }, // 435028410
		{ &Z_Construct_UFunction_UBaseTween_SetDelay, "SetDelay" }, // 3157058511
		{ &Z_Construct_UFunction_UBaseTween_SetTimeScale, "SetTimeScale" }, // 4159517231
		{ &Z_Construct_UFunction_UBaseTween_SetTweenName, "SetTweenName" }, // 320283270
		{ &Z_Construct_UFunction_UBaseTween_TogglePauseTween, "TogglePauseTween" }, // 4161610427
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTween_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseTween.h" },
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTween_Statics::NewProp_mCurveFloat_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTween_Statics::NewProp_mCurveFloat = { "mCurveFloat", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTween, mCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTween_Statics::NewProp_mCurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTween_Statics::NewProp_mCurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTween_Statics::NewProp_mOwningTweenContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTween.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTween_Statics::NewProp_mOwningTweenContainer = { "mOwningTweenContainer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTween, mOwningTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTween_Statics::NewProp_mOwningTweenContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTween_Statics::NewProp_mOwningTweenContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTween_Statics::NewProp_mCurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTween_Statics::NewProp_mOwningTweenContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTween_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTween>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseTween_Statics::ClassParams = {
		&UBaseTween::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTween_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTween_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTween_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTween_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTween()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseTween_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseTween, 2761327167);
	template<> TWEENMAKER_API UClass* StaticClass<UBaseTween>()
	{
		return UBaseTween::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseTween(Z_Construct_UClass_UBaseTween, &UBaseTween::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UBaseTween"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTween);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
