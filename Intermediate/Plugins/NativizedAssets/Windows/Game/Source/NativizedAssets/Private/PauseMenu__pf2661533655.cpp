#include "NativizedAssets.h"
#include "PauseMenu__pf2661533655.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
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
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Igra__pf2999911482.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UPauseMenu_C__pf2661533655::UPauseMenu_C__pf2661533655(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UPauseMenu_C__pf2661533655::StaticClass() == GetClass()))
	{
		UPauseMenu_C__pf2661533655::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__FadeInxOut__pfG = nullptr;
	bpv__Button_0__pf = nullptr;
	bpv__Button_129__pf = nullptr;
	bpv__Button_147__pf = nullptr;
	bpv__Button_210__pf = nullptr;
	bpv__Image_23__pf = nullptr;
	bpv__NewVar_0__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPauseMenu_C__pf2661533655::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPauseMenu_C__pf2661533655::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UPauseMenuBP_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPauseMenuBP_C());
	InDynamicClass->ReferencedConvertedFields.Add(UIgra_C__pf2999911482::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeIn-Out_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[0];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_147"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Button_147_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[1];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_0"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_284_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[2];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_129"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Button_129_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[3];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_210"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Button_210_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_10"));
	__Local__9->LayoutData.Offsets.Left = 5.366703f;
	__Local__9->LayoutData.Offsets.Top = -4.000000f;
	__Local__9->LayoutData.Offsets.Right = -0.817873f;
	__Local__9->LayoutData.Offsets.Bottom = -0.408936f;
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_1"));
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(5);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__12->LayoutData.Offsets.Left = -20.569016f;
	__Local__12->LayoutData.Offsets.Top = -28.060062f;
	__Local__12->LayoutData.Offsets.Right = -37.116455f;
	__Local__12->LayoutData.Offsets.Bottom = -41.342041f;
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_23"));
	__Local__13->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 0.700000);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_11"));
	__Local__14->LayoutData.Offsets.Left = -240.960938f;
	__Local__14->LayoutData.Offsets.Top = -48.540527f;
	__Local__14->LayoutData.Offsets.Right = 392.024658f;
	__Local__14->LayoutData.Offsets.Bottom = 64.800003f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__14->Parent = __Local__10;
	auto __Local__15 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_129"));
	__Local__15->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__16 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__15->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__15->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__15->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__18 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__15->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__11.Add(__Local__14);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__21->LayoutData.Offsets.Left = -240.960938f;
	__Local__21->LayoutData.Offsets.Top = 208.000000f;
	__Local__21->LayoutData.Offsets.Right = 392.024658f;
	__Local__21->LayoutData.Offsets.Bottom = 64.800003f;
	__Local__21->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__21->Parent = __Local__10;
	auto __Local__22 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_210"));
	__Local__22->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__22->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__22->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__11.Add(__Local__21);
	auto __Local__28 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__28->LayoutData.Offsets.Left = -240.960938f;
	__Local__28->LayoutData.Offsets.Top = 43.459473f;
	__Local__28->LayoutData.Offsets.Right = 392.024658f;
	__Local__28->LayoutData.Offsets.Bottom = 64.800003f;
	__Local__28->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__28->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__28->Parent = __Local__10;
	auto __Local__29 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_0"));
	__Local__29->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__29->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__29->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__11.Add(__Local__28);
	auto __Local__35 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_14"));
	__Local__35->LayoutData.Offsets.Left = -216.000000f;
	__Local__35->LayoutData.Offsets.Top = 129.795532f;
	__Local__35->LayoutData.Offsets.Right = 327.560913f;
	__Local__35->LayoutData.Offsets.Bottom = 50.677345f;
	__Local__35->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__35->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__35->Parent = __Local__10;
	auto __Local__36 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_147"));
	__Local__36->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__36->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__36->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__36->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__36->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__39 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__36->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__40 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__40 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__36->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__11.Add(__Local__35);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__1->RootWidget = __Local__7;
	auto __Local__42 = NewObject<UMovieScene>(__Local__2, UMovieScene::StaticClass(), TEXT("FadeIn-Out"));
	auto& __Local__43 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__42), UMovieScene::__PPO__Possessables() )));
	__Local__43 = TArray<FMovieScenePossessable> ();
	__Local__43.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__43.GetData(), 1);
	auto& __Local__44 = __Local__43[0];
	auto& __Local__45 = (*(AccessPrivateProperty<FGuid >(&(__Local__44), FMovieScenePossessable::__PPO__Guid() )));
	__Local__45 = FGuid(0x08340C60, 0x40FA5A29, 0x364FAF9A, 0x19C5C4E6);
	auto& __Local__46 = (*(AccessPrivateProperty<FString >(&(__Local__44), FMovieScenePossessable::__PPO__Name() )));
	__Local__46 = FString(TEXT("Image_23"));
	auto& __Local__47 = (*(AccessPrivateProperty<UClass* >(&(__Local__44), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__47 = UImage::StaticClass();
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__42), UMovieScene::__PPO__ObjectBindings() )));
	__Local__48 = TArray<FMovieSceneBinding> ();
	__Local__48.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__48.GetData(), 1);
	auto& __Local__49 = __Local__48[0];
	auto& __Local__50 = (*(AccessPrivateProperty<FGuid >(&(__Local__49), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__50 = FGuid(0x08340C60, 0x40FA5A29, 0x364FAF9A, 0x19C5C4E6);
	auto& __Local__51 = (*(AccessPrivateProperty<FString >(&(__Local__49), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__51 = FString(TEXT("Image_23"));
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__49), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__52 = TArray<UMovieSceneTrack*> ();
	__Local__52.Reserve(1);
	auto __Local__53 = NewObject<UMovieSceneColorTrack>(__Local__42, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__54 = (*(AccessPrivateProperty<FName >((__Local__53), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__54 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__55 = (*(AccessPrivateProperty<FString >((__Local__53), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__55 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__53), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__56 = TArray<UMovieSceneSection*> ();
	__Local__56.Reserve(1);
	auto __Local__57 = NewObject<UMovieSceneColorSection>(__Local__53, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__58 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__57), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__58), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__59 = TArray<FFrameNumber> ();
	__Local__59.Reserve(2);
	__Local__59.Add(FFrameNumber{});
	__Local__59.Add(FFrameNumber{});
	static TWeakObjectPtr<UProperty> __Local__61{};
	const UProperty* __Local__60 = __Local__61.Get();
	if (nullptr == __Local__60)
	{
		__Local__60 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumber"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__60);
		__Local__61 = __Local__60;
	}
	auto& __Local__62 = (*(__Local__60->ContainerPtrToValuePtr<int32 >(&(__Local__59[1]), 0)));
	__Local__62 = 12000;
	auto& __Local__63 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__58), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__63 = TArray<FMovieSceneFloatValue> ();
	__Local__63.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__63.GetData(), 2);
	auto& __Local__64 = __Local__63[0];
	auto& __Local__65 = __Local__63[1];
	__Local__65.Value = 0.700000f;
	auto __Local__66 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__57, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__66->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__57->Easing.EaseIn = __Local__66;
	auto __Local__67 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__57, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__67->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__57->Easing.EaseOut = __Local__67;
	__Local__57->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(12001)));
	auto& __Local__68 = (*(AccessPrivateProperty<FGuid >((__Local__57), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__68 = FGuid(0xC5B199FE, 0x4C2D67BB, 0x712ED7AB, 0x37093485);
	__Local__56.Add(__Local__57);
	auto& __Local__69 = (*(AccessPrivateProperty<FGuid >((__Local__53), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__69 = FGuid(0x18A83AB7, 0x4D4FC4C8, 0xFD03D4A0, 0xFEAB4B6C);
	__Local__52.Add(__Local__53);
	auto& __Local__70 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__42), UMovieScene::__PPO__PlaybackRange() )));
	__Local__70 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(12001)));
	auto& __Local__71 = (*(AccessPrivateProperty<FFrameRate >((__Local__42), UMovieScene::__PPO__DisplayRate() )));
	static TWeakObjectPtr<UProperty> __Local__73{};
	const UProperty* __Local__72 = __Local__73.Get();
	if (nullptr == __Local__72)
	{
		__Local__72 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__72);
		__Local__73 = __Local__72;
	}
	auto& __Local__74 = (*(__Local__72->ContainerPtrToValuePtr<int32 >(&(__Local__71), 0)));
	__Local__74 = 20;
	auto& __Local__75 = (*(AccessPrivateProperty<FGuid >((__Local__42), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__75 = FGuid(0xA2203641, 0x40DD9C8A, 0x430E54B3, 0xDCF1BB4C);
	__Local__2->MovieScene = __Local__42;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__76 = __Local__2->AnimationBindings[0];
	__Local__76.WidgetName = FName(TEXT("Image_23"));
	__Local__76.AnimationGuid = FGuid(0x08340C60, 0x40FA5A29, 0x364FAF9A, 0x19C5C4E6);
	auto& __Local__77 = (*(AccessPrivateProperty<bool >((__Local__2), UWidgetAnimation::__PPO__bLegacyFinishOnStop() )));
	__Local__77 = false;
	auto& __Local__78 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__2->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__78 = {};
	__Local__78.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__81{};
	const UProperty* __Local__80 = __Local__81.Get();
	if (nullptr == __Local__80)
	{
		__Local__80 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__80);
		__Local__81 = __Local__80;
	}
	FScriptMapHelper __Local__79(CastChecked<UMapProperty>(__Local__80), &__Local__78);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__82 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__79.GetPairPtr(__Local__79.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__83 = (*(AccessPrivateProperty<uint32 >(&(__Local__82.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__83 = 0;
	auto& __Local__84 = (*(AccessPrivateProperty<FGuid >(&(__Local__82.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__84 = FGuid(0x08340C60, 0x40FA5A29, 0x364FAF9A, 0x19C5C4E6);
	auto& __Local__85 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__82.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__85), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__86 = TArray<int32> ();
	__Local__86.Reserve(1);
	__Local__86.Add(0);
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__85), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__87 = TArray<FMovieSceneSegment> ();
	__Local__87.Reserve(1);
	__Local__87.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(12001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__88 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__82.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__88 = __Local__53;
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__82.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__89 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__89.Reserve(1);
	__Local__89.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__89[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__90 = TArray<FFrameNumber> ();
	__Local__90.Reserve(2);
	__Local__90.Add(FFrameNumber{});
	__Local__90.Add(FFrameNumber{});
	auto& __Local__91 = (*(__Local__60->ContainerPtrToValuePtr<int32 >(&(__Local__90[1]), 0)));
	__Local__91 = 12000;
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__89[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__92 = TArray<FMovieSceneFloatValue> ();
	__Local__92.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__92.GetData(), 2);
	auto& __Local__93 = __Local__92[0];
	auto& __Local__94 = __Local__92[1];
	__Local__94.Value = 0.700000f;
	((FMovieSceneColorSectionTemplate*)__Local__89[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__95 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__89[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__95.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__95.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__96 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__89[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__96 = __Local__57;
	static TWeakObjectPtr<UProperty> __Local__98{};
	const UProperty* __Local__97 = __Local__98.Get();
	if (nullptr == __Local__97)
	{
		__Local__97 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPreroll")));
		check(__Local__97);
		__Local__98 = __Local__97;
	}
	(((UBoolProperty*)__Local__97)->SetPropertyValue_InContainer(&(__Local__82.Value), false, 0));
	static TWeakObjectPtr<UProperty> __Local__100{};
	const UProperty* __Local__99 = __Local__100.Get();
	if (nullptr == __Local__99)
	{
		__Local__99 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPostroll")));
		check(__Local__99);
		__Local__100 = __Local__99;
	}
	(((UBoolProperty*)__Local__99)->SetPropertyValue_InContainer(&(__Local__82.Value), false, 0));
	__Local__79.Rehash();
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<FMovieSceneFrameRange> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__101 = TArray<FMovieSceneFrameRange> ();
	__Local__101.Reserve(3);
	__Local__101.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Open(), TRangeBound<FFrameNumber>::Exclusive(0))));
	__Local__101.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(12001))));
	__Local__101.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(12001), TRangeBound<FFrameNumber>::Open())));
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__102 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__102.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__102.GetData(), 3);
	auto& __Local__103 = __Local__102[0];
	auto& __Local__104 = __Local__102[1];
	__Local__104.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__104.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__104.LUTIndices.GetData(), 1);
	auto& __Local__105 = __Local__104.LUTIndices[0];
	__Local__105.NumEvalPtrs = 1;
	__Local__104.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__104.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__104.SegmentPtrLUT.GetData(), 1);
	auto& __Local__106 = __Local__104.SegmentPtrLUT[0];
	auto& __Local__107 = (*(AccessPrivateProperty<int32 >(&(__Local__106.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__107 = 0;
	auto& __Local__108 = (*(AccessPrivateProperty<uint32 >(&(__Local__106.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__108 = 0;
	auto& __Local__109 = (*(AccessPrivateProperty<uint32 >(&(__Local__106.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__109 = 0;
	auto& __Local__110 = __Local__102[2];
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__111 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__111.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__111.GetData(), 3);
	auto& __Local__112 = __Local__111[0];
	__Local__112.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__112.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__112.ActiveSequences.GetData(), 1);
	auto& __Local__113 = __Local__112.ActiveSequences[0];
	auto& __Local__114 = (*(AccessPrivateProperty<uint32 >(&(__Local__113), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__114 = 0;
	auto& __Local__115 = __Local__111[1];
	__Local__115.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__115.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__115.ActiveSequences.GetData(), 1);
	auto& __Local__116 = __Local__115.ActiveSequences[0];
	auto& __Local__117 = (*(AccessPrivateProperty<uint32 >(&(__Local__116), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__117 = 0;
	__Local__115.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__115.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__115.ActiveEntities.GetData(), 2);
	auto& __Local__118 = __Local__115.ActiveEntities[0];
	auto& __Local__119 = (*(AccessPrivateProperty<uint32 >(&(__Local__118.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__119 = 0;
	auto& __Local__120 = (*(AccessPrivateProperty<uint32 >(&(__Local__118.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__120 = 0;
	__Local__118.Key.SectionIndex = 0;
	__Local__118.EvaluationIndex = 1;
	auto& __Local__121 = __Local__115.ActiveEntities[1];
	auto& __Local__122 = (*(AccessPrivateProperty<uint32 >(&(__Local__121.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__122 = 0;
	auto& __Local__123 = (*(AccessPrivateProperty<uint32 >(&(__Local__121.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__123 = 0;
	auto& __Local__124 = __Local__111[2];
	__Local__124.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__124.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__124.ActiveSequences.GetData(), 1);
	auto& __Local__125 = __Local__124.ActiveSequences[0];
	auto& __Local__126 = (*(AccessPrivateProperty<uint32 >(&(__Local__125), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__126 = 0;
	__Local__2->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x9E11FD59, 0x493697D6, 0xCA539DAA, 0x0B6394A5);
	auto& __Local__127 = (*(AccessPrivateProperty<uint32 >(&(__Local__2->PrecompiledEvaluationTemplate.TemplateSerialNumber), FMovieSceneEvaluationTemplateSerialNumber::__PPO__Value() )));
	__Local__127 = 1;
	auto& __Local__128 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__2->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__129 = (*(AccessPrivateProperty<uint32 >(&(__Local__128.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__129 = 0;
	__Local__128.TrackSignatureToTrackIdentifier = {};
	__Local__128.TrackSignatureToTrackIdentifier.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__132{};
	const UProperty* __Local__131 = __Local__132.Get();
	if (nullptr == __Local__131)
	{
		__Local__131 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__131);
		__Local__132 = __Local__131;
	}
	FScriptMapHelper __Local__130(CastChecked<UMapProperty>(__Local__131), &__Local__128.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__133 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__130.GetPairPtr(__Local__130.AddDefaultValue_Invalid_NeedsRehash());
	__Local__133.Key.A = 413678263;
	__Local__133.Key.B = 1297073352;
	__Local__133.Key.C = -50080608;
	__Local__133.Key.D = -22328468;
	auto& __Local__134 = (*(AccessPrivateProperty<uint32 >(&(__Local__133.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__134 = 0;
	__Local__130.Rehash();
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__135 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__135 = FGuid(0x9E11FD59, 0x493697D6, 0xCA539DAA, 0x0B6394A5);
}
PRAGMA_ENABLE_OPTIMIZATION
void UPauseMenu_C__pf2661533655::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__136;
	SlotNames.Append(__Local__136);
}
void UPauseMenu_C__pf2661533655::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__137;
	__Local__137.Reserve(1);
	__Local__137.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__138;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPauseMenu_C__pf2661533655::StaticClass())->MiscConvertedSubobjects[0]), __Local__137, __Local__138);
}
void UPauseMenu_C__pf2661533655::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPauseMenu_C__pf2661533655::bpf__ExecuteUbergraph_PauseMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b0l__K2Node_DynamicCast_AsIgra__pf = Cast<UIgra_C__pf2999911482>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsIgra__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsIgra__pf))
	{
		b0l__K2Node_DynamicCast_AsIgra__pf->bpv__FromPauseToMainMenu__pf = true;
	}
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("PersistentLevel")), true, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UPauseMenu_C__pf2661533655::bpf__ExecuteUbergraph_PauseMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
	if ( bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf && bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf->GetClass()->ImplementsInterface(UPauseMenuBP_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf.SetObject(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
		void* IAddress = bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf->GetInterfaceAddress(UPauseMenuBP_C::StaticClass());
		b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf))
	{
		IPauseMenuBP_C::Execute_bpf__PauseMenux__pfzy(b0l__K2Node_DynamicCast_AsPause_Menu_BP__pf.GetObject() );
	}
	return; // KCST_GotoReturn
}
void UPauseMenu_C__pf2661533655::bpf__ExecuteUbergraph_PauseMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	UUserWidget::PlayAnimation(bpv__FadeInxOut__pfG, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
	return; // KCST_GotoReturn
}
void UPauseMenu_C__pf2661533655::bpf__ExecuteUbergraph_PauseMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpf__LoadGame__pf();
	return; // KCST_GotoReturn
}
void UPauseMenu_C__pf2661533655::bpf__ExecuteUbergraph_PauseMenu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::QuitGame(this, ((APlayerController*)nullptr), EQuitPreference::Quit);
	return; // KCST_GotoReturn
}
void UPauseMenu_C__pf2661533655::bpf__ExecuteUbergraph_PauseMenu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	return; // KCST_GotoReturn
}
void UPauseMenu_C__pf2661533655::bpf__BndEvt__Button_147_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseMenu__pf_0(12);
}
void UPauseMenu_C__pf2661533655::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_PauseMenu__pf_2(10);
}
void UPauseMenu_C__pf2661533655::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_284_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseMenu__pf_3(8);
}
void UPauseMenu_C__pf2661533655::bpf__BndEvt__Button_129_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseMenu__pf_1(5);
}
void UPauseMenu_C__pf2661533655::bpf__BndEvt__Button_210_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_PauseMenu__pf_4(3);
}
void UPauseMenu_C__pf2661533655::bpf__PauseMenux__pfzy()
{
	bpf__ExecuteUbergraph_PauseMenu__pf_5(2);
}
void UPauseMenu_C__pf2661533655::bpf__LoadGame__pf()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void UPauseMenu_C__pf2661533655::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Resume_Game-01.Resume_Game-01 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Resume_Hover-01.Resume_Hover-01 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Widgets/MainMenu/Button_Clicked1.Button_Clicked1 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Widgets/MainMenu/Button_Hover1.Button_Hover1 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Exit_Game-01.Exit_Game-01 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Exit_Hover-01.Exit_Hover-01 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/LFLC-01.LFLC-01 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/LFLC_Hover-01.LFLC_Hover-01 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Quit_To_Menu-01.Quit_To_Menu-01 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Quit_To_Menu_Hover-01.Quit_To_Menu_Hover-01 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UPauseMenu_C__pf2661533655::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{12, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Widgets/PauseMenu/PauseMenuBP.PauseMenuBP_C 
		{64, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{65, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Igra.Igra_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UPauseMenu_C__pf2661533655
{
	FRegisterHelper__UPauseMenu_C__pf2661533655()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/Widgets/PauseMenu/PauseMenu"), &UPauseMenu_C__pf2661533655::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPauseMenu_C__pf2661533655 Instance;
};
FRegisterHelper__UPauseMenu_C__pf2661533655 FRegisterHelper__UPauseMenu_C__pf2661533655::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
