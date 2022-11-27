// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenLinearColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenLinearColor() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColor_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenLinearColor();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenLinearColor::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	void UTweenLinearColor::StaticRegisterNativesUTweenLinearColor()
	{
		UClass* Class = UTweenLinearColor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentValue", &UTweenLinearColor::execGetCurrentValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics
	{
		struct TweenLinearColor_eventGetCurrentValue_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenLinearColor_eventGetCurrentValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenLinearColor, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(TweenLinearColor_eventGetCurrentValue_Parms), Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenLinearColor_NoRegister()
	{
		return UTweenLinearColor::StaticClass();
	}
	struct Z_Construct_UClass_UTweenLinearColor_Statics
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
	UObject* (*const Z_Construct_UClass_UTweenLinearColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTween,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenLinearColor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenLinearColor_GetCurrentValue, "GetCurrentValue" }, // 2337924267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenLinearColor.h" },
		{ "ModuleRelativePath", "Public/TweenLinearColor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenLinearColor, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenLinearColor, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenLinearColor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenLinearColor, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenLinearColorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenLinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenLinearColor_Statics::NewProp_OnTweenEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenLinearColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenLinearColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenLinearColor_Statics::ClassParams = {
		&UTweenLinearColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenLinearColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenLinearColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenLinearColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenLinearColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenLinearColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenLinearColor, 2062466039);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenLinearColor>()
	{
		return UTweenLinearColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenLinearColor(Z_Construct_UClass_UTweenLinearColor, &UTweenLinearColor::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenLinearColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenLinearColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
