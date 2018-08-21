#include "NativizedAssets.h"
#include "Bimba_Games__pf3267801299.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MediaAssets/Public/MediaPlayer.h"
#include "Runtime/MediaAssets/Public/MediaPlaylist.h"
#include "Runtime/MediaAssets/Public/MediaSource.h"
#include "Runtime/MediaAssets/Public/FileMediaSource.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UBimba_Games_C__pf3267801299::UBimba_Games_C__pf3267801299(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UBimba_Games_C__pf3267801299::StaticClass() == GetClass()))
	{
		UBimba_Games_C__pf3267801299::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Games__pf = nullptr;
	bpv__Image_57__pf = nullptr;
	bpv__NewVar_0__pf = CastChecked<UMediaPlayer>(CastChecked<UDynamicClass>(UBimba_Games_C__pf3267801299::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UBimba_Games_C__pf3267801299::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBimba_Games_C__pf3267801299::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Games_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__2), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(2);
	auto __Local__4 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__4->LayoutData.Offsets.Left = 8.000000f;
	__Local__4->LayoutData.Offsets.Right = -7.900024f;
	__Local__4->LayoutData.Offsets.Bottom = 4.488861f;
	__Local__4->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__4->Parent = __Local__2;
	auto __Local__5 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image_57"));
	__Local__5->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__5->Slot = __Local__4;
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__6->LayoutData.Offsets.Left = -240.960938f;
	__Local__6->LayoutData.Offsets.Top = -324.540527f;
	__Local__6->LayoutData.Offsets.Right = 151.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->bAutoSize = true;
	__Local__6->Parent = __Local__2;
	auto __Local__7 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_62"));
	__Local__7->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Bimba \r\n\r\nGames"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A6477DBB49441AD3D6A5529A3444D067") /* Key */
	);
	__Local__7->Font.Size = 115;
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__3.Add(__Local__6);
	__Local__0->RootWidget = __Local__2;
	auto __Local__8 = NewObject<UMovieScene>(__Local__1, UMovieScene::StaticClass(), TEXT("Games"));
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__8), UMovieScene::__PPO__Possessables() )));
	__Local__9 = TArray<FMovieScenePossessable> ();
	__Local__9.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__9.GetData(), 1);
	auto& __Local__10 = __Local__9[0];
	auto& __Local__11 = (*(AccessPrivateProperty<FGuid >(&(__Local__10), FMovieScenePossessable::__PPO__Guid() )));
	__Local__11 = FGuid(0xE7DD7E46, 0x40F81461, 0x51AF5490, 0x59B60394);
	auto& __Local__12 = (*(AccessPrivateProperty<FString >(&(__Local__10), FMovieScenePossessable::__PPO__Name() )));
	__Local__12 = FString(TEXT("TextBlock_62"));
	auto& __Local__13 = (*(AccessPrivateProperty<UClass* >(&(__Local__10), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__13 = UTextBlock::StaticClass();
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__8), UMovieScene::__PPO__ObjectBindings() )));
	__Local__14 = TArray<FMovieSceneBinding> ();
	__Local__14.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__14.GetData(), 1);
	auto& __Local__15 = __Local__14[0];
	auto& __Local__16 = (*(AccessPrivateProperty<FGuid >(&(__Local__15), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__16 = FGuid(0xE7DD7E46, 0x40F81461, 0x51AF5490, 0x59B60394);
	auto& __Local__17 = (*(AccessPrivateProperty<FString >(&(__Local__15), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__17 = FString(TEXT("TextBlock_62"));
	auto& __Local__18 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__15), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__18 = TArray<UMovieSceneTrack*> ();
	__Local__18.Reserve(1);
	auto __Local__19 = NewObject<UMovieSceneColorTrack>(__Local__8, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_1"));
	auto& __Local__20 = (*(AccessPrivateProperty<FName >((__Local__19), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__20 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__21 = (*(AccessPrivateProperty<FString >((__Local__19), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__21 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__19), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__22 = TArray<UMovieSceneSection*> ();
	__Local__22.Reserve(1);
	auto __Local__23 = NewObject<UMovieSceneColorSection>(__Local__19, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__24 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__23), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__24), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__25 = TArray<FFrameNumber> ();
	__Local__25.Reserve(2);
	__Local__25.Add(FFrameNumber{});
	__Local__25.Add(FFrameNumber{});
	static TWeakObjectPtr<UProperty> __Local__27{};
	const UProperty* __Local__26 = __Local__27.Get();
	if (nullptr == __Local__26)
	{
		__Local__26 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumber"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__26);
		__Local__27 = __Local__26;
	}
	auto& __Local__28 = (*(__Local__26->ContainerPtrToValuePtr<int32 >(&(__Local__25[1]), 0)));
	__Local__28 = 60000;
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__24), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__29 = TArray<FMovieSceneFloatValue> ();
	__Local__29.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__29.GetData(), 2);
	auto& __Local__30 = __Local__29[0];
	auto& __Local__31 = __Local__29[1];
	__Local__31.Value = 1.000000f;
	auto __Local__32 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__23, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__32->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__23->Easing.EaseIn = __Local__32;
	auto __Local__33 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__23, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__33->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__23->Easing.EaseOut = __Local__33;
	__Local__23->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)));
	auto& __Local__34 = (*(AccessPrivateProperty<FGuid >((__Local__23), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__34 = FGuid(0x9BAAF5D8, 0x45977C74, 0xAFE3C1AB, 0xB5E939BF);
	__Local__22.Add(__Local__23);
	auto& __Local__35 = (*(AccessPrivateProperty<FGuid >((__Local__19), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__35 = FGuid(0x8C5CC428, 0x458C032D, 0x6B10FE93, 0xA9F9763F);
	__Local__18.Add(__Local__19);
	auto& __Local__36 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__8), UMovieScene::__PPO__PlaybackRange() )));
	__Local__36 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)));
	auto& __Local__37 = (*(AccessPrivateProperty<FFrameRate >((__Local__8), UMovieScene::__PPO__DisplayRate() )));
	static TWeakObjectPtr<UProperty> __Local__39{};
	const UProperty* __Local__38 = __Local__39.Get();
	if (nullptr == __Local__38)
	{
		__Local__38 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__38);
		__Local__39 = __Local__38;
	}
	auto& __Local__40 = (*(__Local__38->ContainerPtrToValuePtr<int32 >(&(__Local__37), 0)));
	__Local__40 = 20;
	auto& __Local__41 = (*(AccessPrivateProperty<FGuid >((__Local__8), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__41 = FGuid(0xEB3CFCDA, 0x4F44B412, 0xF411438B, 0x2DACD45E);
	__Local__1->MovieScene = __Local__8;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__42 = __Local__1->AnimationBindings[0];
	__Local__42.WidgetName = FName(TEXT("TextBlock_62"));
	__Local__42.AnimationGuid = FGuid(0xE7DD7E46, 0x40F81461, 0x51AF5490, 0x59B60394);
	auto& __Local__43 = (*(AccessPrivateProperty<bool >((__Local__1), UWidgetAnimation::__PPO__bLegacyFinishOnStop() )));
	__Local__43 = false;
	auto& __Local__44 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__1->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__44 = {};
	__Local__44.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__47{};
	const UProperty* __Local__46 = __Local__47.Get();
	if (nullptr == __Local__46)
	{
		__Local__46 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__46);
		__Local__47 = __Local__46;
	}
	FScriptMapHelper __Local__45(CastChecked<UMapProperty>(__Local__46), &__Local__44);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__48 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__45.GetPairPtr(__Local__45.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__49 = (*(AccessPrivateProperty<uint32 >(&(__Local__48.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__49 = 0;
	auto& __Local__50 = (*(AccessPrivateProperty<FGuid >(&(__Local__48.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__50 = FGuid(0xE7DD7E46, 0x40F81461, 0x51AF5490, 0x59B60394);
	auto& __Local__51 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__48.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__51), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__52 = TArray<int32> ();
	__Local__52.Reserve(1);
	__Local__52.Add(0);
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__51), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__53 = TArray<FMovieSceneSegment> ();
	__Local__53.Reserve(1);
	__Local__53.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__54 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__48.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__54 = __Local__19;
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__48.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__55 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__55.Reserve(1);
	__Local__55.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__55[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__56 = TArray<FFrameNumber> ();
	__Local__56.Reserve(2);
	__Local__56.Add(FFrameNumber{});
	__Local__56.Add(FFrameNumber{});
	auto& __Local__57 = (*(__Local__26->ContainerPtrToValuePtr<int32 >(&(__Local__56[1]), 0)));
	__Local__57 = 60000;
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__55[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__58 = TArray<FMovieSceneFloatValue> ();
	__Local__58.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__58.GetData(), 2);
	auto& __Local__59 = __Local__58[0];
	auto& __Local__60 = __Local__58[1];
	__Local__60.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__55[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__61 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__55[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__61.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__61.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__62 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__55[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__62 = __Local__23;
	static TWeakObjectPtr<UProperty> __Local__64{};
	const UProperty* __Local__63 = __Local__64.Get();
	if (nullptr == __Local__63)
	{
		__Local__63 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPreroll")));
		check(__Local__63);
		__Local__64 = __Local__63;
	}
	(((UBoolProperty*)__Local__63)->SetPropertyValue_InContainer(&(__Local__48.Value), false, 0));
	static TWeakObjectPtr<UProperty> __Local__66{};
	const UProperty* __Local__65 = __Local__66.Get();
	if (nullptr == __Local__65)
	{
		__Local__65 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPostroll")));
		check(__Local__65);
		__Local__66 = __Local__65;
	}
	(((UBoolProperty*)__Local__65)->SetPropertyValue_InContainer(&(__Local__48.Value), false, 0));
	__Local__45.Rehash();
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FMovieSceneFrameRange> >(&(__Local__1->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__67 = TArray<FMovieSceneFrameRange> ();
	__Local__67.Reserve(3);
	__Local__67.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Open(), TRangeBound<FFrameNumber>::Exclusive(0))));
	__Local__67.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(60001))));
	__Local__67.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(60001), TRangeBound<FFrameNumber>::Open())));
	auto& __Local__68 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__1->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__68 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__68.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__68.GetData(), 3);
	auto& __Local__69 = __Local__68[0];
	auto& __Local__70 = __Local__68[1];
	__Local__70.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__70.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__70.LUTIndices.GetData(), 1);
	auto& __Local__71 = __Local__70.LUTIndices[0];
	__Local__71.NumEvalPtrs = 1;
	__Local__70.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__70.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__70.SegmentPtrLUT.GetData(), 1);
	auto& __Local__72 = __Local__70.SegmentPtrLUT[0];
	auto& __Local__73 = (*(AccessPrivateProperty<int32 >(&(__Local__72.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__73 = 0;
	auto& __Local__74 = (*(AccessPrivateProperty<uint32 >(&(__Local__72.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__74 = 0;
	auto& __Local__75 = (*(AccessPrivateProperty<uint32 >(&(__Local__72.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__75 = 0;
	auto& __Local__76 = __Local__68[2];
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__1->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__77 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__77.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__77.GetData(), 3);
	auto& __Local__78 = __Local__77[0];
	__Local__78.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__78.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__78.ActiveSequences.GetData(), 1);
	auto& __Local__79 = __Local__78.ActiveSequences[0];
	auto& __Local__80 = (*(AccessPrivateProperty<uint32 >(&(__Local__79), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__80 = 0;
	auto& __Local__81 = __Local__77[1];
	__Local__81.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__81.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__81.ActiveSequences.GetData(), 1);
	auto& __Local__82 = __Local__81.ActiveSequences[0];
	auto& __Local__83 = (*(AccessPrivateProperty<uint32 >(&(__Local__82), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__83 = 0;
	__Local__81.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__81.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__81.ActiveEntities.GetData(), 2);
	auto& __Local__84 = __Local__81.ActiveEntities[0];
	auto& __Local__85 = (*(AccessPrivateProperty<uint32 >(&(__Local__84.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__85 = 0;
	auto& __Local__86 = (*(AccessPrivateProperty<uint32 >(&(__Local__84.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__86 = 0;
	__Local__84.Key.SectionIndex = 0;
	__Local__84.EvaluationIndex = 1;
	auto& __Local__87 = __Local__81.ActiveEntities[1];
	auto& __Local__88 = (*(AccessPrivateProperty<uint32 >(&(__Local__87.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__88 = 0;
	auto& __Local__89 = (*(AccessPrivateProperty<uint32 >(&(__Local__87.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__89 = 0;
	auto& __Local__90 = __Local__77[2];
	__Local__90.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__90.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__90.ActiveSequences.GetData(), 1);
	auto& __Local__91 = __Local__90.ActiveSequences[0];
	auto& __Local__92 = (*(AccessPrivateProperty<uint32 >(&(__Local__91), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__92 = 0;
	__Local__1->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x6001A02A, 0x4FDCA623, 0xA2316F8A, 0xE46F66A7);
	auto& __Local__93 = (*(AccessPrivateProperty<uint32 >(&(__Local__1->PrecompiledEvaluationTemplate.TemplateSerialNumber), FMovieSceneEvaluationTemplateSerialNumber::__PPO__Value() )));
	__Local__93 = 1;
	auto& __Local__94 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__1->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__95 = (*(AccessPrivateProperty<uint32 >(&(__Local__94.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__95 = 0;
	__Local__94.TrackSignatureToTrackIdentifier = {};
	__Local__94.TrackSignatureToTrackIdentifier.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__98{};
	const UProperty* __Local__97 = __Local__98.Get();
	if (nullptr == __Local__97)
	{
		__Local__97 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__97);
		__Local__98 = __Local__97;
	}
	FScriptMapHelper __Local__96(CastChecked<UMapProperty>(__Local__97), &__Local__94.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__99 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__96.GetPairPtr(__Local__96.AddDefaultValue_Invalid_NeedsRehash());
	__Local__99.Key.A = -1940077528;
	__Local__99.Key.B = 1166803757;
	__Local__99.Key.C = 1796275859;
	__Local__99.Key.D = -1443269057;
	auto& __Local__100 = (*(AccessPrivateProperty<uint32 >(&(__Local__99.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__100 = 0;
	__Local__96.Rehash();
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__101 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__101 = FGuid(0x6001A02A, 0x4FDCA623, 0xA2316F8A, 0xE46F66A7);
}
PRAGMA_ENABLE_OPTIMIZATION
void UBimba_Games_C__pf3267801299::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__102;
	SlotNames.Append(__Local__102);
}
void UBimba_Games_C__pf3267801299::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__103;
	__Local__103.Reserve(1);
	__Local__103.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UBimba_Games_C__pf3267801299::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__104;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UBimba_Games_C__pf3267801299::StaticClass())->MiscConvertedSubobjects[0]), __Local__103, __Local__104);
}
void UBimba_Games_C__pf3267801299::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UBimba_Games_C__pf3267801299::bpf__ExecuteUbergraph_Bimba_Games__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_OpenSource_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__NewVar_0__pf))
	{
		bpfv__CallFunc_OpenSource_ReturnValue__pf = bpv__NewVar_0__pf->UMediaPlayer::OpenSource(CastChecked<UMediaSource>(CastChecked<UDynamicClass>(UBimba_Games_C__pf3267801299::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	}
	return; // KCST_GotoReturn
}
void UBimba_Games_C__pf3267801299::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Bimba_Games__pf_0(2);
}
PRAGMA_DISABLE_OPTIMIZATION
void UBimba_Games_C__pf3267801299::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MediaPlayer /Game/Movies/Intro.Intro 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  FileMediaSource /Game/Movies/INTRO_1_4.INTRO_1_4 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UBimba_Games_C__pf3267801299::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaPlayer 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{64, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UBimba_Games_C__pf3267801299
{
	FRegisterHelper__UBimba_Games_C__pf3267801299()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/Widgets/MainMenu/Bimba_Games"), &UBimba_Games_C__pf3267801299::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UBimba_Games_C__pf3267801299 Instance;
};
FRegisterHelper__UBimba_Games_C__pf3267801299 FRegisterHelper__UBimba_Games_C__pf3267801299::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
