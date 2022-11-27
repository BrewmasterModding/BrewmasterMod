// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenRotatorStandardFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenRotatorStandardFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotatorStandardFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotatorStandardFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_AppendTweenRotateActorBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_AppendTweenRotateActorBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_AppendTweenRotateActorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_AppendTweenRotateActorTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_AppendTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_AppendTweenRotateSceneComponentBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_AppendTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_AppendTweenRotateSceneComponentTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_CreateTweenRotateActorBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_Tween);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenRotatorStandardFactory::BP_CreateTweenRotateActorBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_CreateTweenRotateActorTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_Tween);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenRotatorStandardFactory::BP_CreateTweenRotateActorTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_CreateTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_Tween);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenRotatorStandardFactory::BP_CreateTweenRotateSceneComponentBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_CreateTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_Tween);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenRotatorStandardFactory::BP_CreateTweenRotateSceneComponentTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_JoinTweenRotateActorBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_bY);
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
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_JoinTweenRotateActorBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_JoinTweenRotateActorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_To);
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
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_JoinTweenRotateActorTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_JoinTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_bY);
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
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_JoinTweenRotateSceneComponentBy(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorStandardFactory::execBP_JoinTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FRotator,Z_Param_To);
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
		*(UTweenRotator**)Z_Param__Result=UTweenRotatorStandardFactory::BP_JoinTweenRotateSceneComponentTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	void UTweenRotatorStandardFactory::StaticRegisterNativesUTweenRotatorStandardFactory()
	{
		UClass* Class = UTweenRotatorStandardFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendTweenRotateActorBy", &UTweenRotatorStandardFactory::execBP_AppendTweenRotateActorBy },
			{ "BP_AppendTweenRotateActorTo", &UTweenRotatorStandardFactory::execBP_AppendTweenRotateActorTo },
			{ "BP_AppendTweenRotateSceneComponentBy", &UTweenRotatorStandardFactory::execBP_AppendTweenRotateSceneComponentBy },
			{ "BP_AppendTweenRotateSceneComponentTo", &UTweenRotatorStandardFactory::execBP_AppendTweenRotateSceneComponentTo },
			{ "BP_CreateTweenRotateActorBy", &UTweenRotatorStandardFactory::execBP_CreateTweenRotateActorBy },
			{ "BP_CreateTweenRotateActorTo", &UTweenRotatorStandardFactory::execBP_CreateTweenRotateActorTo },
			{ "BP_CreateTweenRotateSceneComponentBy", &UTweenRotatorStandardFactory::execBP_CreateTweenRotateSceneComponentBy },
			{ "BP_CreateTweenRotateSceneComponentTo", &UTweenRotatorStandardFactory::execBP_CreateTweenRotateSceneComponentTo },
			{ "BP_JoinTweenRotateActorBy", &UTweenRotatorStandardFactory::execBP_JoinTweenRotateActorBy },
			{ "BP_JoinTweenRotateActorTo", &UTweenRotatorStandardFactory::execBP_JoinTweenRotateActorTo },
			{ "BP_JoinTweenRotateSceneComponentBy", &UTweenRotatorStandardFactory::execBP_JoinTweenRotateSceneComponentBy },
			{ "BP_JoinTweenRotateSceneComponentTo", &UTweenRotatorStandardFactory::execBP_JoinTweenRotateSceneComponentTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_AppendTweenRotateActorBy", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorBy_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_AppendTweenRotateActorTo", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateActorTo_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_AppendTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_AppendTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_AppendTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenRotator* Tween;
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
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, Tween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_CreateTweenRotateActorBy", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorBy_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenRotator* Tween;
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
			int32 SequenceIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, Tween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_CreateTweenRotateActorTo", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateActorTo_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenRotator* Tween;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, Tween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_CreateTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenRotator* Tween;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, Tween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_CreateTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_CreateTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_JoinTweenRotateActorBy", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorBy_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms
		{
			UTweenContainer* TweenContainer;
			AActor* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_JoinTweenRotateActorTo", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateActorTo_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_JoinTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics
	{
		struct TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms
		{
			UTweenContainer* TweenContainer;
			USceneComponent* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenRotator* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorStandardFactory, nullptr, "BP_JoinTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(TweenRotatorStandardFactory_eventBP_JoinTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenRotatorStandardFactory_NoRegister()
	{
		return UTweenRotatorStandardFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenRotatorStandardFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy, "BP_AppendTweenRotateActorBy" }, // 258050932
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo, "BP_AppendTweenRotateActorTo" }, // 3348672137
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy, "BP_AppendTweenRotateSceneComponentBy" }, // 311204952
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo, "BP_AppendTweenRotateSceneComponentTo" }, // 3519314658
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy, "BP_CreateTweenRotateActorBy" }, // 1948120024
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo, "BP_CreateTweenRotateActorTo" }, // 852059825
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy, "BP_CreateTweenRotateSceneComponentBy" }, // 2558016935
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo, "BP_CreateTweenRotateSceneComponentTo" }, // 1964396727
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy, "BP_JoinTweenRotateActorBy" }, // 1059963065
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo, "BP_JoinTweenRotateActorTo" }, // 4088923410
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy, "BP_JoinTweenRotateSceneComponentBy" }, // 764611093
		{ &Z_Construct_UFunction_UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo, "BP_JoinTweenRotateSceneComponentTo" }, // 3475228961
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TweenRotatorStandardFactory.h" },
		{ "ModuleRelativePath", "Public/TweenRotatorStandardFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenRotatorStandardFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::ClassParams = {
		&UTweenRotatorStandardFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenRotatorStandardFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenRotatorStandardFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenRotatorStandardFactory, 2004488404);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenRotatorStandardFactory>()
	{
		return UTweenRotatorStandardFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenRotatorStandardFactory(Z_Construct_UClass_UTweenRotatorStandardFactory, &UTweenRotatorStandardFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenRotatorStandardFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenRotatorStandardFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
