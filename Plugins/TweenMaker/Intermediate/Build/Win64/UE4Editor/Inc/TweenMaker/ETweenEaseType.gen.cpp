// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenEaseType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenEaseType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenEaseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenEaseType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenEaseType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenEaseType>()
	{
		return ETweenEaseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenEaseType(ETweenEaseType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenEaseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenEaseType_Hash() { return 1562866252U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenEaseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenEaseType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenEaseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenEaseType::Linear", (int64)ETweenEaseType::Linear },
				{ "ETweenEaseType::EaseInQuad", (int64)ETweenEaseType::EaseInQuad },
				{ "ETweenEaseType::EaseOutQuad", (int64)ETweenEaseType::EaseOutQuad },
				{ "ETweenEaseType::EaseInOutQuad", (int64)ETweenEaseType::EaseInOutQuad },
				{ "ETweenEaseType::EaseOutInQuad", (int64)ETweenEaseType::EaseOutInQuad },
				{ "ETweenEaseType::EaseInCubic", (int64)ETweenEaseType::EaseInCubic },
				{ "ETweenEaseType::EaseOutCubic", (int64)ETweenEaseType::EaseOutCubic },
				{ "ETweenEaseType::EaseInOutCubic", (int64)ETweenEaseType::EaseInOutCubic },
				{ "ETweenEaseType::EaseOutInCubic", (int64)ETweenEaseType::EaseOutInCubic },
				{ "ETweenEaseType::EaseInQuart", (int64)ETweenEaseType::EaseInQuart },
				{ "ETweenEaseType::EaseOutQuart", (int64)ETweenEaseType::EaseOutQuart },
				{ "ETweenEaseType::EaseInOutQuart", (int64)ETweenEaseType::EaseInOutQuart },
				{ "ETweenEaseType::EaseOutInQuart", (int64)ETweenEaseType::EaseOutInQuart },
				{ "ETweenEaseType::EaseInQuint", (int64)ETweenEaseType::EaseInQuint },
				{ "ETweenEaseType::EaseOutQuint", (int64)ETweenEaseType::EaseOutQuint },
				{ "ETweenEaseType::EaseInOutQuint", (int64)ETweenEaseType::EaseInOutQuint },
				{ "ETweenEaseType::EaseOutInQuint", (int64)ETweenEaseType::EaseOutInQuint },
				{ "ETweenEaseType::EaseInSine", (int64)ETweenEaseType::EaseInSine },
				{ "ETweenEaseType::EaseOutSine", (int64)ETweenEaseType::EaseOutSine },
				{ "ETweenEaseType::EaseInOutSine", (int64)ETweenEaseType::EaseInOutSine },
				{ "ETweenEaseType::EaseOutInSine", (int64)ETweenEaseType::EaseOutInSine },
				{ "ETweenEaseType::EaseInExpo", (int64)ETweenEaseType::EaseInExpo },
				{ "ETweenEaseType::EaseOutExpo", (int64)ETweenEaseType::EaseOutExpo },
				{ "ETweenEaseType::EaseInOutExpo", (int64)ETweenEaseType::EaseInOutExpo },
				{ "ETweenEaseType::EaseOutInExpo", (int64)ETweenEaseType::EaseOutInExpo },
				{ "ETweenEaseType::EaseInCirc", (int64)ETweenEaseType::EaseInCirc },
				{ "ETweenEaseType::EaseOutCirc", (int64)ETweenEaseType::EaseOutCirc },
				{ "ETweenEaseType::EaseInOutCirc", (int64)ETweenEaseType::EaseInOutCirc },
				{ "ETweenEaseType::EaseOutInCirc", (int64)ETweenEaseType::EaseOutInCirc },
				{ "ETweenEaseType::EaseInElastic", (int64)ETweenEaseType::EaseInElastic },
				{ "ETweenEaseType::EaseOutElastic", (int64)ETweenEaseType::EaseOutElastic },
				{ "ETweenEaseType::EaseInOutElastic", (int64)ETweenEaseType::EaseInOutElastic },
				{ "ETweenEaseType::EaseOutInElastic", (int64)ETweenEaseType::EaseOutInElastic },
				{ "ETweenEaseType::EaseInBack", (int64)ETweenEaseType::EaseInBack },
				{ "ETweenEaseType::EaseOutBack", (int64)ETweenEaseType::EaseOutBack },
				{ "ETweenEaseType::EaseInOutBack", (int64)ETweenEaseType::EaseInOutBack },
				{ "ETweenEaseType::EaseOutInBack", (int64)ETweenEaseType::EaseOutInBack },
				{ "ETweenEaseType::EaseInBounce", (int64)ETweenEaseType::EaseInBounce },
				{ "ETweenEaseType::EaseOutBounce", (int64)ETweenEaseType::EaseOutBounce },
				{ "ETweenEaseType::EaseInOutBounce", (int64)ETweenEaseType::EaseInOutBounce },
				{ "ETweenEaseType::EaseOutInBounce", (int64)ETweenEaseType::EaseOutInBounce },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EaseInBack.Name", "ETweenEaseType::EaseInBack" },
				{ "EaseInBounce.Name", "ETweenEaseType::EaseInBounce" },
				{ "EaseInCirc.Name", "ETweenEaseType::EaseInCirc" },
				{ "EaseInCubic.Name", "ETweenEaseType::EaseInCubic" },
				{ "EaseInElastic.Name", "ETweenEaseType::EaseInElastic" },
				{ "EaseInExpo.Name", "ETweenEaseType::EaseInExpo" },
				{ "EaseInOutBack.Name", "ETweenEaseType::EaseInOutBack" },
				{ "EaseInOutBounce.Name", "ETweenEaseType::EaseInOutBounce" },
				{ "EaseInOutCirc.Name", "ETweenEaseType::EaseInOutCirc" },
				{ "EaseInOutCubic.Name", "ETweenEaseType::EaseInOutCubic" },
				{ "EaseInOutElastic.Name", "ETweenEaseType::EaseInOutElastic" },
				{ "EaseInOutExpo.Name", "ETweenEaseType::EaseInOutExpo" },
				{ "EaseInOutQuad.Name", "ETweenEaseType::EaseInOutQuad" },
				{ "EaseInOutQuart.Name", "ETweenEaseType::EaseInOutQuart" },
				{ "EaseInOutQuint.Name", "ETweenEaseType::EaseInOutQuint" },
				{ "EaseInOutSine.Name", "ETweenEaseType::EaseInOutSine" },
				{ "EaseInQuad.Name", "ETweenEaseType::EaseInQuad" },
				{ "EaseInQuart.Name", "ETweenEaseType::EaseInQuart" },
				{ "EaseInQuint.Name", "ETweenEaseType::EaseInQuint" },
				{ "EaseInSine.Name", "ETweenEaseType::EaseInSine" },
				{ "EaseOutBack.Name", "ETweenEaseType::EaseOutBack" },
				{ "EaseOutBounce.Name", "ETweenEaseType::EaseOutBounce" },
				{ "EaseOutCirc.Name", "ETweenEaseType::EaseOutCirc" },
				{ "EaseOutCubic.Name", "ETweenEaseType::EaseOutCubic" },
				{ "EaseOutElastic.Name", "ETweenEaseType::EaseOutElastic" },
				{ "EaseOutExpo.Name", "ETweenEaseType::EaseOutExpo" },
				{ "EaseOutInBack.Name", "ETweenEaseType::EaseOutInBack" },
				{ "EaseOutInBounce.Name", "ETweenEaseType::EaseOutInBounce" },
				{ "EaseOutInCirc.Name", "ETweenEaseType::EaseOutInCirc" },
				{ "EaseOutInCubic.Name", "ETweenEaseType::EaseOutInCubic" },
				{ "EaseOutInElastic.Name", "ETweenEaseType::EaseOutInElastic" },
				{ "EaseOutInExpo.Name", "ETweenEaseType::EaseOutInExpo" },
				{ "EaseOutInQuad.Name", "ETweenEaseType::EaseOutInQuad" },
				{ "EaseOutInQuart.Name", "ETweenEaseType::EaseOutInQuart" },
				{ "EaseOutInQuint.Name", "ETweenEaseType::EaseOutInQuint" },
				{ "EaseOutInSine.Name", "ETweenEaseType::EaseOutInSine" },
				{ "EaseOutQuad.Name", "ETweenEaseType::EaseOutQuad" },
				{ "EaseOutQuart.Name", "ETweenEaseType::EaseOutQuart" },
				{ "EaseOutQuint.Name", "ETweenEaseType::EaseOutQuint" },
				{ "EaseOutSine.Name", "ETweenEaseType::EaseOutSine" },
				{ "Linear.Name", "ETweenEaseType::Linear" },
				{ "ModuleRelativePath", "Public/ETweenEaseType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenEaseType",
				"ETweenEaseType",
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
