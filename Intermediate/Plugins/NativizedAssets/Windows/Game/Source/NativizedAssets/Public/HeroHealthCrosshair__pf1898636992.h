#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UProgressBar;
class UImage;
#include "HeroHealthCrosshair__pf1898636992.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/HealthBar/HeroHealthCrosshair.HeroHealthCrosshair_C", OverrideNativeName="HeroHealthCrosshair_C"))
class UHeroHealthCrosshair_C__pf1898636992 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CrossHairImage", Category="HeroHealthCrosshair", OverrideNativeName="CrossHairImage"))
	UImage* bpv__CrossHairImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_79", Category="HeroHealthCrosshair", OverrideNativeName="Image_79"))
	UImage* bpv__Image_79__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_32", Category="HeroHealthCrosshair", OverrideNativeName="ProgressBar_32"))
	UProgressBar* bpv__ProgressBar_32__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Handle", Category="Default", OverrideNativeName="TimerHandle"))
	FTimerHandle bpv__TimerHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Red Color", Category="Default", OverrideNativeName="RedColor"))
	FLinearColor bpv__RedColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Green Color", Category="Default", OverrideNativeName="GreenColor"))
	FLinearColor bpv__GreenColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="White Color", Category="Default", OverrideNativeName="WhiteColor"))
	FLinearColor bpv__WhiteColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UHeroHealthCrosshair_C__pf1898636992(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_HeroHealthCrosshair__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPercent_0"))
	virtual float  bpf__GetPercent_0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CrossHairFunction"))
	virtual void bpf__CrossHairFunction__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
