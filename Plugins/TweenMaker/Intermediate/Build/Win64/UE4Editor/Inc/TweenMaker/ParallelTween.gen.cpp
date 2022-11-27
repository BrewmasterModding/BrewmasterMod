// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ParallelTween.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParallelTween() {}
// Cross Module References
	TWEENMAKER_API UScriptStruct* Z_Construct_UScriptStruct_FParallelTween();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween_NoRegister();
// End Cross Module References
class UScriptStruct* FParallelTween::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TWEENMAKER_API uint32 Get_Z_Construct_UScriptStruct_FParallelTween_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParallelTween, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ParallelTween"), sizeof(FParallelTween), Get_Z_Construct_UScriptStruct_FParallelTween_Hash());
	}
	return Singleton;
}
template<> TWEENMAKER_API UScriptStruct* StaticStruct<FParallelTween>()
{
	return FParallelTween::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParallelTween(FParallelTween::StaticStruct, TEXT("/Script/TweenMaker"), TEXT("ParallelTween"), false, nullptr, nullptr);
static struct FScriptStruct_TweenMaker_StaticRegisterNativesFParallelTween
{
	FScriptStruct_TweenMaker_StaticRegisterNativesFParallelTween()
	{
		UScriptStruct::DeferCppStructOps<FParallelTween>(FName(TEXT("ParallelTween")));
	}
} ScriptStruct_TweenMaker_StaticRegisterNativesFParallelTween;
	struct Z_Construct_UScriptStruct_FParallelTween_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParallelTweens_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParallelTweens_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParallelTweens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParallelTween_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ParallelTween.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParallelTween_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParallelTween>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens_Inner = { "ParallelTweens", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseTween_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParallelTween.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens = { "ParallelTweens", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParallelTween, ParallelTweens), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParallelTween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParallelTween_Statics::NewProp_ParallelTweens,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParallelTween_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
		nullptr,
		&NewStructOps,
		"ParallelTween",
		sizeof(FParallelTween),
		alignof(FParallelTween),
		Z_Construct_UScriptStruct_FParallelTween_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParallelTween_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParallelTween_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParallelTween_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParallelTween()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParallelTween_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParallelTween"), sizeof(FParallelTween), Get_Z_Construct_UScriptStruct_FParallelTween_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParallelTween_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParallelTween_Hash() { return 289910650U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
