// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CSVReader/Public/CSVReaderBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSVReaderBPLibrary() {}
// Cross Module References
	CSVREADER_API UClass* Z_Construct_UClass_UCSVReaderBPLibrary_NoRegister();
	CSVREADER_API UClass* Z_Construct_UClass_UCSVReaderBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CSVReader();
	CSVREADER_API UFunction* Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData();
// End Cross Module References
	void UCSVReaderBPLibrary::StaticRegisterNativesUCSVReaderBPLibrary()
	{
		UClass* Class = UCSVReaderBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColumnData", &UCSVReaderBPLibrary::execGetColumnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics
	{
		struct CSVReaderBPLibrary_eventGetColumnData_Parms
		{
			FString fileName;
			FString columnName;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_columnName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSVReaderBPLibrary_eventGetColumnData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_columnName = { "columnName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSVReaderBPLibrary_eventGetColumnData_Parms, columnName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSVReaderBPLibrary_eventGetColumnData_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_columnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::NewProp_fileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CSVReader" },
		{ "DisplayName", "GetColumnData" },
		{ "Keywords", "Returns column data as float array from CSV" },
		{ "ModuleRelativePath", "Public/CSVReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSVReaderBPLibrary, nullptr, "GetColumnData", nullptr, nullptr, sizeof(CSVReaderBPLibrary_eventGetColumnData_Parms), Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSVReaderBPLibrary_NoRegister()
	{
		return UCSVReaderBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCSVReaderBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSVReaderBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CSVReader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSVReaderBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSVReaderBPLibrary_GetColumnData, "GetColumnData" }, // 3895847858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVReaderBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "CSVReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CSVReaderBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSVReaderBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSVReaderBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSVReaderBPLibrary_Statics::ClassParams = {
		&UCSVReaderBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSVReaderBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCSVReaderBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSVReaderBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSVReaderBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSVReaderBPLibrary, 35582974);
	template<> CSVREADER_API UClass* StaticClass<UCSVReaderBPLibrary>()
	{
		return UCSVReaderBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSVReaderBPLibrary(Z_Construct_UClass_UCSVReaderBPLibrary, &UCSVReaderBPLibrary::StaticClass, TEXT("/Script/CSVReader"), TEXT("UCSVReaderBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSVReaderBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
