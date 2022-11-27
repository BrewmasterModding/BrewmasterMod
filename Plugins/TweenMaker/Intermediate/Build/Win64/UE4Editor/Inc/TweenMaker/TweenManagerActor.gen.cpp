// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenManagerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenManagerActor() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_ATweenManagerActor_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_ATweenManagerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenContainer_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenGenericType();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATweenManagerActor::execBP_CreateTweenContainerStatic)
	{
		P_GET_OBJECT_REF(UTweenContainer,Z_Param_Out_TweenContainer);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_GET_ENUM(ETweenLoopType,Z_Param_LoopType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		ATweenManagerActor::BP_CreateTweenContainerStatic(Z_Param_Out_TweenContainer,Z_Param_NumLoops,ETweenLoopType(Z_Param_LoopType),Z_Param_TimeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATweenManagerActor::execDeleteAllTweens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ATweenManagerActor::DeleteAllTweens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATweenManagerActor::execDeleteAllTweensByObject)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweensType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ATweenManagerActor::DeleteAllTweensByObject(Z_Param_Out_TweenTarget,ETweenGenericType(Z_Param_TweensType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATweenManagerActor::execFindTweenByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TweenName);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweenType);
		P_GET_OBJECT_REF(UBaseTween,Z_Param_Out_TweenFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ATweenManagerActor::FindTweenByName(Z_Param_TweenName,ETweenGenericType(Z_Param_TweenType),Z_Param_Out_TweenFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATweenManagerActor::execIsObjectTweening)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out_TweenTarget);
		P_GET_ENUM(ETweenGenericType,Z_Param_TweensType);
		P_GET_OBJECT_REF(UBaseTween,Z_Param_Out_TweenFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ATweenManagerActor::IsObjectTweening(Z_Param_Out_TweenTarget,ETweenGenericType(Z_Param_TweensType),Z_Param_Out_TweenFound);
		P_NATIVE_END;
	}
	void ATweenManagerActor::StaticRegisterNativesATweenManagerActor()
	{
		UClass* Class = ATweenManagerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CreateTweenContainerStatic", &ATweenManagerActor::execBP_CreateTweenContainerStatic },
			{ "DeleteAllTweens", &ATweenManagerActor::execDeleteAllTweens },
			{ "DeleteAllTweensByObject", &ATweenManagerActor::execDeleteAllTweensByObject },
			{ "FindTweenByName", &ATweenManagerActor::execFindTweenByName },
			{ "IsObjectTweening", &ATweenManagerActor::execIsObjectTweening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics
	{
		struct TweenManagerActor_eventBP_CreateTweenContainerStatic_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_TweenContainer = { "TweenContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventBP_CreateTweenContainerStatic_Parms, TweenContainer), Z_Construct_UClass_UTweenContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventBP_CreateTweenContainerStatic_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_LoopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_LoopType = { "LoopType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventBP_CreateTweenContainerStatic_Parms, LoopType), Z_Construct_UEnum_TweenMaker_ETweenLoopType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventBP_CreateTweenContainerStatic_Parms, TimeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_TweenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_NumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_LoopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_LoopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::NewProp_TimeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATweenManagerActor, nullptr, "BP_CreateTweenContainerStatic", nullptr, nullptr, sizeof(TweenManagerActor_eventBP_CreateTweenContainerStatic_Parms), Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics
	{
		struct TweenManagerActor_eventDeleteAllTweens_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventDeleteAllTweens_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATweenManagerActor, nullptr, "DeleteAllTweens", nullptr, nullptr, sizeof(TweenManagerActor_eventDeleteAllTweens_Parms), Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics
	{
		struct TweenManagerActor_eventDeleteAllTweensByObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventDeleteAllTweensByObject_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_TweensType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_TweensType = { "TweensType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventDeleteAllTweensByObject_Parms, TweensType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenManagerActor_eventDeleteAllTweensByObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenManagerActor_eventDeleteAllTweensByObject_Parms), &Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_TweensType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_TweensType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATweenManagerActor, nullptr, "DeleteAllTweensByObject", nullptr, nullptr, sizeof(TweenManagerActor_eventDeleteAllTweensByObject_Parms), Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics
	{
		struct TweenManagerActor_eventFindTweenByName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenName = { "TweenName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventFindTweenByName_Parms, TweenName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenType = { "TweenType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventFindTweenByName_Parms, TweenType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenFound = { "TweenFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventFindTweenByName_Parms, TweenFound), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenManagerActor_eventFindTweenByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenManagerActor_eventFindTweenByName_Parms), &Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_TweenFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATweenManagerActor, nullptr, "FindTweenByName", nullptr, nullptr, sizeof(TweenManagerActor_eventFindTweenByName_Parms), Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATweenManagerActor_FindTweenByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATweenManagerActor_FindTweenByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics
	{
		struct TweenManagerActor_eventIsObjectTweening_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweenTarget = { "TweenTarget", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventIsObjectTweening_Parms, TweenTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweensType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweensType = { "TweensType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventIsObjectTweening_Parms, TweensType), Z_Construct_UEnum_TweenMaker_ETweenGenericType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweenFound = { "TweenFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenManagerActor_eventIsObjectTweening_Parms, TweenFound), Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TweenManagerActor_eventIsObjectTweening_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenManagerActor_eventIsObjectTweening_Parms), &Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweensType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweensType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_TweenFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenManagerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATweenManagerActor, nullptr, "IsObjectTweening", nullptr, nullptr, sizeof(TweenManagerActor_eventIsObjectTweening_Parms), Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATweenManagerActor_NoRegister()
	{
		return ATweenManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_ATweenManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATweenManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATweenManagerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATweenManagerActor_BP_CreateTweenContainerStatic, "BP_CreateTweenContainerStatic" }, // 93397599
		{ &Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweens, "DeleteAllTweens" }, // 984699182
		{ &Z_Construct_UFunction_ATweenManagerActor_DeleteAllTweensByObject, "DeleteAllTweensByObject" }, // 1148102115
		{ &Z_Construct_UFunction_ATweenManagerActor_FindTweenByName, "FindTweenByName" }, // 3645643190
		{ &Z_Construct_UFunction_ATweenManagerActor_IsObjectTweening, "IsObjectTweening" }, // 1873071910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATweenManagerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenManagerActor.h" },
		{ "ModuleRelativePath", "Public/TweenManagerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATweenManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATweenManagerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATweenManagerActor_Statics::ClassParams = {
		&ATweenManagerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATweenManagerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATweenManagerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATweenManagerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATweenManagerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATweenManagerActor, 2596436711);
	template<> TWEENMAKER_API UClass* StaticClass<ATweenManagerActor>()
	{
		return ATweenManagerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATweenManagerActor(Z_Construct_UClass_ATweenManagerActor, &ATweenManagerActor::StaticClass, TEXT("/Script/TweenMaker"), TEXT("ATweenManagerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATweenManagerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
