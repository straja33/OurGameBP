#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "PauseMenuBP__pf2661533655.h"
class AActor;
class AController;
class UDamageType;
class USceneComponent;
class UPhysicsHandleComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UPointLightComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class USkeletalMesh;
class UUserWidget;
class UClass;
class UObjectives_C__pf3966595016;
#include "OurHero__pf3840320923.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Hero/OurHero.OurHero_C", OverrideNativeName="OurHero_C"))
class AOurHero_C__pf3840320923 : public ACharacter, public IPauseMenuBP_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PhysicsHandle"))
	UPhysicsHandleComponent* bpv__PhysicsHandle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Muzzle_Gun"))
	UBoxComponent* bpv__Muzzle_Gun__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bullet_Gun"))
	UBoxComponent* bpv__Bullet_Gun__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Muzzle"))
	UStaticMeshComponent* bpv__Muzzle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PistoljGun"))
	USkeletalMeshComponent* bpv__PistoljGun__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointGun"))
	USkeletalMeshComponent* bpv__PointGun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pistol Acquired", Category="Default", OverrideNativeName="PistolAcquired"))
	bool bpv__PistolAcquired__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pistol Fired?", Category="Default", OverrideNativeName="PistolFired?"))
	bool bpv__PistolFiredx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Skeletal Mesh Equipped", Category="Default", OverrideNativeName="SkeletalMeshEquipped"))
	USkeletalMesh* bpv__SkeletalMeshEquipped__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Default", ClampMin="0", ClampMax="100", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health Regen Timer Handle", Category="Default", OverrideNativeName="HealthRegenTimerHandle"))
	FTimerHandle bpv__HealthRegenTimerHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Health Regeneration Handle", Category="Default", OverrideNativeName="PlayerHealthRegenerationHandle"))
	FTimerHandle bpv__PlayerHealthRegenerationHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health Cross Hair Class", Category="Default", OverrideNativeName="HealthCrossHairClass"))
	UClass* bpv__HealthCrossHairClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health Cross Hair Widget", Category="Default", OverrideNativeName="HealthCrossHairWidget"))
	UUserWidget* bpv__HealthCrossHairWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Uzi Acquired?", Category="Default", OverrideNativeName="UziAcquired?"))
	bool bpv__UziAcquiredx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Heat Float", Category="Default", OverrideNativeName="Weapon_HeatFloat"))
	float bpv__Weapon_HeatFloat__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Heat Calculate", Category="Default", OverrideNativeName="Weapon_HeatCalculate"))
	float bpv__Weapon_HeatCalculate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Uzi Ammo", Category="Default", OverrideNativeName="Uzi_Ammo"))
	float bpv__Uzi_Ammo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Widget", Category="Default", OverrideNativeName="WeaponWidget"))
	UUserWidget* bpv__WeaponWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Uzi Firing?", Category="Default", OverrideNativeName="UziFiring?"))
	bool bpv__UziFiringx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Uzi Timer Handle", Category="Default", OverrideNativeName="UziTimerHandle"))
	FTimerHandle bpv__UziTimerHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grenade Number", Category="Default", OverrideNativeName="Grenade_Number"))
	int32 bpv__Grenade_Number__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grenade Launched", Category="Default", OverrideNativeName="Grenade_Launched"))
	bool bpv__Grenade_Launched__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Holding Object?", Category="Default", OverrideNativeName="HoldingObject?"))
	bool bpv__HoldingObjectx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Object Timer", Category="Default", OverrideNativeName="ObjectTimer"))
	FTimerHandle bpv__ObjectTimer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plasma Gun Acquired?", Category="Default", OverrideNativeName="PlasmaGunAcquired?"))
	bool bpv__PlasmaGunAcquiredx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plasma Gun Ammo", Category="Default", OverrideNativeName="PlasmaGunAmmo"))
	float bpv__PlasmaGunAmmo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Objective Text", Category="Default", OverrideNativeName="ObjectiveText"))
	FText bpv__ObjectiveText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Objective Tab", Category="Default", OverrideNativeName="Objective_Tab"))
	UObjectives_C__pf3966595016* bpv__Objective_Tab__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable1"))
	FKey b0l__Temp_struct_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b0l__K2Node_InputActionEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue3"))
	float b0l__K2Node_InputAxisEvent_AxisValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue1"))
	float b0l__K2Node_InputAxisEvent_AxisValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key7"))
	FKey b0l__K2Node_InputActionEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key8"))
	FKey b0l__K2Node_InputActionEvent_Key8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key9"))
	FKey b0l__K2Node_InputActionEvent_Key9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key10"))
	FKey b0l__K2Node_InputActionEvent_Key10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key1"))
	FKey b0l__K2Node_InputActionEvent_Key1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key11"))
	FKey b0l__K2Node_InputActionEvent_Key11__pf;
	AOurHero_C__pf3840320923(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_OurHero__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_OurHero_13"))
	void bpf__ExecuteUbergraph_OurHero__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_OurHero__pf_18(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Mouse_UP_DOWN_K2Node_InputAxisEvent_3"))
	virtual void bpf__InpAxisEvt_Mouse_UP_DOWN_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Mouse_LEFT_RIGHT_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_Mouse_LEFT_RIGHT_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Move_Left_Right_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_Move_Left_Right_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Move_Forward_Backward_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_Move_Forward_Backward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="PauseMenu?"))
	virtual void bpf__PauseMenux__pfzy();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_TabButton_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_TabButton_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_TabButton_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_TabButton_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_3Button_K2Node_InputActionEvent_14"))
	virtual void bpf__InpActEvt_3Button_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_FButton_K2Node_InputActionEvent_15"))
	virtual void bpf__InpActEvt_FButton_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GButton_K2Node_InputActionEvent_16"))
	virtual void bpf__InpActEvt_GButton_K2Node_InputActionEvent_16__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_CButton_K2Node_InputActionEvent_17"))
	virtual void bpf__InpActEvt_CButton_K2Node_InputActionEvent_17__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_CButton_K2Node_InputActionEvent_18"))
	virtual void bpf__InpActEvt_CButton_K2Node_InputActionEvent_18__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_2Button_K2Node_InputActionEvent_19"))
	virtual void bpf__InpActEvt_2Button_K2Node_InputActionEvent_19__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_1Button_K2Node_InputActionEvent_20"))
	virtual void bpf__InpActEvt_1Button_K2Node_InputActionEvent_20__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_FireButton_K2Node_InputActionEvent_21"))
	virtual void bpf__InpActEvt_FireButton_K2Node_InputActionEvent_21__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_FireButton_K2Node_InputActionEvent_22"))
	virtual void bpf__InpActEvt_FireButton_K2Node_InputActionEvent_22__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_JumpButton_K2Node_InputActionEvent_23"))
	virtual void bpf__InpActEvt_JumpButton_K2Node_InputActionEvent_23__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PistolEquipFunction"))
	virtual void bpf__PistolEquipFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PistolShoot"))
	virtual void bpf__PistolShoot__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PistolCooldown"))
	virtual void bpf__PistolCooldown__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DamageFunction"))
	virtual void bpf__DamageFunction__pf(float bpp__Damage__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerHealthRegeneration"))
	virtual void bpf__PlayerHealthRegeneration__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HealthRegenTimer"))
	virtual void bpf__HealthRegenTimer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UziEquipFunction"))
	virtual void bpf__UziEquipFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MuzzleFunction"))
	virtual void bpf__MuzzleFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UziFireFunction"))
	virtual void bpf__UziFireFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UziCooldown"))
	virtual void bpf__UziCooldown__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UziCoolingDown"))
	virtual void bpf__UziCoolingDown__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PickUpObject"))
	virtual void bpf__PickUpObject__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DropObject"))
	virtual void bpf__DropObject__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetPickedUpObjectLocation"))
	virtual void bpf__SetPickedUpObjectLocation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlasmaGunEquipFunction"))
	virtual void bpf__PlasmaGunEquipFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ObjectiveTabCreate"))
	virtual void bpf__ObjectiveTabCreate__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ObjectiveTabRemove"))
	virtual void bpf__ObjectiveTabRemove__pf();
public:
};
