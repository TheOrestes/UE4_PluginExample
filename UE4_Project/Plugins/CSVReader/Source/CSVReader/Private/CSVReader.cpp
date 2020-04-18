// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CSVReader.h"
#include "Core.h"

#define LOCTEXT_NAMESPACE "FCSVReaderModule"

void FCSVReaderModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// Get the base directory of this plugin
	FString BaseDir = FPaths::ProjectDir();// IPluginManager::Get().FindPlugin("CSVReader")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;

	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Plugins/CSVReader/Binaries/ThirdParty/CSVReaderLibrary/Win64/DLL_CSVReader.dll"));

	CSVLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (CSVLibraryHandle)
	{
		// Call the test function in the third party library that opens a message box
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibrarySuccess", "CSVReader Library loaded!"));
		GetCSVColumnData = (CSVColumnDataFuncPtr)FPlatformProcess::GetDllExport(CSVLibraryHandle, TEXT("GetColumnFloatArray"));
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load example third party library"));
	}
	
}

void FCSVReaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	// Free the dll handle
	FPlatformProcess::FreeDllHandle(CSVLibraryHandle);
	CSVLibraryHandle = nullptr;
}

float* FCSVReaderModule::GetColumnDataFromCSV(const char* fileName, const char* columnName, int& sizeArray)
{
	return GetCSVColumnData(fileName, columnName, sizeArray);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCSVReaderModule, CSVReader)