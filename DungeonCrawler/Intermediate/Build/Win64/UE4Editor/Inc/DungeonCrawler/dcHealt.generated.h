// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONCRAWLER_dcHealt_generated_h
#error "dcHealt.generated.h already included, missing '#pragma once' in dcHealt.h"
#endif
#define DUNGEONCRAWLER_dcHealt_generated_h

#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_9_DELEGATE \
static inline void FDieDelegate_DelegateWrapper(const FMulticastScriptDelegate& DieDelegate) \
{ \
	DieDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_SPARSE_DATA
#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcure); \
	DECLARE_FUNCTION(execdamage);


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcure); \
	DECLARE_FUNCTION(execdamage);


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUdcHealt(); \
	friend struct Z_Construct_UClass_UdcHealt_Statics; \
public: \
	DECLARE_CLASS(UdcHealt, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonCrawler"), NO_API) \
	DECLARE_SERIALIZER(UdcHealt)


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUdcHealt(); \
	friend struct Z_Construct_UClass_UdcHealt_Statics; \
public: \
	DECLARE_CLASS(UdcHealt, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonCrawler"), NO_API) \
	DECLARE_SERIALIZER(UdcHealt)


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UdcHealt(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UdcHealt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UdcHealt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UdcHealt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UdcHealt(UdcHealt&&); \
	NO_API UdcHealt(const UdcHealt&); \
public:


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UdcHealt(UdcHealt&&); \
	NO_API UdcHealt(const UdcHealt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UdcHealt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UdcHealt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UdcHealt)


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_maxHealth() { return STRUCT_OFFSET(UdcHealt, m_maxHealth); }


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_11_PROLOG
#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_PRIVATE_PROPERTY_OFFSET \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_SPARSE_DATA \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_RPC_WRAPPERS \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_INCLASS \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_PRIVATE_PROPERTY_OFFSET \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_SPARSE_DATA \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_INCLASS_NO_PURE_DECLS \
	DungeonCrawler_Source_DungeonCrawler_dcHealt_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCRAWLER_API UClass* StaticClass<class UdcHealt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DungeonCrawler_Source_DungeonCrawler_dcHealt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
