// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class testimport4_25 : ModuleRules
{
	public testimport4_25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
