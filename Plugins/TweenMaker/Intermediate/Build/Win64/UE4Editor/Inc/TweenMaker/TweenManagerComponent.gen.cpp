// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenManagerComponent() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenGenericType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTweenManagerComponent::execBP_CreateTweenContainer)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_CreateTweenContainer(Z_Param_Out_TweenContainer,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_TimeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenManagerComponent::execDeleteAllTweens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeleteAllTweens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenManagerComponent::execDeleteAllTweensByObject)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweensType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteAllTweensByObject(Z_Param_Out_TweenTarget,ETweenGenericType(Z_Param_TweensType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenManagerComponent::execFindTweenByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TweenName);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweenType);
		P_GET_OBJECT_REF(UBaseTween,Z_Param_Out_TweenFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindTweenByName(Z_Param_TweenName,ETweenGenericType(Z_Param_TweenType),Z_Param_Out_TweenFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenManagerComponent::execIsObjectTweening)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweensType);
		P_GET_OBJECT_REF(UBaseTween,Z_Param_Out_TweenFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsObjectTweening(Z_Param_Out_TweenTarget,ETweenGenericType(Z_Param_TweensType),Z_Param_Out_TweenFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenManagerComponent::execTweenDestroyed)
	{
		P_GET_OBJECT(UBaseTween,Z_Param_pTween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TweenDestroyed(Z_Param_pTween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenManagerComponent::execUpdateNameMap)
	{
		P_GET_OBJECT(UBaseTween,Z_Param_pTween);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_pPreviousName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_pNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNameMap(Z_Param_pTween,Z_Param_Out_pPreviousName,Z_Param_Out_pNewName);
		P_NATIVE_END;
	}
	void UTweenManagerComponent::StaticRegisterNativesUTweenManagerComponent()
	{
		UClass* Class = UTweenManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CreateTweenContainer", &UTweenManagerComponent::execBP_CreateTweenContainer },
			{ "DeleteAllTweens", &UTweenManagerComponent::execDeleteAllTweens },
			{ "DeleteAllTweensByObject", &UTweenManagerComponent::execDeleteAllTweensByObject },
			{ "FindTweenByName", &UTweenManagerComponent::execFindTweenByName },
			{ "IsObjectTweening", &UTweenManagerComponent::execIsObjectTweening },
			{ "TweenDestroyed", &UTweenManagerComponent::execTweenDestroyed },
			{ "UpdateNameMap", &UTweenManagerComponent::execUpdateNameMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics
	{
		struct TweenManagerComponent_eventBP_CreateTweenContainer_Parms
		{
			UTweenContainer* TweenContainer;
			int32 NumLoops;
			ETweenLoopType LoopType;
			float TimeScale;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenContainer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventBP_CreateTweenContainer_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventBP_CreateTweenContainer_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventBP_CreateTweenContainer_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventBP_CreateTweenContainer_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::NewProp_TimeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "BP_CreateTweenContainer", nullptr, nullptr, sizeof(TweenManagerComponent_eventBP_CreateTweenContainer_Parms), Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics
	{
		struct TweenManagerComponent_eventDeleteAllTweens_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventDeleteAllTweens_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "DeleteAllTweens", nullptr, nullptr, sizeof(TweenManagerComponent_eventDeleteAllTweens_Parms), Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics
	{
		struct TweenManagerComponent_eventDeleteAllTweensByObject_Parms
		{
			UObject* TweenTarget;
			ETweenGenericType TweensType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TweensType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TweensType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventDeleteAllTweensByObject_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_TweensType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_TweensType = { "TweensType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventDeleteAllTweensByObject_Parms, TweensType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenManagerComponent_eventDeleteAllTweensByObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenManagerComponent_eventDeleteAllTweensByObject_Parms), &Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_TweensType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_TweensType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "DeleteAllTweensByObject", nullptr, nullptr, sizeof(TweenManagerComponent_eventDeleteAllTweensByObject_Parms), Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics
	{
		struct TweenManagerComponent_eventFindTweenByName_Parms
		{
			FName TweenName;
			ETweenGenericType TweenType;
			UBaseTween* TweenFound;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TweenName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TweenType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TweenType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TweenFound;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenName = { "TweenName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventFindTweenByName_Parms, TweenName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenType = { "TweenType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventFindTweenByName_Parms, TweenType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenFound = { "TweenFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventFindTweenByName_Parms, TweenFound), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenManagerComponent_eventFindTweenByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenManagerComponent_eventFindTweenByName_Parms), &Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_TweenFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "FindTweenByName", nullptr, nullptr, sizeof(TweenManagerComponent_eventFindTweenByName_Parms), Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics
	{
		struct TweenManagerComponent_eventIsObjectTweening_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventIsObjectTweening_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweensType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweensType = { "TweensType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventIsObjectTweening_Parms, TweensType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweenFound = { "TweenFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventIsObjectTweening_Parms, TweenFound), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenManagerComponent_eventIsObjectTweening_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenManagerComponent_eventIsObjectTweening_Parms), &Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweensType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweensType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_TweenFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "IsObjectTweening", nullptr, nullptr, sizeof(TweenManagerComponent_eventIsObjectTweening_Parms), Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics
	{
		struct TweenManagerComponent_eventTweenDestroyed_Parms
		{
			UBaseTween* pTween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pTween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::NewProp_pTween = { "pTween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventTweenDestroyed_Parms, pTween), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::NewProp_pTween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "TweenDestroyed", nullptr, nullptr, sizeof(TweenManagerComponent_eventTweenDestroyed_Parms), Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics
	{
		struct TweenManagerComponent_eventUpdateNameMap_Parms
		{
			UBaseTween* pTween;
			FName pPreviousName;
			FName pNewName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pTween;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pPreviousName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_pPreviousName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pNewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_pNewName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pTween = { "pTween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventUpdateNameMap_Parms, pTween), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pPreviousName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pPreviousName = { "pPreviousName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventUpdateNameMap_Parms, pPreviousName), METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pPreviousName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pPreviousName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pNewName = { "pNewName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerComponent_eventUpdateNameMap_Parms, pNewName), METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pNewName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pTween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pPreviousName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::NewProp_pNewName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenManagerComponent, nullptr, "UpdateNameMap", nullptr, nullptr, sizeof(TweenManagerComponent_eventUpdateNameMap_Parms), Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenManagerComponent_NoRegister()
	{
		return UTweenManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTweenManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTweenContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTweenContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTweenContainers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenManagerComponent_BP_CreateTweenContainer, "BP_CreateTweenContainer" }, // 2158366914
		{ &Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweens, "DeleteAllTweens" }, // 3280592965
		{ &Z_Construct_UFunction_UTweenManagerComponent_DeleteAllTweensByObject, "DeleteAllTweensByObject" }, // 209513496
		{ &Z_Construct_UFunction_UTweenManagerComponent_FindTweenByName, "FindTweenByName" }, // 3322261844
		{ &Z_Construct_UFunction_UTweenManagerComponent_IsObjectTweening, "IsObjectTweening" }, // 781316711
		{ &Z_Construct_UFunction_UTweenManagerComponent_TweenDestroyed, "TweenDestroyed" }, // 3323094908
		{ &Z_Construct_UFunction_UTweenManagerComponent_UpdateNameMap, "UpdateNameMap" }, // 1434814974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TweenManagerComponent.h" },
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers_Inner = { "mTweenContainers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers = { "mTweenContainers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenManagerComponent, mTweenContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenManagerComponent_Statics::NewProp_mTweenContainers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenManagerComponent_Statics::ClassParams = {
		&UTweenManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenManagerComponent, 3669612976);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenManagerComponent>()
	{
		return UTweenManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenManagerComponent(Z_Construct_UClass_UTweenManagerComponent, &UTweenManagerComponent::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
