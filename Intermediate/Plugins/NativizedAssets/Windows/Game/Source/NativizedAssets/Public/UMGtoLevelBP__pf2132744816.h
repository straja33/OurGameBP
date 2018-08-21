#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "UMGtoLevelBP__pf2132744816.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/UMGtoLevelBP.UMGtoLevelBP_C", OverrideNativeName="UMGtoLevelBP_C"))
class UUMGtoLevelBP_C : public UInterface
{
	GENERATED_BODY()
};
class IUMGtoLevelBP_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="LoadNextStreamingLevel"))
	void bpf__LoadNextStreamingLevel__pf();
public:
};
