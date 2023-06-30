// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawler/dcHealt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedcHealt() {}
// Cross Module References
	DUNGEONCRAWLER_API UFunction* Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawler();
	DUNGEONCRAWLER_API UClass* Z_Construct_UClass_UdcHealt_NoRegister();
	DUNGEONCRAWLER_API UClass* Z_Construct_UClass_UdcHealt();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "dcHealt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonCrawler, nullptr, "DieDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UdcHealt::execcure)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__cure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->cure(Z_Param__cure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UdcHealt::execdamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->damage(Z_Param__damage);
		P_NATIVE_END;
	}
	void UdcHealt::StaticRegisterNativesUdcHealt()
	{
		UClass* Class = UdcHealt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "cure", &UdcHealt::execcure },
			{ "damage", &UdcHealt::execdamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UdcHealt_cure_Statics
	{
		struct dcHealt_eventcure_Parms
		{
			float _cure;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UdcHealt_cure_Statics::NewProp__cure = { "_cure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(dcHealt_eventcure_Parms, _cure), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UdcHealt_cure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UdcHealt_cure_Statics::NewProp__cure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UdcHealt_cure_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//gives more live to the actor\n" },
		{ "ModuleRelativePath", "dcHealt.h" },
		{ "ToolTip", "gives more live to the actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UdcHealt_cure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UdcHealt, nullptr, "cure", nullptr, nullptr, sizeof(dcHealt_eventcure_Parms), Z_Construct_UFunction_UdcHealt_cure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UdcHealt_cure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UdcHealt_cure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UdcHealt_cure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UdcHealt_cure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UdcHealt_cure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UdcHealt_damage_Statics
	{
		struct dcHealt_eventdamage_Parms
		{
			float _damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UdcHealt_damage_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(dcHealt_eventdamage_Parms, _damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UdcHealt_damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UdcHealt_damage_Statics::NewProp__damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UdcHealt_damage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//damage this actor, making it have less live\n" },
		{ "ModuleRelativePath", "dcHealt.h" },
		{ "ToolTip", "damage this actor, making it have less live" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UdcHealt_damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UdcHealt, nullptr, "damage", nullptr, nullptr, sizeof(dcHealt_eventdamage_Parms), Z_Construct_UFunction_UdcHealt_damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UdcHealt_damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UdcHealt_damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UdcHealt_damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UdcHealt_damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UdcHealt_damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UdcHealt_NoRegister()
	{
		return UdcHealt::StaticClass();
	}
	struct Z_Construct_UClass_UdcHealt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onDie_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_maxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UdcHealt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawler,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UdcHealt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UdcHealt_cure, "cure" }, // 853212109
		{ &Z_Construct_UFunction_UdcHealt_damage, "damage" }, // 3937262225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdcHealt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "dcHealt.h" },
		{ "ModuleRelativePath", "dcHealt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdcHealt_Statics::NewProp_onDie_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "//what happens when the actor dies\n" },
		{ "ModuleRelativePath", "dcHealt.h" },
		{ "ToolTip", "what happens when the actor dies" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UdcHealt_Statics::NewProp_onDie = { "onDie", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdcHealt, onDie), Z_Construct_UDelegateFunction_DungeonCrawler_DieDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UdcHealt_Statics::NewProp_onDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdcHealt_Statics::NewProp_onDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdcHealt_Statics::NewProp_m_maxHealth_MetaData[] = {
		{ "Category", "dcHealt" },
		{ "Comment", "//the max healt og the actor, also its initial health\n" },
		{ "DisplayName", "max health" },
		{ "ModuleRelativePath", "dcHealt.h" },
		{ "ToolTip", "the max healt og the actor, also its initial health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UdcHealt_Statics::NewProp_m_maxHealth = { "m_maxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdcHealt, m_maxHealth), METADATA_PARAMS(Z_Construct_UClass_UdcHealt_Statics::NewProp_m_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdcHealt_Statics::NewProp_m_maxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UdcHealt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdcHealt_Statics::NewProp_onDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdcHealt_Statics::NewProp_m_maxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UdcHealt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UdcHealt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UdcHealt_Statics::ClassParams = {
		&UdcHealt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UdcHealt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UdcHealt_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UdcHealt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UdcHealt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UdcHealt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UdcHealt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UdcHealt, 3896318117);
	template<> DUNGEONCRAWLER_API UClass* StaticClass<UdcHealt>()
	{
		return UdcHealt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UdcHealt(Z_Construct_UClass_UdcHealt, &UdcHealt::StaticClass, TEXT("/Script/DungeonCrawler"), TEXT("UdcHealt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UdcHealt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
