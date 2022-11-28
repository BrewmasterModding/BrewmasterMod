using UnrealBuildTool;

public class BrewmasterMainTarget : TargetRules {
	public BrewmasterMainTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"BrewmasterMain",
		});
	}
}
