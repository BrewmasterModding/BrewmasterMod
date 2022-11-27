// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
class UTweenRotator;
class AActor;
struct FRotator;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenRotatorLatentFactory;
class USceneComponent;
class UTweenManagerComponent;
#ifdef TWEENMAKER_TweenRotatorLatentFactory_generated_h
#error "TweenRotatorLatentFactory.generated.h already included, missing '#pragma once' in TweenRotatorLatentFactory.h"
#endif
#define TWEENMAKER_TweenRotatorLatentFactory_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateActorTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateActorTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateActorTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenRotateSceneComponentTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenRotatorLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenRotatorLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenRotatorLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenRotatorLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTweenRotatorLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenRotatorLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenRotatorLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenRotatorLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenRotatorLatentFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenRotatorLatentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenRotatorLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenRotatorLatentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenRotatorLatentFactory(UTweenRotatorLatentFactory&&); \
	NO_API UTweenRotatorLatentFactory(const UTweenRotatorLatentFactory&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenRotatorLatentFactory(UTweenRotatorLatentFactory&&); \
	NO_API UTweenRotatorLatentFactory(const UTweenRotatorLatentFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenRotatorLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenRotatorLatentFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenRotatorLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_17_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenRotatorLatentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenRotatorLatentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
