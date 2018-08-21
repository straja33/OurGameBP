#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "PauseMenuBP__pf2661533655.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UObject;
class UImage;
class UButton;
class UWidgetAnimation;
class UIgra_C__pf2999911482;
#include "PauseMenu__pf2661533655.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/PauseMenu/PauseMenu.PauseMenu_C", OverrideNativeName="PauseMenu_C"))
class UPauseMenu_C__pf2661533655 : public UUserWidget, public IPauseMenuBP_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="FadeIn-Out"))
	UWidgetAnimation* bpv__FadeInxOut__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_0", Category="PauseMenu", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_129", Category="PauseMenu", OverrideNativeName="Button_129"))
	UButton* bpv__Button_129__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_147", Category="PauseMenu", OverrideNativeName="Button_147"))
	UButton* bpv__Button_147__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_210", Category="PauseMenu", OverrideNativeName="Button_210"))
	UButton* bpv__Button_210__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_23", Category="PauseMenu", OverrideNativeName="Image_23"))
	UImage* bpv__Image_23__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	UObject* bpv__NewVar_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPause_Menu_BP"))
	TScriptInterface<IPauseMenuBP_C> b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsIgra"))
	UIgra_C__pf2999911482* b0l__K2Node_DynamicCast_AsIgra__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess1"))
	bool b0l__K2Node_DynamicCast_bSuccess1__pf;
	UPauseMenu_C__pf2661533655(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PauseMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseMenu__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_147_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_147_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_284_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_284_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_129_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_129_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_210_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_210_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PauseMenu?"))
	virtual void bpf__PauseMenux__pfzy();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadGame"))
	virtual void bpf__LoadGame__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
