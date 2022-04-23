// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JujutsuKaisen : ModuleRules
{
	public JujutsuKaisen(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {"JujutsuKaisen"});
		PrivateIncludePaths.AddRange(new string[]{});
		
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"HeadMountedDisplay",
			"AIModule", 
			"GameplayTags",
			"GameplayTasks",
			"Niagara",
			"GameplayAbilities"
		});
		DynamicallyLoadedModuleNames.AddRange(new string[]{});
	}
}
