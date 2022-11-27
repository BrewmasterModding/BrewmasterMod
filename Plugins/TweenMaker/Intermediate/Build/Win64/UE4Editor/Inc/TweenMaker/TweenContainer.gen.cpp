// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenContainer() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenGenericType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenContainerEnd__DelegateSignature();
	TWEENMAKER_API UScriptStruct* Z_Construct_UScriptStruct_FParallelTween();
// End Cross Module References
	DEFINE_FUNCTION(UTweenContainer::execDeleteTweenContainer)
	{
		P_GET_UBOOL(Z_Param_pCompleteAllTweensPriorToDeletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTweenContainer(Z_Param_pCompleteAllTweensPriorToDeletion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execDeleteTweensInContainerByObject)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweensType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTweensInContainerByObject(Z_Param_Out_TweenTarget,ETweenGenericType(Z_Param_TweensType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execHasEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execIsObjectTweeningInContainer)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweensType);
		P_GET_OBJECT_REF(UBaseTween,Z_Param_Out_TweenFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsObjectTweeningInContainer(Z_Param_Out_TweenTarget,ETweenGenericType(Z_Param_TweensType),Z_Param_Out_TweenFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execPauseTweenContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTweenContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execRestartTweenContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartTweenContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execResumeTweenContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTweenContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execSetLoop)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoop(Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execSetPersistent)
	{
		P_GET_UBOOL(Z_Param_Persistent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersistent(Z_Param_Persistent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execSetTimeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeScale(Z_Param_NewTimeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenContainer::execTogglePauseTweenContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePauseTweenContainer();
		P_NATIVE_END;
	}
	void UTweenContainer::StaticRegisterNativesUTweenContainer()
	{
		UClass* Class = UTweenContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteTweenContainer", &UTweenContainer::execDeleteTweenContainer },
			{ "DeleteTweensInContainerByObject", &UTweenContainer::execDeleteTweensInContainerByObject },
			{ "HasEnded", &UTweenContainer::execHasEnded },
			{ "IsObjectTweeningInContainer", &UTweenContainer::execIsObjectTweeningInContainer },
			{ "IsPaused", &UTweenContainer::execIsPaused },
			{ "PauseTweenContainer", &UTweenContainer::execPauseTweenContainer },
			{ "RestartTweenContainer", &UTweenContainer::execRestartTweenContainer },
			{ "ResumeTweenContainer", &UTweenContainer::execResumeTweenContainer },
			{ "SetLoop", &UTweenContainer::execSetLoop },
			{ "SetPersistent", &UTweenContainer::execSetPersistent },
			{ "SetTimeScale", &UTweenContainer::execSetTimeScale },
			{ "TogglePauseTweenContainer", &UTweenContainer::execTogglePauseTweenContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics
	{
		struct TweenContainer_eventDeleteTweenContainer_Parms
		{
			bool pCompleteAllTweensPriorToDeletion;
		};
		static void NewProp_pCompleteAllTweensPriorToDeletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pCompleteAllTweensPriorToDeletion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::NewProp_pCompleteAllTweensPriorToDeletion_SetBit(void* Obj)
	{
		((TweenContainer_eventDeleteTweenContainer_Parms*)Obj)->pCompleteAllTweensPriorToDeletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::NewProp_pCompleteAllTweensPriorToDeletion = { "pCompleteAllTweensPriorToDeletion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenContainer_eventDeleteTweenContainer_Parms), &Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::NewProp_pCompleteAllTweensPriorToDeletion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::NewProp_pCompleteAllTweensPriorToDeletion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "DeleteTweenContainer", nullptr, nullptr, sizeof(TweenContainer_eventDeleteTweenContainer_Parms), Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics
	{
		struct TweenContainer_eventDeleteTweensInContainerByObject_Parms
		{
			UObject* TweenTarget;
			ETweenGenericType TweensType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TweensType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TweensType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventDeleteTweensInContainerByObject_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::NewProp_TweensType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::NewProp_TweensType = { "TweensType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventDeleteTweensInContainerByObject_Parms, TweensType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::NewProp_TweensType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::NewProp_TweensType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "DeleteTweensInContainerByObject", nullptr, nullptr, sizeof(TweenContainer_eventDeleteTweensInContainerByObject_Parms), Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_HasEnded_Statics
	{
		struct TweenContainer_eventHasEnded_Parms
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
	void Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenContainer_eventHasEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenContainer_eventHasEnded_Parms), &Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "HasEnded", nullptr, nullptr, sizeof(TweenContainer_eventHasEnded_Parms), Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_HasEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_HasEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics
	{
		struct TweenContainer_eventIsObjectTweeningInContainer_Parms
		{
			UObject* TweenTarget;
			ETweenGenericType TweensType;
			UBaseTween* TweenFound;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TweensType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TweensType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenFound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventIsObjectTweeningInContainer_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweensType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweensType = { "TweensType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventIsObjectTweeningInContainer_Parms, TweensType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweenFound = { "TweenFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventIsObjectTweeningInContainer_Parms, TweenFound), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenContainer_eventIsObjectTweeningInContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenContainer_eventIsObjectTweeningInContainer_Parms), &Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweensType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweensType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_TweenFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "IsObjectTweeningInContainer", nullptr, nullptr, sizeof(TweenContainer_eventIsObjectTweeningInContainer_Parms), Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_IsPaused_Statics
	{
		struct TweenContainer_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenContainer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenContainer_eventIsPaused_Parms), &Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "IsPaused", nullptr, nullptr, sizeof(TweenContainer_eventIsPaused_Parms), Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_PauseTweenContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_PauseTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_PauseTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "PauseTweenContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_PauseTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_PauseTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_PauseTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_PauseTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_RestartTweenContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_RestartTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_RestartTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "RestartTweenContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_RestartTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_RestartTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_RestartTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_RestartTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "ResumeTweenContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_SetLoop_Statics
	{
		struct TweenContainer_eventSetLoop_Parms
		{
			int32 NumLoops;
			ETweenLoopType LoopType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventSetLoop_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventSetLoop_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::NewProp_LoopType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "SetLoop", nullptr, nullptr, sizeof(TweenContainer_eventSetLoop_Parms), Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_SetLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_SetLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics
	{
		struct TweenContainer_eventSetPersistent_Parms
		{
			bool Persistent;
		};
		static void NewProp_Persistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Persistent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::NewProp_Persistent_SetBit(void* Obj)
	{
		((TweenContainer_eventSetPersistent_Parms*)Obj)->Persistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenContainer_eventSetPersistent_Parms), &Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::NewProp_Persistent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "SetPersistent", nullptr, nullptr, sizeof(TweenContainer_eventSetPersistent_Parms), Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_SetPersistent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_SetPersistent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics
	{
		struct TweenContainer_eventSetTimeScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::NewProp_NewTimeScale = { "NewTimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenContainer_eventSetTimeScale_Parms, NewTimeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::NewProp_NewTimeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "SetTimeScale", nullptr, nullptr, sizeof(TweenContainer_eventSetTimeScale_Parms), Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_SetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_SetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenContainer, nullptr, "TogglePauseTweenContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenContainer_NoRegister()
	{
		return UTweenContainer::StaticClass();
	}
	struct Z_Construct_UClass_UTweenContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningTweenManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningTweenManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenContainerEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenContainerEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSequences;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenContainer_DeleteTweenContainer, "DeleteTweenContainer" }, // 2588975570
		{ &Z_Construct_UFunction_UTweenContainer_DeleteTweensInContainerByObject, "DeleteTweensInContainerByObject" }, // 3420313535
		{ &Z_Construct_UFunction_UTweenContainer_HasEnded, "HasEnded" }, // 1885093706
		{ &Z_Construct_UFunction_UTweenContainer_IsObjectTweeningInContainer, "IsObjectTweeningInContainer" }, // 1823863179
		{ &Z_Construct_UFunction_UTweenContainer_IsPaused, "IsPaused" }, // 2485428356
		{ &Z_Construct_UFunction_UTweenContainer_PauseTweenContainer, "PauseTweenContainer" }, // 581118374
		{ &Z_Construct_UFunction_UTweenContainer_RestartTweenContainer, "RestartTweenContainer" }, // 2653563690
		{ &Z_Construct_UFunction_UTweenContainer_ResumeTweenContainer, "ResumeTweenContainer" }, // 327156831
		{ &Z_Construct_UFunction_UTweenContainer_SetLoop, "SetLoop" }, // 2109620202
		{ &Z_Construct_UFunction_UTweenContainer_SetPersistent, "SetPersistent" }, // 3272815856
		{ &Z_Construct_UFunction_UTweenContainer_SetTimeScale, "SetTimeScale" }, // 2993888619
		{ &Z_Construct_UFunction_UTweenContainer_TogglePauseTweenContainer, "TogglePauseTweenContainer" }, // 1355363811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TweenContainer.h" },
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenContainer_Statics::NewProp_OwningTweenManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTweenContainer_Statics::NewProp_OwningTweenManager = { "OwningTweenManager", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenContainer, OwningTweenManager), Z_Construct_UClass_UTweenManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTweenContainer_Statics::NewProp_OwningTweenManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenContainer_Statics::NewProp_OwningTweenManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenContainer_Statics::NewProp_OnTweenContainerEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenContainer_Statics::NewProp_OnTweenContainerEnd = { "OnTweenContainerEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenContainer, OnTweenContainerEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenContainerEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenContainer_Statics::NewProp_OnTweenContainerEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenContainer_Statics::NewProp_OnTweenContainerEnd_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences_Inner = { "mSequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParallelTween, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences = { "mSequences", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenContainer, mSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenContainer_Statics::NewProp_OwningTweenManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenContainer_Statics::NewProp_OnTweenContainerEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenContainer_Statics::NewProp_mSequences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenContainer_Statics::ClassParams = {
		&UTweenContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenContainer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenContainer, 3427692030);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenContainer>()
	{
		return UTweenContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenContainer(Z_Construct_UClass_UTweenContainer, &UTweenContainer::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
