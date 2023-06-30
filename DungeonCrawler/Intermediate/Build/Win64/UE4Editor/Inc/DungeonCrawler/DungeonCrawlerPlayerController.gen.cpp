// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawler/DungeonCrawlerPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCrawlerPlayerController() {}
// Cross Module References
	DUNGEONCRAWLER_API UClass* Z_Construct_UClass_ADungeonCrawlerPlayerController_NoRegister();
	DUNGEONCRAWLER_API UClass* Z_Construct_UClass_ADungeonCrawlerPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawler();
// End Cross Module References
	void ADungeonCrawlerPlayerController::StaticRegisterNativesADungeonCrawlerPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ADungeonCrawlerPlayerController_NoRegister()
	{
		return ADungeonCrawlerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonCrawlerPlayerController.h" },
		{ "ModuleRelativePath", "DungeonCrawlerPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonCrawlerPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::ClassParams = {
		&ADungeonCrawlerPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonCrawlerPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonCrawlerPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonCrawlerPlayerController, 983637144);
	template<> DUNGEONCRAWLER_API UClass* StaticClass<ADungeonCrawlerPlayerController>()
	{
		return ADungeonCrawlerPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonCrawlerPlayerController(Z_Construct_UClass_ADungeonCrawlerPlayerController, &ADungeonCrawlerPlayerController::StaticClass, TEXT("/Script/DungeonCrawler"), TEXT("ADungeonCrawlerPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonCrawlerPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
