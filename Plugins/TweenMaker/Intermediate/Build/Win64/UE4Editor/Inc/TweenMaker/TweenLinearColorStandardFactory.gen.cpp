// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenLinearColorStandardFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenLinearColorStandardFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColorStandardFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColorStandardFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_AppendTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_AppendTweenMaterialVectorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_AppendTweenMaterialVectorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_AppendTweenMaterialVectorTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_AppendTweenWidgetColorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_AppendTweenWidgetColorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_AppendTweenWidgetColorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
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
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_AppendTweenWidgetColorTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_CreateTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_Tween);
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
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTweenLinearColorStandardFactory::BP_CreateTweenMaterialVectorFromTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_CreateTweenMaterialVectorTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_Tween);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
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
		UTweenLinearColorStandardFactory::BP_CreateTweenMaterialVectorTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_CreateTweenWidgetColorFromTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_Tween);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
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
		UTweenLinearColorStandardFactory::BP_CreateTweenWidgetColorFromTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_CreateTweenWidgetColorTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_Tween);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
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
		UTweenLinearColorStandardFactory::BP_CreateTweenWidgetColorTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_TweenContainer,Z_Param_Out_Tween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_JoinTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_JoinTweenMaterialVectorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_JoinTweenMaterialVectorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_JoinTweenMaterialVectorTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_JoinTweenWidgetColorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_From);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_JoinTweenWidgetColorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorStandardFactory::execBP_JoinTweenWidgetColorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColor**)Z_Param__Result=UTweenLinearColorStandardFactory::BP_JoinTweenWidgetColorTo(Z_Param_Out_TweenContainer,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused,Z_Param_SequenceIndex);
		P_NATIVE_END;
	}
	void UTweenLinearColorStandardFactory::StaticRegisterNativesUTweenLinearColorStandardFactory()
	{
		UClass* Class = UTweenLinearColorStandardFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendTweenMaterialVectorFromTo", &UTweenLinearColorStandardFactory::execBP_AppendTweenMaterialVectorFromTo },
			{ "BP_AppendTweenMaterialVectorTo", &UTweenLinearColorStandardFactory::execBP_AppendTweenMaterialVectorTo },
			{ "BP_AppendTweenWidgetColorFromTo", &UTweenLinearColorStandardFactory::execBP_AppendTweenWidgetColorFromTo },
			{ "BP_AppendTweenWidgetColorTo", &UTweenLinearColorStandardFactory::execBP_AppendTweenWidgetColorTo },
			{ "BP_CreateTweenMaterialVectorFromTo", &UTweenLinearColorStandardFactory::execBP_CreateTweenMaterialVectorFromTo },
			{ "BP_CreateTweenMaterialVectorTo", &UTweenLinearColorStandardFactory::execBP_CreateTweenMaterialVectorTo },
			{ "BP_CreateTweenWidgetColorFromTo", &UTweenLinearColorStandardFactory::execBP_CreateTweenWidgetColorFromTo },
			{ "BP_CreateTweenWidgetColorTo", &UTweenLinearColorStandardFactory::execBP_CreateTweenWidgetColorTo },
			{ "BP_JoinTweenMaterialVectorFromTo", &UTweenLinearColorStandardFactory::execBP_JoinTweenMaterialVectorFromTo },
			{ "BP_JoinTweenMaterialVectorTo", &UTweenLinearColorStandardFactory::execBP_JoinTweenMaterialVectorTo },
			{ "BP_JoinTweenWidgetColorFromTo", &UTweenLinearColorStandardFactory::execBP_JoinTweenWidgetColorFromTo },
			{ "BP_JoinTweenWidgetColorTo", &UTweenLinearColorStandardFactory::execBP_JoinTweenWidgetColorTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_AppendTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_AppendTweenMaterialVectorTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
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
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_AppendTweenWidgetColorFromTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_AppendTweenWidgetColorTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_AppendTweenWidgetColorTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenLinearColor* Tween;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, Tween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_CreateTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenLinearColor* Tween;
			FName ParameterName;
			FLinearColor To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, Tween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_CreateTweenMaterialVectorTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenLinearColor* Tween;
			FLinearColor From;
			FLinearColor To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, Tween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_CreateTweenWidgetColorFromTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* TweenContainer;
			UTweenLinearColor* Tween;
			FLinearColor To;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, Tween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::NewProp_SequenceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_CreateTweenWidgetColorTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_CreateTweenWidgetColorTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_JoinTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_JoinTweenMaterialVectorTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_JoinTweenWidgetColorFromTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics
	{
		struct TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UWidget* TweenTarget;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			int32 SequenceIndex;
			UTweenLinearColor* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_SequenceIndex = { "SequenceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, SequenceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_SequenceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorStandardFactory, nullptr, "BP_JoinTweenWidgetColorTo", nullptr, nullptr, sizeof(TweenLinearColorStandardFactory_eventBP_JoinTweenWidgetColorTo_Parms), Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenLinearColorStandardFactory_NoRegister()
	{
		return UTweenLinearColorStandardFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo, "BP_AppendTweenMaterialVectorFromTo" }, // 1887577285
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo, "BP_AppendTweenMaterialVectorTo" }, // 2242821206
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorFromTo, "BP_AppendTweenWidgetColorFromTo" }, // 1026612665
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_AppendTweenWidgetColorTo, "BP_AppendTweenWidgetColorTo" }, // 2108725802
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo, "BP_CreateTweenMaterialVectorFromTo" }, // 2369168910
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo, "BP_CreateTweenMaterialVectorTo" }, // 119985170
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorFromTo, "BP_CreateTweenWidgetColorFromTo" }, // 2006283523
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_CreateTweenWidgetColorTo, "BP_CreateTweenWidgetColorTo" }, // 4184212174
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo, "BP_JoinTweenMaterialVectorFromTo" }, // 1700499409
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo, "BP_JoinTweenMaterialVectorTo" }, // 4175519135
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorFromTo, "BP_JoinTweenWidgetColorFromTo" }, // 3166268397
		{ &Z_Construct_UFunction_UTweenLinearColorStandardFactory_BP_JoinTweenWidgetColorTo, "BP_JoinTweenWidgetColorTo" }, // 4202740168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TweenLinearColorStandardFactory.h" },
		{ "ModuleRelativePath", "Public/TweenLinearColorStandardFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenLinearColorStandardFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::ClassParams = {
		&UTweenLinearColorStandardFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenLinearColorStandardFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenLinearColorStandardFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenLinearColorStandardFactory, 420488825);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenLinearColorStandardFactory>()
	{
		return UTweenLinearColorStandardFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenLinearColorStandardFactory(Z_Construct_UClass_UTweenLinearColorStandardFactory, &UTweenLinearColorStandardFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenLinearColorStandardFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenLinearColorStandardFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
