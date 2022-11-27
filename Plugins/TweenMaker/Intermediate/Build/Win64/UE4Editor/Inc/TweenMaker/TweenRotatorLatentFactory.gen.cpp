// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenRotatorLatentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenRotatorLatentFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotatorLatentFactory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateActorBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateActorBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateActorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateActorTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateSceneComponentBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_AppendLatentTweenRotateSceneComponentTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateActorBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateActorBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateActorTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateActorTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateSceneComponentBy(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_CreateLatentTweenRotateSceneComponentTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateActorBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateActorBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateActorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateActorTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateSceneComponentBy)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateSceneComponentBy(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_bY,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateSceneComponentTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenRotator,Z_Param_Out_OutTween);
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
		*(UTweenRotatorLatentFactory**)Z_Param__Result=UTweenRotatorLatentFactory::BP_JoinLatentTweenRotateSceneComponentTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_DeleteTweenOnHit,Z_Param_DeleteTweenOnOverlap,Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	void UTweenRotatorLatentFactory::StaticRegisterNativesUTweenRotatorLatentFactory()
	{
		UClass* Class = UTweenRotatorLatentFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendLatentTweenRotateActorBy", &UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateActorBy },
			{ "BP_AppendLatentTweenRotateActorTo", &UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateActorTo },
			{ "BP_AppendLatentTweenRotateSceneComponentBy", &UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateSceneComponentBy },
			{ "BP_AppendLatentTweenRotateSceneComponentTo", &UTweenRotatorLatentFactory::execBP_AppendLatentTweenRotateSceneComponentTo },
			{ "BP_CreateLatentTweenRotateActorBy", &UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateActorBy },
			{ "BP_CreateLatentTweenRotateActorTo", &UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateActorTo },
			{ "BP_CreateLatentTweenRotateSceneComponentBy", &UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateSceneComponentBy },
			{ "BP_CreateLatentTweenRotateSceneComponentTo", &UTweenRotatorLatentFactory::execBP_CreateLatentTweenRotateSceneComponentTo },
			{ "BP_JoinLatentTweenRotateActorBy", &UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateActorBy },
			{ "BP_JoinLatentTweenRotateActorTo", &UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateActorTo },
			{ "BP_JoinLatentTweenRotateSceneComponentBy", &UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateSceneComponentBy },
			{ "BP_JoinLatentTweenRotateSceneComponentTo", &UTweenRotatorLatentFactory::execBP_JoinLatentTweenRotateSceneComponentTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_AppendLatentTweenRotateActorBy", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorBy_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_AppendLatentTweenRotateActorTo", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateActorTo_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_AppendLatentTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_AppendLatentTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_AppendLatentTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_CreateLatentTweenRotateActorBy", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorBy_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			AActor* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_CreateLatentTweenRotateActorTo", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateActorTo_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_CreateLatentTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			USceneComponent* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenRotator* OutTween;
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
			UTweenRotatorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_CreateLatentTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_CreateLatentTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
			AActor* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotatorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_JoinLatentTweenRotateActorBy", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorBy_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
			AActor* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotatorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, TweenTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_JoinLatentTweenRotateActorTo", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateActorTo_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
			USceneComponent* TweenTarget;
			FRotator bY;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotatorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, bY), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_JoinLatentTweenRotateSceneComponentBy", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentBy_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics
	{
		struct TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenRotator* OutTween;
			USceneComponent* TweenTarget;
			FRotator To;
			float Duration;
			ETweenEaseType EaseType;
			bool DeleteTweenOnHit;
			bool DeleteTweenOnOverlap;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenRotatorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, OutTween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, TweenTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit = { "DeleteTweenOnHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms*)Obj)->DeleteTweenOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap = { "DeleteTweenOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms), &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms, ReturnValue), Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_DeleteTweenOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotatorLatentFactory, nullptr, "BP_JoinLatentTweenRotateSceneComponentTo", nullptr, nullptr, sizeof(TweenRotatorLatentFactory_eventBP_JoinLatentTweenRotateSceneComponentTo_Parms), Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenRotatorLatentFactory_NoRegister()
	{
		return UTweenRotatorLatentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenRotatorLatentFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy, "BP_AppendLatentTweenRotateActorBy" }, // 36268029
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo, "BP_AppendLatentTweenRotateActorTo" }, // 4091972227
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy, "BP_AppendLatentTweenRotateSceneComponentBy" }, // 1211304958
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo, "BP_AppendLatentTweenRotateSceneComponentTo" }, // 3840299826
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy, "BP_CreateLatentTweenRotateActorBy" }, // 731437167
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo, "BP_CreateLatentTweenRotateActorTo" }, // 3743786843
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy, "BP_CreateLatentTweenRotateSceneComponentBy" }, // 3469448294
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo, "BP_CreateLatentTweenRotateSceneComponentTo" }, // 4067994421
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy, "BP_JoinLatentTweenRotateActorBy" }, // 1028144443
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo, "BP_JoinLatentTweenRotateActorTo" }, // 4138152715
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy, "BP_JoinLatentTweenRotateSceneComponentBy" }, // 3139249650
		{ &Z_Construct_UFunction_UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo, "BP_JoinLatentTweenRotateSceneComponentTo" }, // 1021952007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenRotatorLatentFactory.h" },
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotatorLatentFactory, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotatorLatentFactory, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotatorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotatorLatentFactory, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::NewProp_OnTweenEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenRotatorLatentFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::ClassParams = {
		&UTweenRotatorLatentFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenRotatorLatentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenRotatorLatentFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenRotatorLatentFactory, 3914103728);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenRotatorLatentFactory>()
	{
		return UTweenRotatorLatentFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenRotatorLatentFactory(Z_Construct_UClass_UTweenRotatorLatentFactory, &UTweenRotatorLatentFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenRotatorLatentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenRotatorLatentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
