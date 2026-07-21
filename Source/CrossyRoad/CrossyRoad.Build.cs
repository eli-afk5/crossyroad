// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CrossyRoad : ModuleRules
{
	public CrossyRoad(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CrossyRoad",
			"CrossyRoad/Variant_Platforming",
			"CrossyRoad/Variant_Platforming/Animation",
			"CrossyRoad/Variant_Combat",
			"CrossyRoad/Variant_Combat/AI",
			"CrossyRoad/Variant_Combat/Animation",
			"CrossyRoad/Variant_Combat/Gameplay",
			"CrossyRoad/Variant_Combat/Interfaces",
			"CrossyRoad/Variant_Combat/UI",
			"CrossyRoad/Variant_SideScrolling",
			"CrossyRoad/Variant_SideScrolling/AI",
			"CrossyRoad/Variant_SideScrolling/Gameplay",
			"CrossyRoad/Variant_SideScrolling/Interfaces",
			"CrossyRoad/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
