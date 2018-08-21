#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "Subtitles__pf3966595016.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Igra/Widgets/Subtitles.Subtitles_C", OverrideNativeName="Subtitles_C"))
class USubtitles_C__pf3966595016 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(Export, meta=(DisplayName="Subtitle_Text", OverrideNativeName="Subtitle_Text"))
	UTextBlock* bpv__Subtitle_Text__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text", Category="Default", OverrideNativeName="Text"))
	FText bpv__Text__pf;
	USubtitles_C__pf3966595016(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ChangeText"))
	virtual void bpf__ChangeText__pf(const FString& bpp__NewParam1__pf__const);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
