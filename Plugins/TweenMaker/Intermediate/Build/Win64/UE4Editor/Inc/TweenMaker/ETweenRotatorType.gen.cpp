// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenRotatorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenRotatorType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenRotatorType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenRotatorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenRotatorType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenRotatorType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenRotatorType>()
	{
		return ETweenRotatorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenRotatorType(ETweenRotatorType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenRotatorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenRotatorType_Hash() { return 1231064812U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenRotatorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenRotatorType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenRotatorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenRotatorType::RotateTo", (int64)ETweenRotatorType::RotateTo },
				{ "ETweenRotatorType::RotateBy", (int64)ETweenRotatorType::RotateBy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ETweenRotatorType.h" },
				{ "RotateBy.Name", "ETweenRotatorType::RotateBy" },
				{ "RotateTo.Name", "ETweenRotatorType::RotateTo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenRotatorType",
				"ETweenRotatorType",
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
