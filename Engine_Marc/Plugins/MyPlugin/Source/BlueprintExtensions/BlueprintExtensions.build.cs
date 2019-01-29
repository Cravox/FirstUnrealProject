using UnrealBuildTool;

public class BlueprintExtensions : ModuleRules
{
    public BlueprintExtensions(ReadOnlyTargetRules Target) : base(Target) {
        PrivateIncludePaths.AddRange(new string[] { "BlueprintExtensions/Private" });

        PublicIncludePaths.AddRange(new string[] { "BlueprintExtensions/Public" });

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}