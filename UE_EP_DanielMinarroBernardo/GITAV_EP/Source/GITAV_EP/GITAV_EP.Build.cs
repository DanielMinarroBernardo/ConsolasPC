// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GITAV_EP : ModuleRules
{
	public GITAV_EP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
