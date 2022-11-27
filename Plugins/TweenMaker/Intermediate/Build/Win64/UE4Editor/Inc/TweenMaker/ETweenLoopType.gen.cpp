// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenLoopType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenLoopType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenLoopType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenLoopType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenLoopType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenLoopType>()
	{
		return ETweenLoopType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenLoopType(ETweenLoopType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenLoopType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenLoopType_Hash() { return 1148541464U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenLoopType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenLoopType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenLoopType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenLoopType::Yoyo", (int64)ETweenLoopType::Yoyo },
				{ "ETweenLoopType::Restart", (int64)ETweenLoopType::Restart },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ETweenLoopType.h" },
				{ "Restart.Name", "ETweenLoopType::Restart" },
				{ "Yoyo.Name", "ETweenLoopType::Yoyo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenLoopType",
				"ETweenLoopType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
