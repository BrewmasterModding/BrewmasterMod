// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
class AActor;
class USplineComponent;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenFloat;
class UObject;
class UMaterialInstanceDynamic;
struct FVector;
enum class ETweenReferenceAxis : uint8;
class USceneComponent;
class UWidget;
class UTweenManagerComponent;
#ifdef TWEENMAKER_TweenFloatStandardFactory_generated_h
#error "TweenFloatStandardFactory.generated.h already included, missing '#pragma once' in TweenFloatStandardFactory.h"
#endif
#define TWEENMAKER_TweenFloatStandardFactory_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AppendTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_AppendTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_AppendTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_AppendTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_CreateTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_CreateTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_CreateTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_CreateTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_JoinTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_JoinTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_JoinTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_JoinTweenWidgetOpacityTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AppendTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_AppendTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_AppendTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_AppendTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_CreateTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_CreateTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_CreateTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_CreateTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_JoinTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_JoinTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_JoinTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_JoinTweenWidgetOpacityTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenFloatStandardFactory(); \
	friend struct Z_Construct_UClass_UTweenFloatStandardFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenFloatStandardFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenFloatStandardFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTweenFloatStandardFactory(); \
	friend struct Z_Construct_UClass_UTweenFloatStandardFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenFloatStandardFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenFloatStandardFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenFloatStandardFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenFloatStandardFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenFloatStandardFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenFloatStandardFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenFloatStandardFactory(UTweenFloatStandardFactory&&); \
	NO_API UTweenFloatStandardFactory(const UTweenFloatStandardFactory&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenFloatStandardFactory(UTweenFloatStandardFactory&&); \
	NO_API UTweenFloatStandardFactory(const UTweenFloatStandardFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenFloatStandardFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenFloatStandardFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenFloatStandardFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_19_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenFloatStandardFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatStandardFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
