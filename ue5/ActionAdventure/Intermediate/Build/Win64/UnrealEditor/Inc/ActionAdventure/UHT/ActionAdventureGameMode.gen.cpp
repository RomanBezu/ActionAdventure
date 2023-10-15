// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionAdventure/ActionAdventureGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionAdventureGameMode() {}
// Cross Module References
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_AActionAdventureGameMode();
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_AActionAdventureGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionAdventure();
// End Cross Module References
	void AActionAdventureGameMode::StaticRegisterNativesAActionAdventureGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionAdventureGameMode);
	UClass* Z_Construct_UClass_AActionAdventureGameMode_NoRegister()
	{
		return AActionAdventureGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AActionAdventureGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionAdventureGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionAdventure,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActionAdventureGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionAdventureGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionAdventureGameMode.h" },
		{ "ModuleRelativePath", "ActionAdventureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionAdventureGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionAdventureGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionAdventureGameMode_Statics::ClassParams = {
		&AActionAdventureGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActionAdventureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AActionAdventureGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AActionAdventureGameMode()
	{
		if (!Z_Registration_Info_UClass_AActionAdventureGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionAdventureGameMode.OuterSingleton, Z_Construct_UClass_AActionAdventureGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionAdventureGameMode.OuterSingleton;
	}
	template<> ACTIONADVENTURE_API UClass* StaticClass<AActionAdventureGameMode>()
	{
		return AActionAdventureGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionAdventureGameMode);
	AActionAdventureGameMode::~AActionAdventureGameMode() {}
	struct Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_ActionAdventureGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_ActionAdventureGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionAdventureGameMode, AActionAdventureGameMode::StaticClass, TEXT("AActionAdventureGameMode"), &Z_Registration_Info_UClass_AActionAdventureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionAdventureGameMode), 1567345110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_ActionAdventureGameMode_h_2395689175(TEXT("/Script/ActionAdventure"),
		Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_ActionAdventureGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_ActionAdventureGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
