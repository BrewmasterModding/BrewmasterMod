// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
class UTweenVector2D;
class UObject;
struct FVector2D;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenVector2DLatentFactory;
class UWidget;
class UTweenManagerComponent;
#ifdef TWEENMAKER_TweenVector2DLatentFactory_generated_h
#error "TweenVector2DLatentFactory.generated.h already included, missing '#pragma once' in TweenVector2DLatentFactory.h"
#endif
#define TWEENMAKER_TweenVector2DLatentFactory_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenShearWidgetTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenShearWidgetTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenVector2DLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenVector2DLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenVector2DLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVector2DLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTweenVector2DLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenVector2DLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenVector2DLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVector2DLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenVector2DLatentFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenVector2DLatentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVector2DLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVector2DLatentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVector2DLatentFactory(UTweenVector2DLatentFactory&&); \
	NO_API UTweenVector2DLatentFactory(const UTweenVector2DLatentFactory&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVector2DLatentFactory(UTweenVector2DLatentFactory&&); \
	NO_API UTweenVector2DLatentFactory(const UTweenVector2DLatentFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVector2DLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVector2DLatentFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenVector2DLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_17_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenVector2DLatentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DLatentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
