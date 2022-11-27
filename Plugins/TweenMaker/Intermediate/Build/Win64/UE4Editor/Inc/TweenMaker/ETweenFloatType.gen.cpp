// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenFloatType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenFloatType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenFloatType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenFloatType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenFloatType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenFloatType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenFloatType>()
	{
		return ETweenFloatType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenFloatType(ETweenFloatType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenFloatType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenFloatType_Hash() { return 439269837U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenFloatType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenFloatType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenFloatType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenFloatType::MaterialScalarFromTo", (int64)ETweenFloatType::MaterialScalarFromTo },
				{ "ETweenFloatType::MaterialScalarTo", (int64)ETweenFloatType::MaterialScalarTo },
				{ "ETweenFloatType::RotateAroundPoint", (int64)ETweenFloatType::RotateAroundPoint },
				{ "ETweenFloatType::FollowSpline", (int64)ETweenFloatType::FollowSpline },
				{ "ETweenFloatType::WidgetAngleTo", (int64)ETweenFloatType::WidgetAngleTo },
				{ "ETweenFloatType::WidgetOpacityTo", (int64)ETweenFloatType::WidgetOpacityTo },
				{ "ETweenFloatType::Custom", (int64)ETweenFloatType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Custom.Name", "ETweenFloatType::Custom" },
				{ "FollowSpline.Name", "ETweenFloatType::FollowSpline" },
				{ "MaterialScalarFromTo.Name", "ETweenFloatType::MaterialScalarFromTo" },
				{ "MaterialScalarTo.Name", "ETweenFloatType::MaterialScalarTo" },
				{ "ModuleRelativePath", "Public/ETweenFloatType.h" },
				{ "RotateAroundPoint.Name", "ETweenFloatType::RotateAroundPoint" },
				{ "WidgetAngleTo.Name", "ETweenFloatType::WidgetAngleTo" },
				{ "WidgetOpacityTo.Name", "ETweenFloatType::WidgetOpacityTo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenFloatType",
				"ETweenFloatType",
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
