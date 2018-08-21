#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Igra__pf2999911482.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Igra.Igra_C", OverrideNativeName="Igra_C"))
class UIgra_C__pf2999911482 : public UGameInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Name", Category="Default", OverrideNativeName="LevelName"))
	FName bpv__LevelName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Was Game Loaded?", Category="Default", OverrideNativeName="WasGameLoaded?"))
	bool bpv__WasGameLoadedx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="New Game?", Category="Default", OverrideNativeName="NewGame?"))
	bool bpv__NewGamex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="From Pause to Main Menu", Category="Default", OverrideNativeName="FromPauseToMainMenu"))
	bool bpv__FromPauseToMainMenu__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Subtitles?", Category="Default", OverrideNativeName="Subtitles?"))
	bool bpv__Subtitlesx__pfzy;
	UIgra_C__pf2999911482(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
