// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenGenericType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenGenericType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenGenericType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenGenericType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenGenericType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenGenericType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenGenericType>()
	{
		return ETweenGenericType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenGenericType(ETweenGenericType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenGenericType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenGenericType_Hash() { return 1300262447U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenGenericType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenGenericType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenGenericType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenGenericType::Any", (int64)ETweenGenericType::Any },
				{ "ETweenGenericType::Move", (int64)ETweenGenericType::Move },
				{ "ETweenGenericType::Scale", (int64)ETweenGenericType::Scale },
				{ "ETweenGenericType::Rotate", (int64)ETweenGenericType::Rotate },
				{ "ETweenGenericType::RotateAroundPoint", (int64)ETweenGenericType::RotateAroundPoint },
				{ "ETweenGenericType::FollowSpline", (int64)ETweenGenericType::FollowSpline },
				{ "ETweenGenericType::MaterialVector", (int64)ETweenGenericType::MaterialVector },
				{ "ETweenGenericType::MaterialScalar", (int64)ETweenGenericType::MaterialScalar },
				{ "ETweenGenericType::WidgetAngle", (int64)ETweenGenericType::WidgetAngle },
				{ "ETweenGenericType::WidgetOpacity", (int64)ETweenGenericType::WidgetOpacity },
				{ "ETweenGenericType::WidgetShear", (int64)ETweenGenericType::WidgetShear },
				{ "ETweenGenericType::CustomVector", (int64)ETweenGenericType::CustomVector },
				{ "ETweenGenericType::CustomFloat", (int64)ETweenGenericType::CustomFloat },
				{ "ETweenGenericType::CustomVector2D", (int64)ETweenGenericType::CustomVector2D },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Name", "ETweenGenericType::Any" },
				{ "CustomFloat.Name", "ETweenGenericType::CustomFloat" },
				{ "CustomVector.Name", "ETweenGenericType::CustomVector" },
				{ "CustomVector2D.Name", "ETweenGenericType::CustomVector2D" },
				{ "FollowSpline.Name", "ETweenGenericType::FollowSpline" },
				{ "MaterialScalar.Name", "ETweenGenericType::MaterialScalar" },
				{ "MaterialVector.Name", "ETweenGenericType::MaterialVector" },
				{ "ModuleRelativePath", "Public/ETweenGenericType.h" },
				{ "Move.Name", "ETweenGenericType::Move" },
				{ "Rotate.Name", "ETweenGenericType::Rotate" },
				{ "RotateAroundPoint.Name", "ETweenGenericType::RotateAroundPoint" },
				{ "Scale.Name", "ETweenGenericType::Scale" },
				{ "WidgetAngle.Name", "ETweenGenericType::WidgetAngle" },
				{ "WidgetOpacity.Name", "ETweenGenericType::WidgetOpacity" },
				{ "WidgetShear.Name", "ETweenGenericType::WidgetShear" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenGenericType",
				"ETweenGenericType",
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
