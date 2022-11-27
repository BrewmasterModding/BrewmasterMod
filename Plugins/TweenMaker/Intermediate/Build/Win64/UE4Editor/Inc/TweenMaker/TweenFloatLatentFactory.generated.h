// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
class UTweenFloat;
class AActor;
class USplineComponent;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenFloatLatentFactory;
class UObject;
class UMaterialInstanceDynamic;
struct FVector;
enum class ETweenReferenceAxis : uint8;
class USceneComponent;
class UWidget;
class UTweenManagerComponent;
#ifdef TWEENMAKER_TweenFloatLatentFactory_generated_h
#error "TweenFloatLatentFactory.generated.h already included, missing '#pragma once' in TweenFloatLatentFactory.h"
#endif
#define TWEENMAKER_TweenFloatLatentFactory_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenWidgetOpacityTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenActorFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenCustomFloat); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenWidgetOpacityTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenFloatLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenFloatLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenFloatLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenFloatLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTweenFloatLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenFloatLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenFloatLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenFloatLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenFloatLatentFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenFloatLatentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenFloatLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenFloatLatentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenFloatLatentFactory(UTweenFloatLatentFactory&&); \
	NO_API UTweenFloatLatentFactory(const UTweenFloatLatentFactory&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenFloatLatentFactory(UTweenFloatLatentFactory&&); \
	NO_API UTweenFloatLatentFactory(const UTweenFloatLatentFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenFloatLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenFloatLatentFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenFloatLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_22_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenFloatLatentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenFloatLatentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
