// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenWidgetTargetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenWidgetTargetType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenWidgetTargetType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenWidgetTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenWidgetTargetType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenWidgetTargetType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenWidgetTargetType>()
	{
		return ETweenWidgetTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenWidgetTargetType(ETweenWidgetTargetType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenWidgetTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenWidgetTargetType_Hash() { return 4214820067U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenWidgetTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenWidgetTargetType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenWidgetTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenWidgetTargetType::Image", (int64)ETweenWidgetTargetType::Image },
				{ "ETweenWidgetTargetType::Border", (int64)ETweenWidgetTargetType::Border },
				{ "ETweenWidgetTargetType::Text", (int64)ETweenWidgetTargetType::Text },
				{ "ETweenWidgetTargetType::RichText", (int64)ETweenWidgetTargetType::RichText },
				{ "ETweenWidgetTargetType::BMRichText", (int64)ETweenWidgetTargetType::BMRichText },
				{ "ETweenWidgetTargetType::UUserWidget", (int64)ETweenWidgetTargetType::UUserWidget },
				{ "ETweenWidgetTargetType::UWidget", (int64)ETweenWidgetTargetType::UWidget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BMRichText.Name", "ETweenWidgetTargetType::BMRichText" },
				{ "Border.Name", "ETweenWidgetTargetType::Border" },
				{ "Image.Name", "ETweenWidgetTargetType::Image" },
				{ "ModuleRelativePath", "Public/ETweenWidgetTargetType.h" },
				{ "RichText.Name", "ETweenWidgetTargetType::RichText" },
				{ "Text.Name", "ETweenWidgetTargetType::Text" },
				{ "UUserWidget.Name", "ETweenWidgetTargetType::UUserWidget" },
				{ "UWidget.Name", "ETweenWidgetTargetType::UWidget" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenWidgetTargetType",
				"ETweenWidgetTargetType",
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
