// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTweenContainer;
class UTweenVector;
class UObject;
struct FVector;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenVectorLatentFactory;
class AActor;
class USceneComponent;
class UTweenManagerComponent;
#ifdef TWEENMAKER_TweenVectorLatentFactory_generated_h
#error "TweenVectorLatentFactory.generated.h already included, missing '#pragma once' in TweenVectorLatentFactory.h"
#endif
#define TWEENMAKER_TweenVectorLatentFactory_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenCustomVector); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveActorBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveActorTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleActorBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleActorTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenCustomVector); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveActorBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveActorTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleActorBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleActorTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenCustomVector); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveActorBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveActorTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleActorBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleActorTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleSceneComponentTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AppendLatentTweenCustomVector); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveActorBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveActorTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleActorBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleActorTo); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execBP_AppendLatentTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenCustomVector); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveActorBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveActorTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleActorBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleActorTo); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execBP_CreateLatentTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenCustomVector); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveActorBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveActorTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleActorBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleActorTo); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execBP_JoinLatentTweenScaleSceneComponentTo);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenVectorLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenVectorLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenVectorLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVectorLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTweenVectorLatentFactory(); \
	friend struct Z_Construct_UClass_UTweenVectorLatentFactory_Statics; \
public: \
	DECLARE_CLASS(UTweenVectorLatentFactory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVectorLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenVectorLatentFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenVectorLatentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVectorLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVectorLatentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVectorLatentFactory(UTweenVectorLatentFactory&&); \
	NO_API UTweenVectorLatentFactory(const UTweenVectorLatentFactory&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVectorLatentFactory(UTweenVectorLatentFactory&&); \
	NO_API UTweenVectorLatentFactory(const UTweenVectorLatentFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVectorLatentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVectorLatentFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenVectorLatentFactory)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_18_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenVectorLatentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVectorLatentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
