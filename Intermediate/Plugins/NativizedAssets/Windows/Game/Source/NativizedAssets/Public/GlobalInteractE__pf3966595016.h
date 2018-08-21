#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "GlobalInteractE__pf3966595016.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/GlobalInteractE.GlobalInteractE_C", OverrideNativeName="GlobalInteractE_C"))
class UGlobalInteractE_C__pf3966595016 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(Export, meta=(DisplayName="TextBlock_59", OverrideNativeName="TextBlock_59"))
	UTextBlock* bpv__TextBlock_59__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Interact E", Category="Default", OverrideNativeName="InteractE"))
	FText bpv__InteractE__pf;
	UGlobalInteractE_C__pf3966595016(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
