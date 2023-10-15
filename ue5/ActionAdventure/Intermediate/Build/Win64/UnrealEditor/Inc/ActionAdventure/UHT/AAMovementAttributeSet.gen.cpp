// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionAdventure/AbilitySystem/Attributes/AAMovementAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAMovementAttributeSet() {}
// Cross Module References
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_UAAMovementttributeSet();
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_UAAMovementttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_ActionAdventure();
// End Cross Module References
	void UAAMovementttributeSet::StaticRegisterNativesUAAMovementttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAAMovementttributeSet);
	UClass* Z_Construct_UClass_UAAMovementttributeSet_NoRegister()
	{
		return UAAMovementttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAAMovementttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAMovementttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionAdventure,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAAMovementttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAMovementttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Attributes/AAMovementAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AAMovementAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAMovementttributeSet_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "AAMovementttributeSet" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AAMovementAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAAMovementttributeSet_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAAMovementttributeSet, MovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAAMovementttributeSet_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_UAAMovementttributeSet_Statics::NewProp_MovementSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAAMovementttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAAMovementttributeSet_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAMovementttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAMovementttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAAMovementttributeSet_Statics::ClassParams = {
		&UAAMovementttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAAMovementttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAAMovementttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAAMovementttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAAMovementttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAAMovementttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAAMovementttributeSet()
	{
		if (!Z_Registration_Info_UClass_UAAMovementttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAAMovementttributeSet.OuterSingleton, Z_Construct_UClass_UAAMovementttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAAMovementttributeSet.OuterSingleton;
	}
	template<> ACTIONADVENTURE_API UClass* StaticClass<UAAMovementttributeSet>()
	{
		return UAAMovementttributeSet::StaticClass();
	}
	UAAMovementttributeSet::UAAMovementttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAMovementttributeSet);
	UAAMovementttributeSet::~UAAMovementttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAMovementAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAMovementAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAAMovementttributeSet, UAAMovementttributeSet::StaticClass, TEXT("UAAMovementttributeSet"), &Z_Registration_Info_UClass_UAAMovementttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAAMovementttributeSet), 786008191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAMovementAttributeSet_h_96764295(TEXT("/Script/ActionAdventure"),
		Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAMovementAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAMovementAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
