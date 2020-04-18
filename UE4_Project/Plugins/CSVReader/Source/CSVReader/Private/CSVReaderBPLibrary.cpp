// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CSVReaderBPLibrary.h"
#include "CSVReader.h"


UCSVReaderBPLibrary::UCSVReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	pInstCSVReaderModule = &(FCSVReaderModule::Get());
	if (pInstCSVReaderModule == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Could not create instance of CSVReader"));
	}
}

TArray<float> UCSVReaderBPLibrary::GetColumnData(FString fileName, FString columnName)
{
	TArray<float> vecData;

	if (pInstCSVReaderModule)
	{
		int sizeArray;
		float* valArray = pInstCSVReaderModule->GetColumnDataFromCSV(TCHAR_TO_ANSI(*fileName), TCHAR_TO_ANSI(*columnName), sizeArray);

		for (int i = 0; i < sizeArray; ++i)
		{
			vecData.Push(valArray[i]);
		}
	}
	
	return vecData;
}