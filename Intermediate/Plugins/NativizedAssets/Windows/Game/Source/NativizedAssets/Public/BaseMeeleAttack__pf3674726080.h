#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class AActor;
class AController;
class UDamageType;
class UStaticMeshComponent;
class UBoxComponent;
class USoundBase;
class UMaterial;
class APawn;
#include "BaseMeeleAttack__pf3674726080.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/AI/BasicAIMeele/BaseMeeleAttack.BaseMeeleAttack_C,/Game/Igra/AI/BaseMeeleAttack.BaseMeeleAttack_C", OverrideNativeName="BaseMeeleAttack_C"))
class ABaseMeeleAttack_C__pf3674726080 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Default", ClampMin="0", ClampMax="30", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dead?", Category="Default", OverrideNativeName="IsDead?"))
	bool bpv__IsDeadx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Sounds", Category="Default", OverrideNativeName="DeathSounds"))
	TArray<USoundBase*> bpv__DeathSounds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bullet Location", Category="Default", OverrideNativeName="BulletLocation"))
	FVector bpv__BulletLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bullet Velocity", Category="Default", OverrideNativeName="BulletVelocity"))
	FVector bpv__BulletVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Controller AI", Category="Default", OverrideNativeName="ControllerAI"))
	AController* bpv__ControllerAI__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage", Category="Default", OverrideNativeName="Damage"))
	float bpv__Damage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Attack?", Category="Default", OverrideNativeName="CanAttack?"))
	bool bpv__CanAttackx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Sound", Category="Default", OverrideNativeName="AttackSound"))
	USoundBase* bpv__AttackSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Idle Material", Category="Default", OverrideNativeName="IdleMaterial"))
	UMaterial* bpv__IdleMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Material", Category="Default", OverrideNativeName="AttackMaterial"))
	UMaterial* bpv__AttackMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Material", Category="Default", OverrideNativeName="DeathMaterial"))
	UMaterial* bpv__DeathMaterial__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewController"))
	AController* b0l__K2Node_Event_NewController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	ABaseMeeleAttack_C__pf3674726080(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BaseMeeleAttack__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BaseMeeleAttack__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(meta=(DisplayName="Possessed", ToolTip="Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone).", CppFromBpEvent, OverrideNativeName="ReceivePossessed"))
	virtual void bpf__ReceivePossessed__pf(AController* bpp__NewController__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Damage_Function"))
	virtual void bpf__Damage_Function__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Impulse_Function"))
	virtual void bpf__Impulse_Function__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DamagePlayer_Function"))
	virtual void bpf__DamagePlayer_Function__pf(APawn* bpp__SensedPlayer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetAttackTrue"))
	virtual void bpf__SetAttackTrue__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetMaterial"))
	virtual void bpf__SetMaterial__pf();
public:
};
