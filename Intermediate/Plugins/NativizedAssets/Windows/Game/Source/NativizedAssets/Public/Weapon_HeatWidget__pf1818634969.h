#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class ACharacter;
class UImage;
class UTextBlock;
class UProgressBar;
#include "Weapon_HeatWidget__pf1818634969.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/WeaponHud/Weapon_HeatWidget.Weapon_HeatWidget_C", OverrideNativeName="Weapon_HeatWidget_C"))
class UWeapon_HeatWidget_C__pf1818634969 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HeatBar", Category="Weapon_HeatWidget", OverrideNativeName="HeatBar"))
	UProgressBar* bpv__HeatBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_21", Category="Weapon_HeatWidget", OverrideNativeName="Image_21"))
	UImage* bpv__Image_21__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Pistl_Infinite", Category="Weapon_HeatWidget", OverrideNativeName="Pistl_Infinite"))
	UImage* bpv__Pistl_Infinite__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_103", OverrideNativeName="TextBlock_103"))
	UTextBlock* bpv__TextBlock_103__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Weapon_Image", Category="Weapon_HeatWidget", OverrideNativeName="Weapon_Image"))
	UImage* bpv__Weapon_Image__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Hero", Category="Default", OverrideNativeName="Hero"))
	ACharacter* bpv__Hero__pf;
	UWeapon_HeatWidget_C__pf1818634969(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Weapon_HeatWidget__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Weapon_HeatPercentage"))
	virtual float  bpf__Weapon_HeatPercentage__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pistol_Widget"))
	virtual void bpf__Pistol_Widget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Uzi_Widget"))
	virtual void bpf__Uzi_Widget__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlasmaGun_Widget"))
	virtual void bpf__PlasmaGun_Widget__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
