// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MotionPrompt : ModuleRules
{
    public MotionPrompt(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[]
        {
			// Add public includes if needed
		});

        PrivateIncludePaths.AddRange(new string[]
        {
			// Add private includes if needed
		});

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core"
			// Add other public dependencies if required
		});

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "Json",
            "AnimationCore",
            "HTTP",

			// Editor-only modules
			"UnrealEd",                 // For asset saving, UPackage, animation controllers
			"AssetTools",              // For asset creation
			"AssetRegistry",           // For FAssetRegistryModule::AssetCreated
			"EditorScriptingUtilities",// Optional - for Editor scripting APIs
			"EditorStyle",             // Optional - for styling and UI extensions
			"EditorFramework",         // Optional - for working with animation controllers
			"AnimGraphRuntime",        // Optional - for animation blending preview
		});

        // This is an editor-only module
        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.Add("EditorWidgets");
        }

        DynamicallyLoadedModuleNames.AddRange(new string[]
        {
			// Add dynamic modules if needed
		});
    }
}
