// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawler/DungeonCrawlerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCrawlerGameMode() {}
// Cross Module References
	DUNGEONCRAWLER_API UClass* Z_Construct_UClass_ADungeonCrawlerGameMode_NoRegister();
	DUNGEONCRAWLER_API UClass* Z_Construct_UClass_ADungeonCrawlerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawler();
// End Cross Module References
	void ADungeonCrawlerGameMode::StaticRegisterNativesADungeonCrawlerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADungeonCrawlerGameMode_NoRegister()
	{
		return ADungeonCrawlerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonCrawlerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonCrawlerGameMode.h" },
		{ "ModuleRelativePath", "DungeonCrawlerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonCrawlerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::ClassParams = {
		&ADungeonCrawlerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonCrawlerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonCrawlerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonCrawlerGameMode, 2735699535);
	template<> DUNGEONCRAWLER_API UClass* StaticClass<ADungeonCrawlerGameMode>()
	{
		return ADungeonCrawlerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonCrawlerGameMode(Z_Construct_UClass_ADungeonCrawlerGameMode, &ADungeonCrawlerGameMode::StaticClass, TEXT("/Script/DungeonCrawler"), TEXT("ADungeonCrawlerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonCrawlerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
