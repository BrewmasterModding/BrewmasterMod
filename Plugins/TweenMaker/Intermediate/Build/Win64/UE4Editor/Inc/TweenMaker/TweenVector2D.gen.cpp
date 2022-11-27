// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenVector2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenVector2D() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2D_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenVector2D();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenVector2D::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	void UTweenVector2D::StaticRegisterNativesUTweenVector2D()
	{
		UClass* Class = UTweenVector2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentValue", &UTweenVector2D::execGetCurrentValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics
	{
		struct TweenVector2D_eventGetCurrentValue_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenVector2D_eventGetCurrentValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenVector2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenVector2D, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(TweenVector2D_eventGetCurrentValue_Parms), Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenVector2D_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenVector2D_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenVector2D_NoRegister()
	{
		return UTweenVector2D::StaticClass();
	}
	struct Z_Construct_UClass_UTweenVector2D_Statics
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
	UObject* (*const Z_Construct_UClass_UTweenVector2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTween,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenVector2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenVector2D_GetCurrentValue, "GetCurrentValue" }, // 2315985745
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenVector2D.h" },
		{ "ModuleRelativePath", "Public/TweenVector2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenVector2D.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenVector2D, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenVector2D.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenVector2D, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenVector2D.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenVector2D, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenVector2DChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenVector2D_Statics::NewProp_OnTweenEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenVector2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenVector2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenVector2D_Statics::ClassParams = {
		&UTweenVector2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenVector2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenVector2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenVector2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenVector2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenVector2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenVector2D, 688391724);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenVector2D>()
	{
		return UTweenVector2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenVector2D(Z_Construct_UClass_UTweenVector2D, &UTweenVector2D::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenVector2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenVector2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
