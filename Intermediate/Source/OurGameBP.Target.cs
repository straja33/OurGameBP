using UnrealBuildTool;

public class OurGameBPTarget : TargetRules
{
	public OurGameBPTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("OurGameBP");
	}
}
