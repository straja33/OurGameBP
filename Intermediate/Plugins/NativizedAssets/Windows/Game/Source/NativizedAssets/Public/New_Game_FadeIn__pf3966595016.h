#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UWidgetAnimation;
#include "New_Game_FadeIn__pf3966595016.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/New_Game_FadeIn.New_Game_FadeIn_C", OverrideNativeName="New_Game_FadeIn_C"))
class UNew_Game_FadeIn_C__pf3966595016 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="NewAnimation_1"))
	UWidgetAnimation* bpv__NewAnimation_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_40", Category="New_Game_FadeIn", OverrideNativeName="Image_40"))
	UImage* bpv__Image_40__pf;
	UNew_Game_FadeIn_C__pf3966595016(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_New_Game_FadeIn_0"))
	void bpf__ExecuteUbergraph_New_Game_FadeIn__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
