// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestTaskFPS : ModuleRules
{
	public TestTaskFPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
