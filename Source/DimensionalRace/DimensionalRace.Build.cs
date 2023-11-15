// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DimensionalRace : ModuleRules
{
	public DimensionalRace(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" ,"OnlineSubsystem", "OnlineSubsystemSteam"});
	}
}
