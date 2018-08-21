#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UWidgetAnimation;
#include "FadeIN_FadeOut__pf3966595016.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/FadeIN_FadeOut.FadeIN_FadeOut_C", OverrideNativeName="FadeIN_FadeOut_C"))
class UFadeIN_FadeOut_C__pf3966595016 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="ElevatorFadeIN_Level2"))
	UWidgetAnimation* bpv__ElevatorFadeIN_Level2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_153", Category="FadeIN_FadeOut", OverrideNativeName="Image_153"))
	UImage* bpv__Image_153__pf;
	UFadeIN_FadeOut_C__pf3966595016(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FadeInLevel2"))
	virtual void bpf__FadeInLevel2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RemoveParent"))
	virtual void bpf__RemoveParent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FadeIn"))
	virtual void bpf__FadeIn__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
