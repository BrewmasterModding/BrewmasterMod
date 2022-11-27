// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
class UObject;
struct FVector2D;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenVector2D;
class UWidget;
class UTweenManagerComponent;
#ifdef TWEENMAKER_TweenVector2DStandardFactory_generated_h
#error "TweenVector2DStandardFactory.generated.h already included, missing '#pragma once' in TweenVector2DStandardFactory.h"
#endif
#define TWEENMAKER_TweenVector2DStandardFactory_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AppendTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_AppendTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_CreateTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_JoinTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinTweenShearWidgetTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AppendTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_AppendTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_AppendTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_AppendTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_CreateTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_CreateTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_CreateTweenShearWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinTweenCustomVector2D); \
	DECLARE_FUNCTION(execBP_JoinTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execBP_JoinTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execBP_JoinTweenShearWidgetTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenVector2DStandardFactory(); \
	friend struct Z_Construct_UClass_UTweenVector2DStandardFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenVector2DStandardFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVector2DStandardFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTweenVector2DStandardFactory(); \
	friend struct Z_Construct_UClass_UTweenVector2DStandardFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenVector2DStandardFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVector2DStandardFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenVector2DStandardFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenVector2DStandardFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVector2DStandardFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVector2DStandardFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVector2DStandardFactory(UTweenVector2DStandardFactory&&); \
	NO_API UTweenVector2DStandardFactory(const UTweenVector2DStandardFactory&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVector2DStandardFactory(UTweenVector2DStandardFactory&&); \
	NO_API UTweenVector2DStandardFactory(const UTweenVector2DStandardFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVector2DStandardFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVector2DStandardFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenVector2DStandardFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_14_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenVector2DStandardFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector2DStandardFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
