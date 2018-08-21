#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class USkeletalMesh;
#include "PlayerStructure__pf3180373992.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Igra/SaveGame/PlayerStructure.PlayerStructure", OverrideNativeName="PlayerStructure"))
struct FPlayerStructure__pf3180373992
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="WasGameLoaded?", Tooltip, OverrideNativeName="WasGameLoaded?_26_91DFBB0346C67344028589AD632078FE"))
	bool bpv__WasGameLoadedx_26_91DFBB0346C67344028589AD632078FE__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Weapon_Mesh", Tooltip, OverrideNativeName="Weapon_Mesh_29_2B7813B442E23030FFB9269FD9D91067"))
	USkeletalMesh* bpv__Weapon_Mesh_29_2B7813B442E23030FFB9269FD9D91067__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Health_Player", Tooltip, OverrideNativeName="Health_Player_32_FCFE7D5A43BA1B8A219560BCBBC4EA5D"))
	float bpv__Health_Player_32_FCFE7D5A43BA1B8A219560BCBBC4EA5D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Objective_Text", Tooltip, OverrideNativeName="Objective_Text_35_A5CCF5C34A7CBA80C3B47EBF6ACDF3DF"))
	FText bpv__Objective_Text_35_A5CCF5C34A7CBA80C3B47EBF6ACDF3DF__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HowMuchEnemiesDied", Tooltip, OverrideNativeName="HowMuchEnemiesDied_38_6ACCA2234AF4B7C3BAF692827C55D192"))
	int32 bpv__HowMuchEnemiesDied_38_6ACCA2234AF4B7C3BAF692827C55D192__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LevelName", Tooltip, OverrideNativeName="LevelName_41_4AEFC0EF426F48C0428AD5BF40EA3004"))
	FString bpv__LevelName_41_4AEFC0EF426F48C0428AD5BF40EA3004__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayerTransform", Tooltip, OverrideNativeName="PlayerTransform_44_7DCC9E24421C11191481E78738F0D488"))
	FTransform bpv__PlayerTransform_44_7DCC9E24421C11191481E78738F0D488__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="WhichLevel", Tooltip, OverrideNativeName="WhichLevel_47_935CAA1E46845CE42559CDA39D07D3AE"))
	FName bpv__WhichLevel_47_935CAA1E46845CE42559CDA39D07D3AE__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UziAcquired?", Tooltip, OverrideNativeName="UziAcquired?_50_8BB57C13409468F08B72709ADC6061C4"))
	bool bpv__UziAcquiredx_50_8BB57C13409468F08B72709ADC6061C4__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PistolAcquired?", Tooltip, OverrideNativeName="PistolAcquired?_52_6AC6BED94BE2CFADCEED848B325B9FAA"))
	bool bpv__PistolAcquiredx_52_6AC6BED94BE2CFADCEED848B325B9FAA__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Weapon_Size", Tooltip, OverrideNativeName="Weapon_Size_70_CEE5356A472C084FCF9C38B7221380E9"))
	FVector bpv__Weapon_Size_70_CEE5356A472C084FCF9C38B7221380E9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Uzi_Ammo", Tooltip, OverrideNativeName="Uzi_Ammo_80_90CFCF4A4A1D8A03B680B599CD1CD6CA"))
	float bpv__Uzi_Ammo_80_90CFCF4A4A1D8A03B680B599CD1CD6CA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Uzi_Cooldown?", Tooltip, OverrideNativeName="Uzi_Cooldown?_86_39A7C3BD4561B15EA22D1A98FC0A2E74"))
	bool bpv__Uzi_Cooldownx_86_39A7C3BD4561B15EA22D1A98FC0A2E74__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SwitchSystem_Up", Tooltip, OverrideNativeName="SwitchSystem_Up_89_0F38A1A14AE4A1F2216CCEA42A0C7BCA"))
	int32 bpv__SwitchSystem_Up_89_0F38A1A14AE4A1F2216CCEA42A0C7BCA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SwitchSystem_Down", Tooltip, OverrideNativeName="SwitchSystem_Down_91_38A1C17B465BC465ACF3D6BAA9F474C7"))
	int32 bpv__SwitchSystem_Down_91_38A1C17B465BC465ACF3D6BAA9F474C7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Grenades_Number", Tooltip, OverrideNativeName="Grenades_Number_94_E2A630994C40EBDAB5D511B06EDAA814"))
	int32 bpv__Grenades_Number_94_E2A630994C40EBDAB5D511B06EDAA814__pf;
	FPlayerStructure__pf3180373992();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FPlayerStructure__pf3180373992& __Other) const
	{
		return FPlayerStructure__pf3180373992::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
