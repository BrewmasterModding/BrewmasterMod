// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/ETweenVector2DType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETweenVector2DType() {}
// Cross Module References
	TWEENMAKER_API UEnum* Z_Construct_UEnum_TweenMaker_ETweenVector2DType();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
// End Cross Module References
	static UEnum* ETweenVector2DType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TweenMaker_ETweenVector2DType, Z_Construct_UPackage__Script_TweenMaker(), TEXT("ETweenVector2DType"));
		}
		return Singleton;
	}
	template<> TWEENMAKER_API UEnum* StaticEnum<ETweenVector2DType>()
	{
		return ETweenVector2DType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETweenVector2DType(ETweenVector2DType_StaticEnum, TEXT("/Script/TweenMaker"), TEXT("ETweenVector2DType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TweenMaker_ETweenVector2DType_Hash() { return 967137424U; }
	UEnum* Z_Construct_UEnum_TweenMaker_ETweenVector2DType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TweenMaker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETweenVector2DType"), 0, Get_Z_Construct_UEnum_TweenMaker_ETweenVector2DType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETweenVector2DType::MoveTo", (int64)ETweenVector2DType::MoveTo },
				{ "ETweenVector2DType::MoveBy", (int64)ETweenVector2DType::MoveBy },
				{ "ETweenVector2DType::ScaleTo", (int64)ETweenVector2DType::ScaleTo },
				{ "ETweenVector2DType::ScaleBy", (int64)ETweenVector2DType::ScaleBy },
				{ "ETweenVector2DType::ShearTo", (int64)ETweenVector2DType::ShearTo },
				{ "ETweenVector2DType::Custom", (int64)ETweenVector2DType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Custom.Name", "ETweenVector2DType::Custom" },
				{ "ModuleRelativePath", "Public/ETweenVector2DType.h" },
				{ "MoveBy.Name", "ETweenVector2DType::MoveBy" },
				{ "MoveTo.Name", "ETweenVector2DType::MoveTo" },
				{ "ScaleBy.Name", "ETweenVector2DType::ScaleBy" },
				{ "ScaleTo.Name", "ETweenVector2DType::ScaleTo" },
				{ "ShearTo.Name", "ETweenVector2DType::ShearTo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TweenMaker,
				nullptr,
				"ETweenVector2DType",
				"ETweenVector2DType",
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
