// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
enum class ETweenLoopType : uint8;
class UObject;
enum class ETweenGenericType : uint8;
class UBaseTween;
#ifdef TWEENMAKER_TweenManagerComponent_generated_h
#error "TweenManagerComponent.generated.h already included, missing '#pragma once' in TweenManagerComponent.h"
#endif
#define TWEENMAKER_TweenManagerComponent_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_CreateTweenContainer); \
	DECLARE_FUNCTION(execDeleteAllTweens); \
	DECLARE_FUNCTION(execDeleteAllTweensByObject); \
	DECLARE_FUNCTION(execFindTweenByName); \
	DECLARE_FUNCTION(execIsObjectTweening); \
	DECLARE_FUNCTION(execTweenDestroyed); \
	DECLARE_FUNCTION(execUpdateNameMap);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_CreateTweenContainer); \
	DECLARE_FUNCTION(execDeleteAllTweens); \
	DECLARE_FUNCTION(execDeleteAllTweensByObject); \
	DECLARE_FUNCTION(execFindTweenByName); \
	DECLARE_FUNCTION(execIsObjectTweening); \
	DECLARE_FUNCTION(execTweenDestroyed); \
	DECLARE_FUNCTION(execUpdateNameMap);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenManagerComponent(); \
	friend struct Z_Construct_UClass_UTweenManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTweenManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenManagerComponent)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTweenManagerComponent(); \
	friend struct Z_Construct_UClass_UTweenManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UTweenManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenManagerComponent)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenManagerComponent(UTweenManagerComponent&&); \
	NO_API UTweenManagerComponent(const UTweenManagerComponent&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenManagerComponent(UTweenManagerComponent&&); \
	NO_API UTweenManagerComponent(const UTweenManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenManagerComponent)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTweenContainers() { return STRUCT_OFFSET(UTweenManagerComponent, mTweenContainers); }


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_12_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
