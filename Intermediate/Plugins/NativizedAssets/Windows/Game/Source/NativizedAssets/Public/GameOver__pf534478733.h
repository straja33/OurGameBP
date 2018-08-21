#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class UWidgetAnimation;
#include "GameOver__pf534478733.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/DeathMenu/GameOver.GameOver_C", OverrideNativeName="GameOver_C"))
class UGameOver_C__pf534478733 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="1"))
	UWidgetAnimation* bpv__1__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Death"))
	UWidgetAnimation* bpv__Death__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_0", Category="GameOver", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_1", Category="GameOver", OverrideNativeName="Button_1"))
	UButton* bpv__Button_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_2", Category="GameOver", OverrideNativeName="Button_2"))
	UButton* bpv__Button_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_120", Category="GameOver", OverrideNativeName="Image_120"))
	UImage* bpv__Image_120__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_123", Category="GameOver", OverrideNativeName="Image_123"))
	UImage* bpv__Image_123__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_163", Category="GameOver", OverrideNativeName="Image_163"))
	UImage* bpv__Image_163__pf;
	UGameOver_C__pf534478733(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GameOver__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameOver__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_2_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_2_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadGame"))
	virtual void bpf__LoadGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RestartGame"))
	virtual void bpf__RestartGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="QuitGame"))
	virtual void bpf__QuitGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WidgetAnimation"))
	virtual void bpf__WidgetAnimation__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
