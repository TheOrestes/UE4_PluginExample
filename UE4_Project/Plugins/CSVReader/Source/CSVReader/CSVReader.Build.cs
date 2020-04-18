// Some copyright should be here...

using System.IO;
using UnrealBuildTool;

public class CSVReader : ModuleRules
{
	public CSVReader(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		// Add third party libs path!
		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "DLL_CSVReader.lib"));
		PublicDelayLoadDLLs.Add("DLL_CSVReader.dll");
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/CSVReaderLibrary/Win64/DLL_CSVReader.dll");
	}
}
