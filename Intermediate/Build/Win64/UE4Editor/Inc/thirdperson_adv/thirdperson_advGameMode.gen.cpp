// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thirdperson_adv/thirdperson_advGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodethirdperson_advGameMode() {}
// Cross Module References
	THIRDPERSON_ADV_API UClass* Z_Construct_UClass_Athirdperson_advGameMode_NoRegister();
	THIRDPERSON_ADV_API UClass* Z_Construct_UClass_Athirdperson_advGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_thirdperson_adv();
// End Cross Module References
	void Athirdperson_advGameMode::StaticRegisterNativesAthirdperson_advGameMode()
	{
	}
	UClass* Z_Construct_UClass_Athirdperson_advGameMode_NoRegister()
	{
		return Athirdperson_advGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Athirdperson_advGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Athirdperson_advGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_thirdperson_adv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Athirdperson_advGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "thirdperson_advGameMode.h" },
		{ "ModuleRelativePath", "thirdperson_advGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Athirdperson_advGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Athirdperson_advGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Athirdperson_advGameMode_Statics::ClassParams = {
		&Athirdperson_advGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Athirdperson_advGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Athirdperson_advGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Athirdperson_advGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Athirdperson_advGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Athirdperson_advGameMode, 3978558529);
	template<> THIRDPERSON_ADV_API UClass* StaticClass<Athirdperson_advGameMode>()
	{
		return Athirdperson_advGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Athirdperson_advGameMode(Z_Construct_UClass_Athirdperson_advGameMode, &Athirdperson_advGameMode::StaticClass, TEXT("/Script/thirdperson_adv"), TEXT("Athirdperson_advGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Athirdperson_advGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
