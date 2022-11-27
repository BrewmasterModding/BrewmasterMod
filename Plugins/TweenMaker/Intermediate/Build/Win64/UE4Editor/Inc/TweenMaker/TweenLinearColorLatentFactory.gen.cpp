// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenLinearColorLatentFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenLinearColorLatentFactory() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColorLatentFactory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_AppendLatentTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_AppendLatentTweenMaterialVectorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_AppendLatentTweenMaterialVectorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_AppendLatentTweenMaterialVectorTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_AppendLatentTweenWidgetColorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_AppendLatentTweenWidgetColorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_AppendLatentTweenWidgetColorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_AppendLatentTweenWidgetColorTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_CreateLatentTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_CreateLatentTweenMaterialVectorFromTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_CreateLatentTweenMaterialVectorTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_CreateLatentTweenMaterialVectorTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_CreateLatentTweenWidgetColorFromTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_CreateLatentTweenWidgetColorFromTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_CreateLatentTweenWidgetColorTo)
	{
		P_GET_OBJECT(UTweenManagerComponent,Z_Param_TweenManager);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_OutTweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_CreateLatentTweenWidgetColorTo(Z_Param_TweenManager,Z_Param_Out_TweenTarget,Z_Param_Out_OutTweenContainer,Z_Param_Out_OutTween,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_JoinLatentTweenMaterialVectorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_JoinLatentTweenMaterialVectorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_JoinLatentTweenMaterialVectorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_JoinLatentTweenMaterialVectorTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_ParameterName,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_JoinLatentTweenWidgetColorFromTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
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
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_JoinLatentTweenWidgetColorFromTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_From,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenLinearColorLatentFactory::execBP_JoinLatentTweenWidgetColorTo)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_OBJECT_REF(UTweenLinearColor,Z_Param_Out_OutTween);
		P_GET_OBJECT_REF(UWidget,Z_Param_Out_TweenTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_ENUM(ETweenEaseType,Z_Param_EaseType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_GET_UBOOL(Z_Param_TweenWhileGameIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTweenLinearColorLatentFactory**)Z_Param__Result=UTweenLinearColorLatentFactory::BP_JoinLatentTweenWidgetColorTo(Z_Param_Out_TweenContainer,Z_Param_Out_OutTween,Z_Param_Out_TweenTarget,Z_Param_To,Z_Param_Duration,ETweenEaseType(Z_Param_EaseType),Z_Param_Delay,Z_Param_TimeScale,Z_Param_TweenWhileGameIsPaused);
		P_NATIVE_END;
	}
	void UTweenLinearColorLatentFactory::StaticRegisterNativesUTweenLinearColorLatentFactory()
	{
		UClass* Class = UTweenLinearColorLatentFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AppendLatentTweenMaterialVectorFromTo", &UTweenLinearColorLatentFactory::execBP_AppendLatentTweenMaterialVectorFromTo },
			{ "BP_AppendLatentTweenMaterialVectorTo", &UTweenLinearColorLatentFactory::execBP_AppendLatentTweenMaterialVectorTo },
			{ "BP_AppendLatentTweenWidgetColorFromTo", &UTweenLinearColorLatentFactory::execBP_AppendLatentTweenWidgetColorFromTo },
			{ "BP_AppendLatentTweenWidgetColorTo", &UTweenLinearColorLatentFactory::execBP_AppendLatentTweenWidgetColorTo },
			{ "BP_CreateLatentTweenMaterialVectorFromTo", &UTweenLinearColorLatentFactory::execBP_CreateLatentTweenMaterialVectorFromTo },
			{ "BP_CreateLatentTweenMaterialVectorTo", &UTweenLinearColorLatentFactory::execBP_CreateLatentTweenMaterialVectorTo },
			{ "BP_CreateLatentTweenWidgetColorFromTo", &UTweenLinearColorLatentFactory::execBP_CreateLatentTweenWidgetColorFromTo },
			{ "BP_CreateLatentTweenWidgetColorTo", &UTweenLinearColorLatentFactory::execBP_CreateLatentTweenWidgetColorTo },
			{ "BP_JoinLatentTweenMaterialVectorFromTo", &UTweenLinearColorLatentFactory::execBP_JoinLatentTweenMaterialVectorFromTo },
			{ "BP_JoinLatentTweenMaterialVectorTo", &UTweenLinearColorLatentFactory::execBP_JoinLatentTweenMaterialVectorTo },
			{ "BP_JoinLatentTweenWidgetColorFromTo", &UTweenLinearColorLatentFactory::execBP_JoinLatentTweenWidgetColorFromTo },
			{ "BP_JoinLatentTweenWidgetColorTo", &UTweenLinearColorLatentFactory::execBP_JoinLatentTweenWidgetColorTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
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
			UTweenLinearColorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_AppendLatentTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
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
			UTweenLinearColorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_AppendLatentTweenMaterialVectorTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
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
			UTweenLinearColorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_AppendLatentTweenWidgetColorFromTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
			UWidget* TweenTarget;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_AppendLatentTweenWidgetColorTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_AppendLatentTweenWidgetColorTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenLinearColor* OutTween;
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
			UTweenLinearColorLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_CreateLatentTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UMaterialInstanceDynamic* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenLinearColor* OutTween;
			FName ParameterName;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_CreateLatentTweenMaterialVectorTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenLinearColor* OutTween;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_CreateLatentTweenWidgetColorFromTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms
		{
			UTweenManagerComponent* TweenManager;
			UWidget* TweenTarget;
			UTweenContainer* OutTweenContainer;
			UTweenLinearColor* OutTween;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenManager = { "TweenManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, TweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_OutTweenContainer = { "OutTweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, OutTweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_OutTweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_CreateLatentTweenWidgetColorTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_CreateLatentTweenWidgetColorTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_JoinLatentTweenMaterialVectorFromTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
			UMaterialInstanceDynamic* TweenTarget;
			FName ParameterName;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, TweenTarget), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_JoinLatentTweenMaterialVectorTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenMaterialVectorTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
			UWidget* TweenTarget;
			FLinearColor From;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTween;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, From), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_JoinLatentTweenWidgetColorFromTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorFromTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics
	{
		struct TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms
		{
			UTweenContainer* TweenContainer;
			UTweenLinearColor* OutTween;
			UWidget* TweenTarget;
			FLinearColor To;
			float Duration;
			ETweenEaseType EaseType;
			float Delay;
			float TimeScale;
			bool TweenWhileGameIsPaused;
			UTweenLinearColorLatentFactory* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_OutTween = { "OutTween", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, OutTween), Z_Construct_UClass_UTweenLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, TweenTarget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, To), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, EaseType), Z_Construct_UEnum_TweenMaker_ETweenEaseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit(void* Obj)
	{
		((TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms*)Obj)->TweenWhileGameIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused = { "TweenWhileGameIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms), &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms, ReturnValue), Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_OutTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_EaseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_EaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_TweenWhileGameIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColorLatentFactory, nullptr, "BP_JoinLatentTweenWidgetColorTo", nullptr, nullptr, sizeof(TweenLinearColorLatentFactory_eventBP_JoinLatentTweenWidgetColorTo_Parms), Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenLinearColorLatentFactory_NoRegister()
	{
		return UTweenLinearColorLatentFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo, "BP_AppendLatentTweenMaterialVectorFromTo" }, // 1060446261
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo, "BP_AppendLatentTweenMaterialVectorTo" }, // 961981981
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorFromTo, "BP_AppendLatentTweenWidgetColorFromTo" }, // 2168544101
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_AppendLatentTweenWidgetColorTo, "BP_AppendLatentTweenWidgetColorTo" }, // 166177128
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo, "BP_CreateLatentTweenMaterialVectorFromTo" }, // 2205088047
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo, "BP_CreateLatentTweenMaterialVectorTo" }, // 1863348171
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorFromTo, "BP_CreateLatentTweenWidgetColorFromTo" }, // 3453979066
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_CreateLatentTweenWidgetColorTo, "BP_CreateLatentTweenWidgetColorTo" }, // 3569878311
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo, "BP_JoinLatentTweenMaterialVectorFromTo" }, // 2536371856
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo, "BP_JoinLatentTweenMaterialVectorTo" }, // 870123056
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorFromTo, "BP_JoinLatentTweenWidgetColorFromTo" }, // 1719616386
		{ &Z_Construct_UFunction_UTweenLinearColorLatentFactory_BP_JoinLatentTweenWidgetColorTo, "BP_JoinLatentTweenWidgetColorTo" }, // 4256830705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenLinearColorLatentFactory.h" },
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenLinearColorLatentFactory, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenLinearColorLatentFactory, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColorLatentFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenLinearColorLatentFactory, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::NewProp_OnTweenEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenLinearColorLatentFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::ClassParams = {
		&UTweenLinearColorLatentFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenLinearColorLatentFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenLinearColorLatentFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenLinearColorLatentFactory, 1782295430);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenLinearColorLatentFactory>()
	{
		return UTweenLinearColorLatentFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenLinearColorLatentFactory(Z_Construct_UClass_UTweenLinearColorLatentFactory, &UTweenLinearColorLatentFactory::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenLinearColorLatentFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenLinearColorLatentFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
