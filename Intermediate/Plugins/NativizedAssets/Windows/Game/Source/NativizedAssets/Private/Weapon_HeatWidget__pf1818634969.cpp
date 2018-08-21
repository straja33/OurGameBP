#include "NativizedAssets.h"
#include "Weapon_HeatWidget__pf1818634969.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
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
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
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
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "OurHero__pf3840320923.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Grenade2__pf359902852.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Objectives__pf3966595016.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#include "Uzi_Bullet1__pf359902852.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Camera2__pf3840320923.h"
#include "PlayerDamage__pf3966595016.h"
#include "Pistol_Bullet__pf359902852.h"
#include "PauseMenuBP__pf2661533655.h"
#include "HeroHealthCrosshair__pf1898636992.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWeapon_HeatWidget_C__pf1818634969::UWeapon_HeatWidget_C__pf1818634969(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UWeapon_HeatWidget_C__pf1818634969::StaticClass() == GetClass()))
	{
		UWeapon_HeatWidget_C__pf1818634969::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__HeatBar__pf = nullptr;
	bpv__Image_21__pf = nullptr;
	bpv__Pistl_Infinite__pf = nullptr;
	bpv__TextBlock_103__pf = nullptr;
	bpv__Weapon_Image__pf = nullptr;
	bpv__Hero__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWeapon_HeatWidget_C__pf1818634969::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWeapon_HeatWidget_C__pf1818634969::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AOurHero_C__pf3840320923::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(5);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__3->LayoutData.Offsets.Left = -645.921875f;
	__Local__3->LayoutData.Offsets.Top = -103.081055f;
	__Local__3->LayoutData.Offsets.Right = 441.593018f;
	__Local__3->LayoutData.Offsets.Bottom = 14.315218f;
	__Local__3->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__3->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UProgressBar>(__Local__0, UProgressBar::StaticClass(), TEXT("HeatBar"));
	__Local__4->WidgetStyle.BackgroundImage.ImageSize = FVector2D(2789.000000, 250.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->WidgetStyle.BackgroundImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.427083, 0.427083, 0.427083, 0.500000);
	auto& __Local__6 = (*(AccessPrivateProperty<UObject* >(&(__Local__4->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__6 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->WidgetStyle.BackgroundImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__4->WidgetStyle.FillImage.ImageSize = FVector2D(2789.000000, 250.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->WidgetStyle.FillImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__7 = FLinearColor(0.932292, 0.086900, 0.114727, 1.000000);
	auto& __Local__8 = (*(AccessPrivateProperty<UObject* >(&(__Local__4->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__8 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->WidgetStyle.FillImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__4->FillColorAndOpacity = FLinearColor(0.875000, 0.100260, 0.109994, 1.000000);
	__Local__4->Slot = __Local__3;
	__Local__4->RenderOpacity = 0.000000f;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__9->LayoutData.Offsets.Left = -268.000000f;
	__Local__9->LayoutData.Offsets.Top = -126.000000f;
	__Local__9->LayoutData.Offsets.Right = 68.253967f;
	__Local__9->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__9->Parent = __Local__1;
	auto __Local__10 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Pistl_Infinite"));
	__Local__10->Brush.ImageSize = FVector2D(1250.000000, 1000.000000);
	auto& __Local__11 = (*(AccessPrivateProperty<UObject* >(&(__Local__10->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__11 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__10->Slot = __Local__9;
	__Local__10->RenderOpacity = 0.000000f;
	__Local__9->Content = __Local__10;
	__Local__2.Add(__Local__9);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__12->LayoutData.Offsets.Left = -160.000000f;
	__Local__12->LayoutData.Offsets.Top = -128.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 53.728012f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__12->Parent = __Local__1;
	auto __Local__13 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Weapon_Image"));
	__Local__13->Brush.ImageSize = FVector2D(2084.000000, 2084.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__13->Slot = __Local__12;
	__Local__13->RenderOpacity = 0.000000f;
	__Local__12->Content = __Local__13;
	__Local__2.Add(__Local__12);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__15->LayoutData.Offsets.Left = -224.000000f;
	__Local__15->LayoutData.Offsets.Top = -240.000000f;
	__Local__15->LayoutData.Offsets.Right = 78.666664f;
	__Local__15->LayoutData.Offsets.Bottom = 62.666672f;
	__Local__15->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__15->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__15->Parent = __Local__1;
	auto __Local__16 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image_21"));
	__Local__16->Brush.ImageSize = FVector2D(1600.000000, 1600.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__16->Slot = __Local__15;
	__Local__16->RenderTransform.Translation = FVector2D(83.000000, 0.000000);
	__Local__15->Content = __Local__16;
	__Local__2.Add(__Local__15);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__18->LayoutData.Offsets.Left = -172.000000f;
	__Local__18->LayoutData.Offsets.Top = -224.000000f;
	__Local__18->LayoutData.Offsets.Right = 151.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__18->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__18->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__18->bAutoSize = true;
	__Local__18->Parent = __Local__1;
	auto __Local__19 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_103"));
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__2.Add(__Local__18);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWeapon_HeatWidget_C__pf1818634969::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__20;
	SlotNames.Append(__Local__20);
}
void UWeapon_HeatWidget_C__pf1818634969::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__21;
	TArray<FDelegateRuntimeBinding>  __Local__22;
	__Local__22.AddUninitialized(2);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__22.GetData(), 2);
	auto& __Local__23 = __Local__22[0];
	__Local__23.ObjectName = FString(TEXT("HeatBar"));
	__Local__23.PropertyName = FName(TEXT("Percent"));
	__Local__23.FunctionName = FName(TEXT("GetPercent_0"));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__23.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__24 = TArray<FPropertyPathSegment> ();
	__Local__24.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__24.GetData(), 1);
	auto& __Local__25 = __Local__24[0];
	__Local__25.Name = FName(TEXT("Weapon_HeatPercentage"));
	auto& __Local__26 = __Local__22[1];
	__Local__26.ObjectName = FString(TEXT("TextBlock_103"));
	__Local__26.PropertyName = FName(TEXT("Text"));
	__Local__26.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__26.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__27 = TArray<FPropertyPathSegment> ();
	__Local__27.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__27.GetData(), 1);
	auto& __Local__28 = __Local__27[0];
	__Local__28.Name = FName(TEXT("GetText_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->MiscConvertedSubobjects[0]), __Local__21, __Local__22);
}
void UWeapon_HeatWidget_C__pf1818634969::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWeapon_HeatWidget_C__pf1818634969::bpf__ExecuteUbergraph_Weapon_HeatWidget__pf_0(int32 bpp__EntryPoint__pf)
{
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
	bpv__Hero__pf = bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UWeapon_HeatWidget_C__pf1818634969::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Weapon_HeatWidget__pf_0(1);
}
float  UWeapon_HeatWidget_C__pf1818634969::bpf__Weapon_HeatPercentage__pf()
{
	float bpp__ReturnValue__pf{};
	AOurHero_C__pf3840320923* bpfv__K2Node_DynamicCast_AsOur_Hero__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsOur_Hero__pf = Cast<AOurHero_C__pf3840320923>(bpv__Hero__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsOur_Hero__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				float  __Local__29 = 0.000000;
				float  __Local__30 = 0.000000;
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(((::IsValid(bpfv__K2Node_DynamicCast_AsOur_Hero__pf)) ? (bpfv__K2Node_DynamicCast_AsOur_Hero__pf->bpv__Weapon_HeatFloat__pf) : (__Local__29)), ((::IsValid(bpfv__K2Node_DynamicCast_AsOur_Hero__pf)) ? (bpfv__K2Node_DynamicCast_AsOur_Hero__pf->bpv__Weapon_HeatCalculate__pf) : (__Local__30)));
				bpp__ReturnValue__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UWeapon_HeatWidget_C__pf1818634969::bpf__Pistol_Widget__pf()
{
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush__pf{};
	if(::IsValid(bpv__Pistl_Infinite__pf))
	{
		bpv__Pistl_Infinite__pf->UWidget::SetRenderOpacity(1.000000);
	}
	if(::IsValid(bpv__Weapon_Image__pf))
	{
		bpv__Weapon_Image__pf->UWidget::SetRenderOpacity(1.000000);
	}
	if(::IsValid(bpv__HeatBar__pf))
	{
		bpv__HeatBar__pf->UWidget::SetRenderOpacity(0.000000);
	}
	bpfv__K2Node_MakeStruct_SlateBrush__pf.ImageSize = FVector2D(2084.000000,2084.000000);
	uint8* __Local__32 = (uint8*)FMemory_Alloca(FMargin::StaticStruct()->GetStructureSize());
	FMargin::StaticStruct()->InitializeStruct(__Local__32);
	FMargin& __Local__31 = *reinterpret_cast<FMargin*>(__Local__32);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Margin = __Local__31;
	uint8* __Local__34 = (uint8*)FMemory_Alloca(FSlateColor::StaticStruct()->GetStructureSize());
	FSlateColor::StaticStruct()->InitializeStruct(__Local__34);
	FSlateColor& __Local__33 = *reinterpret_cast<FSlateColor*>(__Local__34);
	auto& __Local__35 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__33), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__35 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.TintColor = __Local__33;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	if(::IsValid(bpv__Weapon_Image__pf))
	{
		bpv__Weapon_Image__pf->UImage::SetBrush(bpfv__K2Node_MakeStruct_SlateBrush__pf);
	}
	if(::IsValid(bpv__Weapon_Image__pf))
	{
		bpv__Weapon_Image__pf->UWidget::SetRenderScale(FVector2D(1.000000,1.000000));
	}
}
void UWeapon_HeatWidget_C__pf1818634969::bpf__Uzi_Widget__pf()
{
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush__pf{};
	AOurHero_C__pf3840320923* bpfv__K2Node_DynamicCast_AsOur_Hero__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Pistl_Infinite__pf))
				{
					bpv__Pistl_Infinite__pf->UWidget::SetRenderOpacity(0.000000);
				}
			}
		case 2:
			{
				bpfv__K2Node_MakeStruct_SlateBrush__pf.ImageSize = FVector2D(2084.000000,2084.000000);
				uint8* __Local__37 = (uint8*)FMemory_Alloca(FMargin::StaticStruct()->GetStructureSize());
				FMargin::StaticStruct()->InitializeStruct(__Local__37);
				FMargin& __Local__36 = *reinterpret_cast<FMargin*>(__Local__37);
				bpfv__K2Node_MakeStruct_SlateBrush__pf.Margin = __Local__36;
				uint8* __Local__39 = (uint8*)FMemory_Alloca(FSlateColor::StaticStruct()->GetStructureSize());
				FSlateColor::StaticStruct()->InitializeStruct(__Local__39);
				FSlateColor& __Local__38 = *reinterpret_cast<FSlateColor*>(__Local__39);
				auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38), FSlateColor::__PPO__SpecifiedColor() )));
				__Local__40 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
				bpfv__K2Node_MakeStruct_SlateBrush__pf.TintColor = __Local__38;
				(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				bpfv__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ESlateBrushDrawType::Image;
				bpfv__K2Node_MakeStruct_SlateBrush__pf.Tiling = ESlateBrushTileType::NoTile;
				bpfv__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
				if(::IsValid(bpv__Weapon_Image__pf))
				{
					bpv__Weapon_Image__pf->UImage::SetBrush(bpfv__K2Node_MakeStruct_SlateBrush__pf);
				}
			}
		case 3:
			{
				if(::IsValid(bpv__Weapon_Image__pf))
				{
					bpv__Weapon_Image__pf->UWidget::SetRenderScale(FVector2D(1.100000,1.500000));
				}
			}
		case 4:
			{
				if(::IsValid(bpv__HeatBar__pf))
				{
					bpv__HeatBar__pf->UWidget::SetRenderOpacity(1.000000);
				}
				if(::IsValid(bpv__Weapon_Image__pf))
				{
					bpv__Weapon_Image__pf->UWidget::SetRenderOpacity(1.000000);
				}
			}
		case 5:
			{
				bpfv__K2Node_DynamicCast_AsOur_Hero__pf = Cast<AOurHero_C__pf3840320923>(bpv__Hero__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsOur_Hero__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				float  __Local__41 = 0.000000;
				if(::IsValid(bpfv__K2Node_DynamicCast_AsOur_Hero__pf))
				{
					bpfv__K2Node_DynamicCast_AsOur_Hero__pf->bpv__Weapon_HeatFloat__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsOur_Hero__pf)) ? (bpfv__K2Node_DynamicCast_AsOur_Hero__pf->bpv__Uzi_Ammo__pf) : (__Local__41));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
FText  UWeapon_HeatWidget_C__pf1818634969::bpf__GetText_0__pf()
{
	FText bpp__ReturnValue__pf{};
	AOurHero_C__pf3840320923* bpfv__K2Node_DynamicCast_AsOur_Hero__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsOur_Hero__pf = Cast<AOurHero_C__pf3840320923>(bpv__Hero__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsOur_Hero__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__42 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsOur_Hero__pf)) ? (bpfv__K2Node_DynamicCast_AsOur_Hero__pf->bpv__Grenade_Number__pf) : (__Local__42)), false, true, 1, 324);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UWeapon_HeatWidget_C__pf1818634969::bpf__PlasmaGun_Widget__pf()
{
	FSlateBrush bpfv__K2Node_MakeStruct_SlateBrush__pf{};
	if(::IsValid(bpv__Pistl_Infinite__pf))
	{
		bpv__Pistl_Infinite__pf->UWidget::SetRenderOpacity(0.000000);
	}
	bpfv__K2Node_MakeStruct_SlateBrush__pf.ImageSize = FVector2D(2084.000000,2084.000000);
	uint8* __Local__44 = (uint8*)FMemory_Alloca(FMargin::StaticStruct()->GetStructureSize());
	FMargin::StaticStruct()->InitializeStruct(__Local__44);
	FMargin& __Local__43 = *reinterpret_cast<FMargin*>(__Local__44);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Margin = __Local__43;
	uint8* __Local__46 = (uint8*)FMemory_Alloca(FSlateColor::StaticStruct()->GetStructureSize());
	FSlateColor::StaticStruct()->InitializeStruct(__Local__46);
	FSlateColor& __Local__45 = *reinterpret_cast<FSlateColor*>(__Local__46);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__45), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.TintColor = __Local__45;
	(*(AccessPrivateProperty<UObject* >(&(bpfv__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = CastChecked<UObject>(CastChecked<UDynamicClass>(UWeapon_HeatWidget_C__pf1818634969::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ESlateBrushDrawType::Image;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Tiling = ESlateBrushTileType::NoTile;
	bpfv__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ESlateBrushMirrorType::NoMirror;
	if(::IsValid(bpv__Weapon_Image__pf))
	{
		bpv__Weapon_Image__pf->UImage::SetBrush(bpfv__K2Node_MakeStruct_SlateBrush__pf);
	}
	if(::IsValid(bpv__Weapon_Image__pf))
	{
		bpv__Weapon_Image__pf->UWidget::SetRenderScale(FVector2D(1.100000,1.500000));
	}
	if(::IsValid(bpv__HeatBar__pf))
	{
		bpv__HeatBar__pf->UWidget::SetRenderOpacity(1.000000);
	}
	if(::IsValid(bpv__Weapon_Image__pf))
	{
		bpv__Weapon_Image__pf->UWidget::SetRenderOpacity(1.000000);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void UWeapon_HeatWidget_C__pf1818634969::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/WeaponHud/Heat_New-02.Heat_New-02 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/WeaponHud/Infinity-01.Infinity-01 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/WeaponHud/Pistl_Symbol-01.Pistl_Symbol-01 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/grenade_Png.grenade_Png 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/WeaponHud/Uzi_Symbol-01.Uzi_Symbol-01 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Oruzje/Weapon_Skelet/Plasma_Cannon.Plasma_Cannon 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWeapon_HeatWidget_C__pf1818634969::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{64, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{81, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Hero/OurHero.OurHero_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UWeapon_HeatWidget_C__pf1818634969
{
	FRegisterHelper__UWeapon_HeatWidget_C__pf1818634969()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/Widgets/WeaponHud/Weapon_HeatWidget"), &UWeapon_HeatWidget_C__pf1818634969::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWeapon_HeatWidget_C__pf1818634969 Instance;
};
FRegisterHelper__UWeapon_HeatWidget_C__pf1818634969 FRegisterHelper__UWeapon_HeatWidget_C__pf1818634969::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
