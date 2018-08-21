#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class AActor;
class AController;
class UDamageType;
class UBoxComponent;
class UStaticMeshComponent;
class UMaterial;
class USoundBase;
class UPrimitiveComponent;
#include "RobotMiniJump__pf2467849032.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/AI/Robot_Mini_Jump/RobotMiniJump.RobotMiniJump_C", OverrideNativeName="RobotMiniJump_C"))
class ARobotMiniJump_C__pf2467849032 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box1"))
	UBoxComponent* bpv__Box1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Default", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dead?", Category="Default", OverrideNativeName="IsDead?"))
	bool bpv__IsDeadx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Attacking?", Category="Default", OverrideNativeName="IsAttacking?"))
	bool bpv__IsAttackingx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Dead", Category="Default", OverrideNativeName="MaterialDead"))
	UMaterial* bpv__MaterialDead__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Idle", Category="Default", OverrideNativeName="MaterialIdle"))
	UMaterial* bpv__MaterialIdle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Attack", Category="Default", OverrideNativeName="MaterialAttack"))
	UMaterial* bpv__MaterialAttack__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="AIController", Category="Default", OverrideNativeName="AIController"))
	AController* bpv__AIController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Sound", Category="Default", OverrideNativeName="AttackSound"))
	USoundBase* bpv__AttackSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Sound", Category="Default", OverrideNativeName="DeathSound"))
	TArray<USoundBase*> bpv__DeathSound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewController"))
	AController* b0l__K2Node_Event_NewController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	USoundBase* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	ARobotMiniJump_C__pf2467849032(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_RobotMiniJump_0"))
	void bpf__ExecuteUbergraph_RobotMiniJump__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RobotMiniJump__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RobotMiniJump__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_RobotMiniJump__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(ToolTip="Called upon landing when falling, to perform actions based on the Hit result.Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).@param Hit Result describing the landing that resulted in a valid landing spot.@see OnMovementModeChanged()", CppFromBpEvent, OverrideNativeName="OnLanded"))
	virtual void bpf__OnLanded__pf(FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="Possessed", ToolTip="Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone).", CppFromBpEvent, OverrideNativeName="ReceivePossessed"))
	virtual void bpf__ReceivePossessed__pf(AController* bpp__NewController__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ImpulseFunction"))
	virtual void bpf__ImpulseFunction__pf(FVector bpp__Location__pf, FVector bpp__Velocity__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AttackFunction"))
	virtual void bpf__AttackFunction__pf();
public:
};
