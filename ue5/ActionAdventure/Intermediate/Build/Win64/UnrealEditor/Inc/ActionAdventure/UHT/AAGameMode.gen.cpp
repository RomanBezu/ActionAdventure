// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionAdventure/GameCore/AAGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAGameMode() {}
// Cross Module References
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_AAAGameMode();
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_AAAGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionAdventure();
// End Cross Module References
	void AAAGameMode::StaticRegisterNativesAAAGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAGameMode);
	UClass* Z_Construct_UClass_AAAGameMode_NoRegister()
	{
		return AAAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionAdventure,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAAGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameCore/AAGameMode.h" },
		{ "ModuleRelativePath", "GameCore/AAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAGameMode_Statics::ClassParams = {
		&AAAGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAAGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAAGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAAGameMode()
	{
		if (!Z_Registration_Info_UClass_AAAGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAAGameMode.OuterSingleton, Z_Construct_UClass_AAAGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAAGameMode.OuterSingleton;
	}
	template<> ACTIONADVENTURE_API UClass* StaticClass<AAAGameMode>()
	{
		return AAAGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAAGameMode);
	AAAGameMode::~AAAGameMode() {}
	struct Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_GameCore_AAGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_GameCore_AAGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAAGameMode, AAAGameMode::StaticClass, TEXT("AAAGameMode"), &Z_Registration_Info_UClass_AAAGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAGameMode), 4188780565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_GameCore_AAGameMode_h_586393408(TEXT("/Script/ActionAdventure"),
		Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_GameCore_AAGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_GameCore_AAGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
