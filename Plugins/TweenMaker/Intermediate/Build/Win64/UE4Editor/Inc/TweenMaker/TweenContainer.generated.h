// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ETweenGenericType : uint8;
class UBaseTween;
enum class ETweenLoopType : uint8;
#ifdef TWEENMAKER_TweenContainer_generated_h
#error "TweenContainer.generated.h already included, missing '#pragma once' in TweenContainer.h"
#endif
#define TWEENMAKER_TweenContainer_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteTweenContainer); \
	DECLARE_FUNCTION(execDeleteTweensInContainerByObject); \
	DECLARE_FUNCTION(execHasEnded); \
	DECLARE_FUNCTION(execIsObjectTweeningInContainer); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execPauseTweenContainer); \
	DECLARE_FUNCTION(execRestartTweenContainer); \
	DECLARE_FUNCTION(execResumeTweenContainer); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execSetPersistent); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execTogglePauseTweenContainer);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteTweenContainer); \
	DECLARE_FUNCTION(execDeleteTweensInContainerByObject); \
	DECLARE_FUNCTION(execHasEnded); \
	DECLARE_FUNCTION(execIsObjectTweeningInContainer); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execPauseTweenContainer); \
	DECLARE_FUNCTION(execRestartTweenContainer); \
	DECLARE_FUNCTION(execResumeTweenContainer); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execSetPersistent); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execTogglePauseTweenContainer);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenContainer(); \
	friend struct Z_Construct_UClass_UTweenContainer_Statics; \
public: \
	DECLARE_CLASS(UTweenContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenContainer)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTweenContainer(); \
	friend struct Z_Construct_UClass_UTweenContainer_Statics; \
public: \
	DECLARE_CLASS(UTweenContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenContainer)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenContainer(UTweenContainer&&); \
	NO_API UTweenContainer(const UTweenContainer&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenContainer(UTweenContainer&&); \
	NO_API UTweenContainer(const UTweenContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenContainer)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSequences() { return STRUCT_OFFSET(UTweenContainer, mSequences); }


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_13_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
