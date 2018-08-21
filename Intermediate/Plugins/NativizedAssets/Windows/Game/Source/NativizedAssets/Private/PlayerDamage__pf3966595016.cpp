#include "NativizedAssets.h"
#include "PlayerDamage__pf3966595016.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UPlayerDamage_C__pf3966595016::UPlayerDamage_C__pf3966595016(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UPlayerDamage_C__pf3966595016::StaticClass() == GetClass()))
	{
		UPlayerDamage_C__pf3966595016::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__FadeIn__pf = nullptr;
	bpv__Image_72__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPlayerDamage_C__pf3966595016::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPlayerDamage_C__pf3966595016::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeIn_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__2), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(1);
	auto __Local__4 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__4->LayoutData.Offsets.Top = 4.000000f;
	__Local__4->LayoutData.Offsets.Right = 4.548826f;
	__Local__4->LayoutData.Offsets.Bottom = -3.960022f;
	__Local__4->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__4->Parent = __Local__2;
	auto __Local__5 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image_72"));
	__Local__5->Brush.ImageSize = FVector2D(1280.000000, 800.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<UObject* >(&(__Local__5->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__6 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPlayerDamage_C__pf3966595016::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__5->ColorAndOpacity = FLinearColor(0.500000, 0.500000, 0.500000, 0.500000);
	__Local__5->Slot = __Local__4;
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	__Local__0->RootWidget = __Local__2;
	auto __Local__7 = NewObject<UMovieScene>(__Local__1, UMovieScene::StaticClass(), TEXT("FadeIn"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__7), UMovieScene::__PPO__Possessables() )));
	__Local__8 = TArray<FMovieScenePossessable> ();
	__Local__8.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__8.GetData(), 1);
	auto& __Local__9 = __Local__8[0];
	auto& __Local__10 = (*(AccessPrivateProperty<FGuid >(&(__Local__9), FMovieScenePossessable::__PPO__Guid() )));
	__Local__10 = FGuid(0x63784963, 0x4F677C22, 0x08B92987, 0xA1FBF669);
	auto& __Local__11 = (*(AccessPrivateProperty<FString >(&(__Local__9), FMovieScenePossessable::__PPO__Name() )));
	__Local__11 = FString(TEXT("Image_72"));
	auto& __Local__12 = (*(AccessPrivateProperty<UClass* >(&(__Local__9), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__12 = UImage::StaticClass();
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__7), UMovieScene::__PPO__ObjectBindings() )));
	__Local__13 = TArray<FMovieSceneBinding> ();
	__Local__13.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__13.GetData(), 1);
	auto& __Local__14 = __Local__13[0];
	auto& __Local__15 = (*(AccessPrivateProperty<FGuid >(&(__Local__14), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__15 = FGuid(0x63784963, 0x4F677C22, 0x08B92987, 0xA1FBF669);
	auto& __Local__16 = (*(AccessPrivateProperty<FString >(&(__Local__14), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__16 = FString(TEXT("Image_72"));
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__14), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__17 = TArray<UMovieSceneTrack*> ();
	__Local__17.Reserve(1);
	auto __Local__18 = NewObject<UMovieSceneColorTrack>(__Local__7, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_1"));
	auto& __Local__19 = (*(AccessPrivateProperty<FName >((__Local__18), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__19 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__20 = (*(AccessPrivateProperty<FString >((__Local__18), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__20 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__18), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__21 = TArray<UMovieSceneSection*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<UMovieSceneColorSection>(__Local__18, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__23 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__22), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__23), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__24 = TArray<FFrameNumber> ();
	__Local__24.Reserve(2);
	__Local__24.Add(FFrameNumber{});
	__Local__24.Add(FFrameNumber{});
	static TWeakObjectPtr<UProperty> __Local__26{};
	const UProperty* __Local__25 = __Local__26.Get();
	if (nullptr == __Local__25)
	{
		__Local__25 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumber"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__25);
		__Local__26 = __Local__25;
	}
	auto& __Local__27 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__24[1]), 0)));
	__Local__27 = 6000;
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__23), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__28 = TArray<FMovieSceneFloatValue> ();
	__Local__28.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__28.GetData(), 2);
	auto& __Local__29 = __Local__28[0];
	auto& __Local__30 = __Local__28[1];
	__Local__30.Value = 0.500000f;
	auto& __Local__31 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__22), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__31), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__32 = TArray<FFrameNumber> ();
	__Local__32.Reserve(2);
	__Local__32.Add(FFrameNumber{});
	__Local__32.Add(FFrameNumber{});
	auto& __Local__33 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__32[1]), 0)));
	__Local__33 = 6000;
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__31), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__34 = TArray<FMovieSceneFloatValue> ();
	__Local__34.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__34.GetData(), 2);
	auto& __Local__35 = __Local__34[0];
	auto& __Local__36 = __Local__34[1];
	__Local__36.Value = 0.500000f;
	auto& __Local__37 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__22), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__37), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__38 = TArray<FFrameNumber> ();
	__Local__38.Reserve(2);
	__Local__38.Add(FFrameNumber{});
	__Local__38.Add(FFrameNumber{});
	auto& __Local__39 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__38[1]), 0)));
	__Local__39 = 6000;
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__37), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__40 = TArray<FMovieSceneFloatValue> ();
	__Local__40.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__40.GetData(), 2);
	auto& __Local__41 = __Local__40[0];
	auto& __Local__42 = __Local__40[1];
	__Local__42.Value = 0.500000f;
	auto& __Local__43 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__22), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__43), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__44 = TArray<FFrameNumber> ();
	__Local__44.Reserve(2);
	__Local__44.Add(FFrameNumber{});
	__Local__44.Add(FFrameNumber{});
	auto& __Local__45 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__44[1]), 0)));
	__Local__45 = 6000;
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__43), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__46 = TArray<FMovieSceneFloatValue> ();
	__Local__46.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__46.GetData(), 2);
	auto& __Local__47 = __Local__46[0];
	auto& __Local__48 = __Local__46[1];
	__Local__48.Value = 0.500000f;
	auto __Local__49 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__22, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__49->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__22->Easing.EaseIn = __Local__49;
	auto __Local__50 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__22, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__50->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__22->Easing.EaseOut = __Local__50;
	__Local__22->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(6001)));
	auto& __Local__51 = (*(AccessPrivateProperty<FGuid >((__Local__22), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__51 = FGuid(0x2CE00BFB, 0x4C23C4AA, 0x74CF0283, 0x61EFC7D5);
	__Local__21.Add(__Local__22);
	auto& __Local__52 = (*(AccessPrivateProperty<FGuid >((__Local__18), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__52 = FGuid(0x78DD67ED, 0x4CCCEC81, 0x64EF70A0, 0x116E721D);
	__Local__17.Add(__Local__18);
	auto& __Local__53 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__7), UMovieScene::__PPO__PlaybackRange() )));
	__Local__53 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(6001)));
	auto& __Local__54 = (*(AccessPrivateProperty<FFrameRate >((__Local__7), UMovieScene::__PPO__DisplayRate() )));
	static TWeakObjectPtr<UProperty> __Local__56{};
	const UProperty* __Local__55 = __Local__56.Get();
	if (nullptr == __Local__55)
	{
		__Local__55 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__55);
		__Local__56 = __Local__55;
	}
	auto& __Local__57 = (*(__Local__55->ContainerPtrToValuePtr<int32 >(&(__Local__54), 0)));
	__Local__57 = 20;
	auto& __Local__58 = (*(AccessPrivateProperty<FGuid >((__Local__7), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__58 = FGuid(0xF680F7B9, 0x4C601A3E, 0x8D97E1BE, 0xD2B7DF3A);
	__Local__1->MovieScene = __Local__7;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__59 = __Local__1->AnimationBindings[0];
	__Local__59.WidgetName = FName(TEXT("Image_72"));
	__Local__59.AnimationGuid = FGuid(0x63784963, 0x4F677C22, 0x08B92987, 0xA1FBF669);
	auto& __Local__60 = (*(AccessPrivateProperty<bool >((__Local__1), UWidgetAnimation::__PPO__bLegacyFinishOnStop() )));
	__Local__60 = false;
	auto& __Local__61 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__1->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__61 = {};
	__Local__61.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__64{};
	const UProperty* __Local__63 = __Local__64.Get();
	if (nullptr == __Local__63)
	{
		__Local__63 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__63);
		__Local__64 = __Local__63;
	}
	FScriptMapHelper __Local__62(CastChecked<UMapProperty>(__Local__63), &__Local__61);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__65 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__62.GetPairPtr(__Local__62.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__66 = (*(AccessPrivateProperty<uint32 >(&(__Local__65.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__66 = 0;
	auto& __Local__67 = (*(AccessPrivateProperty<FGuid >(&(__Local__65.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__67 = FGuid(0x63784963, 0x4F677C22, 0x08B92987, 0xA1FBF669);
	auto& __Local__68 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__65.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__68), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__69 = TArray<int32> ();
	__Local__69.Reserve(1);
	__Local__69.Add(0);
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__68), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__70 = TArray<FMovieSceneSegment> ();
	__Local__70.Reserve(1);
	__Local__70.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(6001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__71 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__65.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__71 = __Local__18;
	auto& __Local__72 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__65.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__72 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__72.Reserve(1);
	__Local__72.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__73 = TArray<FFrameNumber> ();
	__Local__73.Reserve(2);
	__Local__73.Add(FFrameNumber{});
	__Local__73.Add(FFrameNumber{});
	auto& __Local__74 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__73[1]), 0)));
	__Local__74 = 6000;
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__75 = TArray<FMovieSceneFloatValue> ();
	__Local__75.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__75.GetData(), 2);
	auto& __Local__76 = __Local__75[0];
	auto& __Local__77 = __Local__75[1];
	__Local__77.Value = 0.500000f;
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__78 = TArray<FFrameNumber> ();
	__Local__78.Reserve(2);
	__Local__78.Add(FFrameNumber{});
	__Local__78.Add(FFrameNumber{});
	auto& __Local__79 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__78[1]), 0)));
	__Local__79 = 6000;
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__80 = TArray<FMovieSceneFloatValue> ();
	__Local__80.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__80.GetData(), 2);
	auto& __Local__81 = __Local__80[0];
	auto& __Local__82 = __Local__80[1];
	__Local__82.Value = 0.500000f;
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__83 = TArray<FFrameNumber> ();
	__Local__83.Reserve(2);
	__Local__83.Add(FFrameNumber{});
	__Local__83.Add(FFrameNumber{});
	auto& __Local__84 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__83[1]), 0)));
	__Local__84 = 6000;
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__85 = TArray<FMovieSceneFloatValue> ();
	__Local__85.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__85.GetData(), 2);
	auto& __Local__86 = __Local__85[0];
	auto& __Local__87 = __Local__85[1];
	__Local__87.Value = 0.500000f;
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__88 = TArray<FFrameNumber> ();
	__Local__88.Reserve(2);
	__Local__88.Add(FFrameNumber{});
	__Local__88.Add(FFrameNumber{});
	auto& __Local__89 = (*(__Local__25->ContainerPtrToValuePtr<int32 >(&(__Local__88[1]), 0)));
	__Local__89 = 6000;
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__90 = TArray<FMovieSceneFloatValue> ();
	__Local__90.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__90.GetData(), 2);
	auto& __Local__91 = __Local__90[0];
	auto& __Local__92 = __Local__90[1];
	__Local__92.Value = 0.500000f;
	((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__93 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__93.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__93.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__94 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__72[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__94 = __Local__22;
	static TWeakObjectPtr<UProperty> __Local__96{};
	const UProperty* __Local__95 = __Local__96.Get();
	if (nullptr == __Local__95)
	{
		__Local__95 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPreroll")));
		check(__Local__95);
		__Local__96 = __Local__95;
	}
	(((UBoolProperty*)__Local__95)->SetPropertyValue_InContainer(&(__Local__65.Value), false, 0));
	static TWeakObjectPtr<UProperty> __Local__98{};
	const UProperty* __Local__97 = __Local__98.Get();
	if (nullptr == __Local__97)
	{
		__Local__97 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPostroll")));
		check(__Local__97);
		__Local__98 = __Local__97;
	}
	(((UBoolProperty*)__Local__97)->SetPropertyValue_InContainer(&(__Local__65.Value), false, 0));
	__Local__62.Rehash();
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<FMovieSceneFrameRange> >(&(__Local__1->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__99 = TArray<FMovieSceneFrameRange> ();
	__Local__99.Reserve(3);
	__Local__99.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Open(), TRangeBound<FFrameNumber>::Exclusive(0))));
	__Local__99.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(6001))));
	__Local__99.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(6001), TRangeBound<FFrameNumber>::Open())));
	auto& __Local__100 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__1->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__100 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__100.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__100.GetData(), 3);
	auto& __Local__101 = __Local__100[0];
	auto& __Local__102 = __Local__100[1];
	__Local__102.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__102.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__102.LUTIndices.GetData(), 1);
	auto& __Local__103 = __Local__102.LUTIndices[0];
	__Local__103.NumEvalPtrs = 1;
	__Local__102.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__102.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__102.SegmentPtrLUT.GetData(), 1);
	auto& __Local__104 = __Local__102.SegmentPtrLUT[0];
	auto& __Local__105 = (*(AccessPrivateProperty<int32 >(&(__Local__104.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__105 = 0;
	auto& __Local__106 = (*(AccessPrivateProperty<uint32 >(&(__Local__104.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__106 = 0;
	auto& __Local__107 = (*(AccessPrivateProperty<uint32 >(&(__Local__104.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__107 = 0;
	auto& __Local__108 = __Local__100[2];
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__1->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__109 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__109.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__109.GetData(), 3);
	auto& __Local__110 = __Local__109[0];
	__Local__110.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__110.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__110.ActiveSequences.GetData(), 1);
	auto& __Local__111 = __Local__110.ActiveSequences[0];
	auto& __Local__112 = (*(AccessPrivateProperty<uint32 >(&(__Local__111), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__112 = 0;
	auto& __Local__113 = __Local__109[1];
	__Local__113.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__113.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__113.ActiveSequences.GetData(), 1);
	auto& __Local__114 = __Local__113.ActiveSequences[0];
	auto& __Local__115 = (*(AccessPrivateProperty<uint32 >(&(__Local__114), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__115 = 0;
	__Local__113.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__113.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__113.ActiveEntities.GetData(), 2);
	auto& __Local__116 = __Local__113.ActiveEntities[0];
	auto& __Local__117 = (*(AccessPrivateProperty<uint32 >(&(__Local__116.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__117 = 0;
	auto& __Local__118 = (*(AccessPrivateProperty<uint32 >(&(__Local__116.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__118 = 0;
	__Local__116.Key.SectionIndex = 0;
	__Local__116.EvaluationIndex = 1;
	auto& __Local__119 = __Local__113.ActiveEntities[1];
	auto& __Local__120 = (*(AccessPrivateProperty<uint32 >(&(__Local__119.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__120 = 0;
	auto& __Local__121 = (*(AccessPrivateProperty<uint32 >(&(__Local__119.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__121 = 0;
	auto& __Local__122 = __Local__109[2];
	__Local__122.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__122.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__122.ActiveSequences.GetData(), 1);
	auto& __Local__123 = __Local__122.ActiveSequences[0];
	auto& __Local__124 = (*(AccessPrivateProperty<uint32 >(&(__Local__123), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__124 = 0;
	__Local__1->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0xC1C65384, 0x481846DE, 0x2F1DFAB9, 0x79C283ED);
	auto& __Local__125 = (*(AccessPrivateProperty<uint32 >(&(__Local__1->PrecompiledEvaluationTemplate.TemplateSerialNumber), FMovieSceneEvaluationTemplateSerialNumber::__PPO__Value() )));
	__Local__125 = 1;
	auto& __Local__126 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__1->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__127 = (*(AccessPrivateProperty<uint32 >(&(__Local__126.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__127 = 0;
	__Local__126.TrackSignatureToTrackIdentifier = {};
	__Local__126.TrackSignatureToTrackIdentifier.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__130{};
	const UProperty* __Local__129 = __Local__130.Get();
	if (nullptr == __Local__129)
	{
		__Local__129 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__129);
		__Local__130 = __Local__129;
	}
	FScriptMapHelper __Local__128(CastChecked<UMapProperty>(__Local__129), &__Local__126.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__131 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__128.GetPairPtr(__Local__128.AddDefaultValue_Invalid_NeedsRehash());
	__Local__131.Key.A = 2027775981;
	__Local__131.Key.B = 1288498305;
	__Local__131.Key.C = 1693413536;
	__Local__131.Key.D = 292450845;
	auto& __Local__132 = (*(AccessPrivateProperty<uint32 >(&(__Local__131.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__132 = 0;
	__Local__128.Rehash();
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__133 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__133 = FGuid(0xC1C65384, 0x481846DE, 0x2F1DFAB9, 0x79C283ED);
}
PRAGMA_ENABLE_OPTIMIZATION
void UPlayerDamage_C__pf3966595016::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__134;
	SlotNames.Append(__Local__134);
}
void UPlayerDamage_C__pf3966595016::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__135;
	__Local__135.Reserve(1);
	__Local__135.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UPlayerDamage_C__pf3966595016::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__136;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPlayerDamage_C__pf3966595016::StaticClass())->MiscConvertedSubobjects[0]), __Local__135, __Local__136);
}
void UPlayerDamage_C__pf3966595016::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPlayerDamage_C__pf3966595016::bpf__ExecuteUbergraph_PlayerDamage__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				UUserWidget::PlayAnimation(bpv__FadeIn__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				UUserWidget::PlayAnimation(bpv__FadeIn__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 5:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(1, 1342442478, TEXT("ExecuteUbergraph_PlayerDamage_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UPlayerDamage_C__pf3966595016::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_PlayerDamage__pf_0(3);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPlayerDamage_C__pf3966595016::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Textures/Pre_Polish/damage_effect-01.damage_effect-01 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UPlayerDamage_C__pf3966595016::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{64, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UPlayerDamage_C__pf3966595016
{
	FRegisterHelper__UPlayerDamage_C__pf3966595016()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/Widgets/PlayerDamage"), &UPlayerDamage_C__pf3966595016::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPlayerDamage_C__pf3966595016 Instance;
};
FRegisterHelper__UPlayerDamage_C__pf3966595016 FRegisterHelper__UPlayerDamage_C__pf3966595016::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
