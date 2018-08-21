#include "NativizedAssets.h"
#include "GameOver__pf534478733.h"
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
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Igra__pf2999911482.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"
#include "Runtime/UMG/Private/Animation/MovieScene2DTransformTemplate.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UGameOver_C__pf534478733::UGameOver_C__pf534478733(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UGameOver_C__pf534478733::StaticClass() == GetClass()))
	{
		UGameOver_C__pf534478733::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__1__pf = nullptr;
	bpv__Death__pf = nullptr;
	bpv__Button_0__pf = nullptr;
	bpv__Button_1__pf = nullptr;
	bpv__Button_2__pf = nullptr;
	bpv__Image_120__pf = nullptr;
	bpv__Image_123__pf = nullptr;
	bpv__Image_163__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGameOver_C__pf534478733::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGameOver_C__pf534478733::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UIgra_C__pf2999911482::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Death_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("1_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[0];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_2"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_2_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[1];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_1"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[2];
	__Local__6.ComponentPropertyName = FName(TEXT("Button_0"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(6);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__9->LayoutData.Offsets.Left = 1.812439f;
	__Local__9->LayoutData.Offsets.Top = -10.316101f;
	__Local__9->LayoutData.Offsets.Right = 0.511963f;
	__Local__9->LayoutData.Offsets.Bottom = 1.458252f;
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_123"));
	__Local__10->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__11->LayoutData.Offsets.Left = -208.000000f;
	__Local__11->LayoutData.Offsets.Top = 8.000000f;
	__Local__11->LayoutData.Offsets.Right = 369.869873f;
	__Local__11->LayoutData.Offsets.Bottom = 68.638641f;
	__Local__11->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__11->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__11->Parent = __Local__7;
	auto __Local__12 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_0"));
	__Local__12->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__12->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__12->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__12->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__12->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__15 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__12->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__16 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__16 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__8.Add(__Local__11);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__18->LayoutData.Offsets.Left = -264.000000f;
	__Local__18->LayoutData.Offsets.Top = 112.000000f;
	__Local__18->LayoutData.Offsets.Right = 482.267975f;
	__Local__18->LayoutData.Offsets.Bottom = 101.195000f;
	__Local__18->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__18->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__18->Parent = __Local__7;
	auto __Local__19 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_1"));
	__Local__19->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__19->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__19->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__19->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__8.Add(__Local__18);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__25->LayoutData.Offsets.Left = -252.000000f;
	__Local__25->LayoutData.Offsets.Top = 228.000000f;
	__Local__25->LayoutData.Offsets.Right = 482.649292f;
	__Local__25->LayoutData.Offsets.Bottom = 102.339005f;
	__Local__25->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__25->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__25->Parent = __Local__7;
	auto __Local__26 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_2"));
	__Local__26->WidgetStyle.Normal.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__26->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__26->WidgetStyle.Hovered.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__28 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__28 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__26->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__26->WidgetStyle.Pressed.ImageSize = FVector2D(833.000000, 208.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__26->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__8.Add(__Local__25);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__30->LayoutData.Offsets.Left = 780.000000f;
	__Local__30->LayoutData.Offsets.Top = 292.000000f;
	__Local__30->LayoutData.Offsets.Right = 388.955627f;
	__Local__30->LayoutData.Offsets.Bottom = 80.040039f;
	__Local__30->Parent = __Local__7;
	auto __Local__31 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_120"));
	__Local__31->Brush.ImageSize = FVector2D(2084.000000, 1250.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__31->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__31->Slot = __Local__30;
	__Local__31->RenderTransform.Scale = FVector2D(3.150000, 4.400000);
	__Local__30->Content = __Local__31;
	__Local__8.Add(__Local__30);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__7, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__33->LayoutData.Offsets.Left = -396.000000f;
	__Local__33->LayoutData.Offsets.Top = 240.000000f;
	__Local__33->LayoutData.Offsets.Right = 798.476257f;
	__Local__33->LayoutData.Offsets.Bottom = 180.140152f;
	__Local__33->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__33->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__33->Parent = __Local__7;
	auto __Local__34 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_163"));
	__Local__34->Brush.ImageSize = FVector2D(352.000000, 84.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__34->Slot = __Local__33;
	__Local__34->RenderTransform.Scale = FVector2D(1.000000, 1.100000);
	__Local__33->Content = __Local__34;
	__Local__8.Add(__Local__33);
	__Local__1->RootWidget = __Local__7;
	auto __Local__36 = NewObject<UMovieScene>(__Local__2, UMovieScene::StaticClass(), TEXT("Death"));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__36), UMovieScene::__PPO__Possessables() )));
	__Local__37 = TArray<FMovieScenePossessable> ();
	__Local__37.AddUninitialized(4);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__37.GetData(), 4);
	auto& __Local__38 = __Local__37[0];
	auto& __Local__39 = (*(AccessPrivateProperty<FGuid >(&(__Local__38), FMovieScenePossessable::__PPO__Guid() )));
	__Local__39 = FGuid(0xC28ABE0D, 0x4232C87F, 0xC6A6D598, 0x08D1CFC0);
	auto& __Local__40 = (*(AccessPrivateProperty<FString >(&(__Local__38), FMovieScenePossessable::__PPO__Name() )));
	__Local__40 = FString(TEXT("Image_123"));
	auto& __Local__41 = (*(AccessPrivateProperty<UClass* >(&(__Local__38), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__41 = UImage::StaticClass();
	auto& __Local__42 = __Local__37[1];
	auto& __Local__43 = (*(AccessPrivateProperty<FGuid >(&(__Local__42), FMovieScenePossessable::__PPO__Guid() )));
	__Local__43 = FGuid(0x18BBDD4A, 0x4D0E0DCA, 0xFDE5808B, 0x78F49611);
	auto& __Local__44 = (*(AccessPrivateProperty<FString >(&(__Local__42), FMovieScenePossessable::__PPO__Name() )));
	__Local__44 = FString(TEXT("Button_0"));
	auto& __Local__45 = (*(AccessPrivateProperty<UClass* >(&(__Local__42), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__45 = UButton::StaticClass();
	auto& __Local__46 = __Local__37[2];
	auto& __Local__47 = (*(AccessPrivateProperty<FGuid >(&(__Local__46), FMovieScenePossessable::__PPO__Guid() )));
	__Local__47 = FGuid(0xAB032651, 0x42AFEF3D, 0xC4EC608E, 0xA7CCCCF5);
	auto& __Local__48 = (*(AccessPrivateProperty<FString >(&(__Local__46), FMovieScenePossessable::__PPO__Name() )));
	__Local__48 = FString(TEXT("Button_1"));
	auto& __Local__49 = (*(AccessPrivateProperty<UClass* >(&(__Local__46), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__49 = UButton::StaticClass();
	auto& __Local__50 = __Local__37[3];
	auto& __Local__51 = (*(AccessPrivateProperty<FGuid >(&(__Local__50), FMovieScenePossessable::__PPO__Guid() )));
	__Local__51 = FGuid(0x3B674939, 0x48BD0D42, 0x96D170AE, 0x740CDED4);
	auto& __Local__52 = (*(AccessPrivateProperty<FString >(&(__Local__50), FMovieScenePossessable::__PPO__Name() )));
	__Local__52 = FString(TEXT("Button_2"));
	auto& __Local__53 = (*(AccessPrivateProperty<UClass* >(&(__Local__50), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__53 = UButton::StaticClass();
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__36), UMovieScene::__PPO__ObjectBindings() )));
	__Local__54 = TArray<FMovieSceneBinding> ();
	__Local__54.AddUninitialized(4);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__54.GetData(), 4);
	auto& __Local__55 = __Local__54[0];
	auto& __Local__56 = (*(AccessPrivateProperty<FGuid >(&(__Local__55), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__56 = FGuid(0xC28ABE0D, 0x4232C87F, 0xC6A6D598, 0x08D1CFC0);
	auto& __Local__57 = (*(AccessPrivateProperty<FString >(&(__Local__55), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__57 = FString(TEXT("Image_123"));
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__55), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__58 = TArray<UMovieSceneTrack*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__60 = (*(AccessPrivateProperty<FName >((__Local__59), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__60 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__61 = (*(AccessPrivateProperty<FString >((__Local__59), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__61 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__59), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__62 = TArray<UMovieSceneSection*> ();
	__Local__62.Reserve(1);
	auto __Local__63 = NewObject<UMovieSceneColorSection>(__Local__59, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__64 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__63), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__64), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__65 = TArray<FFrameNumber> ();
	__Local__65.Reserve(2);
	__Local__65.Add(FFrameNumber{});
	__Local__65.Add(FFrameNumber{});
	static TWeakObjectPtr<UProperty> __Local__67{};
	const UProperty* __Local__66 = __Local__67.Get();
	if (nullptr == __Local__66)
	{
		__Local__66 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumber"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__66);
		__Local__67 = __Local__66;
	}
	auto& __Local__68 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__65[1]), 0)));
	__Local__68 = 30000;
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__64), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__69 = TArray<FMovieSceneFloatValue> ();
	__Local__69.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__69.GetData(), 2);
	auto& __Local__70 = __Local__69[0];
	auto& __Local__71 = __Local__69[1];
	auto& __Local__72 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__63), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__72), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__73 = TArray<FFrameNumber> ();
	__Local__73.Reserve(2);
	__Local__73.Add(FFrameNumber{});
	__Local__73.Add(FFrameNumber{});
	auto& __Local__74 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__73[1]), 0)));
	__Local__74 = 30000;
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__72), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__75 = TArray<FMovieSceneFloatValue> ();
	__Local__75.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__75.GetData(), 2);
	auto& __Local__76 = __Local__75[0];
	auto& __Local__77 = __Local__75[1];
	auto& __Local__78 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__63), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__78), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__79 = TArray<FFrameNumber> ();
	__Local__79.Reserve(2);
	__Local__79.Add(FFrameNumber{});
	__Local__79.Add(FFrameNumber{});
	auto& __Local__80 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__79[1]), 0)));
	__Local__80 = 30000;
	auto& __Local__81 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__78), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__81 = TArray<FMovieSceneFloatValue> ();
	__Local__81.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__81.GetData(), 2);
	auto& __Local__82 = __Local__81[0];
	auto& __Local__83 = __Local__81[1];
	auto& __Local__84 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__63), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__84), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__85 = TArray<FFrameNumber> ();
	__Local__85.Reserve(2);
	__Local__85.Add(FFrameNumber{});
	__Local__85.Add(FFrameNumber{});
	auto& __Local__86 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__85[1]), 0)));
	__Local__86 = 30000;
	auto& __Local__87 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__84), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__87 = TArray<FMovieSceneFloatValue> ();
	__Local__87.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__87.GetData(), 2);
	auto& __Local__88 = __Local__87[0];
	auto& __Local__89 = __Local__87[1];
	__Local__89.Value = 1.000000f;
	__Local__63->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	auto __Local__90 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__63, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__90->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__63->Easing.EaseIn = __Local__90;
	auto __Local__91 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__63, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__91->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__63->Easing.EaseOut = __Local__91;
	__Local__63->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__92 = (*(AccessPrivateProperty<FGuid >((__Local__63), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__92 = FGuid(0x8D2E2E57, 0x4FB5F9C4, 0x10C3F9B5, 0xB1AF9793);
	__Local__62.Add(__Local__63);
	auto& __Local__93 = (*(AccessPrivateProperty<FGuid >((__Local__59), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__93 = FGuid(0x3C37360C, 0x40C3DAB2, 0x19709E8A, 0x887EAE51);
	__Local__58.Add(__Local__59);
	auto& __Local__94 = __Local__54[1];
	auto& __Local__95 = (*(AccessPrivateProperty<FGuid >(&(__Local__94), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__95 = FGuid(0x18BBDD4A, 0x4D0E0DCA, 0xFDE5808B, 0x78F49611);
	auto& __Local__96 = (*(AccessPrivateProperty<FString >(&(__Local__94), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__96 = FString(TEXT("Button_0"));
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__94), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__97 = TArray<UMovieSceneTrack*> ();
	__Local__97.Reserve(2);
	auto __Local__98 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_1"));
	auto& __Local__99 = (*(AccessPrivateProperty<FName >((__Local__98), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__99 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__100 = (*(AccessPrivateProperty<FString >((__Local__98), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__100 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__98), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__101 = TArray<UMovieSceneSection*> ();
	__Local__101.Reserve(1);
	auto __Local__102 = NewObject<UMovieSceneColorSection>(__Local__98, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__103 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__102), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__104 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__103), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__104 = TArray<FFrameNumber> ();
	__Local__104.Reserve(2);
	__Local__104.Add(FFrameNumber{});
	__Local__104.Add(FFrameNumber{});
	auto& __Local__105 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__104[1]), 0)));
	__Local__105 = 30000;
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__103), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__106 = TArray<FMovieSceneFloatValue> ();
	__Local__106.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__106.GetData(), 2);
	auto& __Local__107 = __Local__106[0];
	auto& __Local__108 = __Local__106[1];
	__Local__108.Value = 1.000000f;
	auto& __Local__109 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__102), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__109), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__110 = TArray<FFrameNumber> ();
	__Local__110.Reserve(2);
	__Local__110.Add(FFrameNumber{});
	__Local__110.Add(FFrameNumber{});
	auto& __Local__111 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__110[1]), 0)));
	__Local__111 = 30000;
	auto& __Local__112 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__109), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__112 = TArray<FMovieSceneFloatValue> ();
	__Local__112.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__112.GetData(), 2);
	auto& __Local__113 = __Local__112[0];
	auto& __Local__114 = __Local__112[1];
	__Local__114.Value = 1.000000f;
	auto& __Local__115 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__102), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__116 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__115), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__116 = TArray<FFrameNumber> ();
	__Local__116.Reserve(2);
	__Local__116.Add(FFrameNumber{});
	__Local__116.Add(FFrameNumber{});
	auto& __Local__117 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__116[1]), 0)));
	__Local__117 = 30000;
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__115), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__118 = TArray<FMovieSceneFloatValue> ();
	__Local__118.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__118.GetData(), 2);
	auto& __Local__119 = __Local__118[0];
	auto& __Local__120 = __Local__118[1];
	__Local__120.Value = 1.000000f;
	auto& __Local__121 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__102), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__122 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__121), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__122 = TArray<FFrameNumber> ();
	__Local__122.Reserve(2);
	__Local__122.Add(FFrameNumber{});
	__Local__122.Add(FFrameNumber{});
	auto& __Local__123 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__122[1]), 0)));
	__Local__123 = 30000;
	auto& __Local__124 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__121), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__124 = TArray<FMovieSceneFloatValue> ();
	__Local__124.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__124.GetData(), 2);
	auto& __Local__125 = __Local__124[0];
	auto& __Local__126 = __Local__124[1];
	__Local__126.Value = 1.000000f;
	__Local__102->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	auto __Local__127 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__102, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__127->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__102->Easing.EaseIn = __Local__127;
	auto __Local__128 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__102, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__128->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__102->Easing.EaseOut = __Local__128;
	__Local__102->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__129 = (*(AccessPrivateProperty<FGuid >((__Local__102), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__129 = FGuid(0x06A666D0, 0x474F6FB2, 0xE4F5D4B9, 0x36549346);
	__Local__101.Add(__Local__102);
	auto& __Local__130 = (*(AccessPrivateProperty<FGuid >((__Local__98), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__130 = FGuid(0x0E3CC16F, 0x49FBD25F, 0x34FC87BC, 0xF39AAA99);
	__Local__97.Add(__Local__98);
	auto __Local__131 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_2"));
	auto& __Local__132 = (*(AccessPrivateProperty<FName >((__Local__131), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__132 = FName(TEXT("BackgroundColor"));
	auto& __Local__133 = (*(AccessPrivateProperty<FString >((__Local__131), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__133 = FString(TEXT("BackgroundColor"));
	auto& __Local__134 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__131), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__134 = TArray<UMovieSceneSection*> ();
	__Local__134.Reserve(1);
	auto __Local__135 = NewObject<UMovieSceneColorSection>(__Local__131, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_2"));
	auto& __Local__136 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__135), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__137 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__136), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__137 = TArray<FFrameNumber> ();
	__Local__137.Reserve(2);
	__Local__137.Add(FFrameNumber{});
	__Local__137.Add(FFrameNumber{});
	auto& __Local__138 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__137[1]), 0)));
	__Local__138 = 30000;
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__136), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__139 = TArray<FMovieSceneFloatValue> ();
	__Local__139.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__139.GetData(), 2);
	auto& __Local__140 = __Local__139[0];
	auto& __Local__141 = __Local__139[1];
	__Local__141.Value = 1.000000f;
	auto& __Local__142 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__135), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__143 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__142), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__143 = TArray<FFrameNumber> ();
	__Local__143.Reserve(2);
	__Local__143.Add(FFrameNumber{});
	__Local__143.Add(FFrameNumber{});
	auto& __Local__144 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__143[1]), 0)));
	__Local__144 = 30000;
	auto& __Local__145 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__142), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__145 = TArray<FMovieSceneFloatValue> ();
	__Local__145.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__145.GetData(), 2);
	auto& __Local__146 = __Local__145[0];
	auto& __Local__147 = __Local__145[1];
	__Local__147.Value = 1.000000f;
	auto& __Local__148 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__135), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__149 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__148), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__149 = TArray<FFrameNumber> ();
	__Local__149.Reserve(2);
	__Local__149.Add(FFrameNumber{});
	__Local__149.Add(FFrameNumber{});
	auto& __Local__150 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__149[1]), 0)));
	__Local__150 = 30000;
	auto& __Local__151 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__148), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__151 = TArray<FMovieSceneFloatValue> ();
	__Local__151.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__151.GetData(), 2);
	auto& __Local__152 = __Local__151[0];
	auto& __Local__153 = __Local__151[1];
	__Local__153.Value = 1.000000f;
	auto& __Local__154 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__135), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__154), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__155 = TArray<FFrameNumber> ();
	__Local__155.Reserve(2);
	__Local__155.Add(FFrameNumber{});
	__Local__155.Add(FFrameNumber{});
	auto& __Local__156 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__155[1]), 0)));
	__Local__156 = 30000;
	auto& __Local__157 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__154), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__157 = TArray<FMovieSceneFloatValue> ();
	__Local__157.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__157.GetData(), 2);
	auto& __Local__158 = __Local__157[0];
	auto& __Local__159 = __Local__157[1];
	__Local__159.Value = 1.000000f;
	__Local__135->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	auto __Local__160 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__135, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__160->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__135->Easing.EaseIn = __Local__160;
	auto __Local__161 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__135, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__161->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__135->Easing.EaseOut = __Local__161;
	__Local__135->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__162 = (*(AccessPrivateProperty<FGuid >((__Local__135), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__162 = FGuid(0xEF5EA530, 0x462B4A8C, 0xD50C28B4, 0x39FF6177);
	__Local__134.Add(__Local__135);
	auto& __Local__163 = (*(AccessPrivateProperty<FGuid >((__Local__131), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__163 = FGuid(0xE5C2DB3B, 0x47ABC888, 0xB869B391, 0x07E961CA);
	__Local__97.Add(__Local__131);
	auto& __Local__164 = __Local__54[2];
	auto& __Local__165 = (*(AccessPrivateProperty<FGuid >(&(__Local__164), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__165 = FGuid(0xAB032651, 0x42AFEF3D, 0xC4EC608E, 0xA7CCCCF5);
	auto& __Local__166 = (*(AccessPrivateProperty<FString >(&(__Local__164), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__166 = FString(TEXT("Button_1"));
	auto& __Local__167 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__164), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__167 = TArray<UMovieSceneTrack*> ();
	__Local__167.Reserve(2);
	auto __Local__168 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_3"));
	auto& __Local__169 = (*(AccessPrivateProperty<FName >((__Local__168), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__169 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__170 = (*(AccessPrivateProperty<FString >((__Local__168), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__170 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__171 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__168), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__171 = TArray<UMovieSceneSection*> ();
	__Local__171.Reserve(1);
	auto __Local__172 = NewObject<UMovieSceneColorSection>(__Local__168, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_3"));
	auto& __Local__173 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__172), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__174 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__173), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__174 = TArray<FFrameNumber> ();
	__Local__174.Reserve(2);
	__Local__174.Add(FFrameNumber{});
	__Local__174.Add(FFrameNumber{});
	auto& __Local__175 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__174[1]), 0)));
	__Local__175 = 30000;
	auto& __Local__176 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__173), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__176 = TArray<FMovieSceneFloatValue> ();
	__Local__176.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__176.GetData(), 2);
	auto& __Local__177 = __Local__176[0];
	auto& __Local__178 = __Local__176[1];
	__Local__178.Value = 1.000000f;
	auto& __Local__179 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__172), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__180 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__179), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__180 = TArray<FFrameNumber> ();
	__Local__180.Reserve(2);
	__Local__180.Add(FFrameNumber{});
	__Local__180.Add(FFrameNumber{});
	auto& __Local__181 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__180[1]), 0)));
	__Local__181 = 30000;
	auto& __Local__182 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__179), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__182 = TArray<FMovieSceneFloatValue> ();
	__Local__182.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__182.GetData(), 2);
	auto& __Local__183 = __Local__182[0];
	auto& __Local__184 = __Local__182[1];
	__Local__184.Value = 1.000000f;
	auto& __Local__185 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__172), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__186 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__185), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__186 = TArray<FFrameNumber> ();
	__Local__186.Reserve(2);
	__Local__186.Add(FFrameNumber{});
	__Local__186.Add(FFrameNumber{});
	auto& __Local__187 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__186[1]), 0)));
	__Local__187 = 30000;
	auto& __Local__188 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__185), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__188 = TArray<FMovieSceneFloatValue> ();
	__Local__188.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__188.GetData(), 2);
	auto& __Local__189 = __Local__188[0];
	auto& __Local__190 = __Local__188[1];
	__Local__190.Value = 1.000000f;
	auto& __Local__191 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__172), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__192 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__191), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__192 = TArray<FFrameNumber> ();
	__Local__192.Reserve(2);
	__Local__192.Add(FFrameNumber{});
	__Local__192.Add(FFrameNumber{});
	auto& __Local__193 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__192[1]), 0)));
	__Local__193 = 30000;
	auto& __Local__194 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__191), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__194 = TArray<FMovieSceneFloatValue> ();
	__Local__194.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__194.GetData(), 2);
	auto& __Local__195 = __Local__194[0];
	auto& __Local__196 = __Local__194[1];
	__Local__196.Value = 1.000000f;
	__Local__172->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	auto __Local__197 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__172, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__197->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__172->Easing.EaseIn = __Local__197;
	auto __Local__198 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__172, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__198->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__172->Easing.EaseOut = __Local__198;
	__Local__172->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__199 = (*(AccessPrivateProperty<FGuid >((__Local__172), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__199 = FGuid(0x1278E388, 0x4A6E6AED, 0x705B90A4, 0x55D1BDEB);
	__Local__171.Add(__Local__172);
	auto& __Local__200 = (*(AccessPrivateProperty<FGuid >((__Local__168), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__200 = FGuid(0xA325A6E4, 0x4FD6DB1B, 0xA4DDACB1, 0x51633347);
	__Local__167.Add(__Local__168);
	auto __Local__201 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_4"));
	auto& __Local__202 = (*(AccessPrivateProperty<FName >((__Local__201), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__202 = FName(TEXT("BackgroundColor"));
	auto& __Local__203 = (*(AccessPrivateProperty<FString >((__Local__201), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__203 = FString(TEXT("BackgroundColor"));
	auto& __Local__204 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__201), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__204 = TArray<UMovieSceneSection*> ();
	__Local__204.Reserve(1);
	auto __Local__205 = NewObject<UMovieSceneColorSection>(__Local__201, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_4"));
	auto& __Local__206 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__205), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__207 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__206), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__207 = TArray<FFrameNumber> ();
	__Local__207.Reserve(2);
	__Local__207.Add(FFrameNumber{});
	__Local__207.Add(FFrameNumber{});
	auto& __Local__208 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__207[1]), 0)));
	__Local__208 = 30000;
	auto& __Local__209 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__206), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__209 = TArray<FMovieSceneFloatValue> ();
	__Local__209.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__209.GetData(), 2);
	auto& __Local__210 = __Local__209[0];
	auto& __Local__211 = __Local__209[1];
	__Local__211.Value = 1.000000f;
	auto& __Local__212 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__205), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__213 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__212), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__213 = TArray<FFrameNumber> ();
	__Local__213.Reserve(2);
	__Local__213.Add(FFrameNumber{});
	__Local__213.Add(FFrameNumber{});
	auto& __Local__214 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__213[1]), 0)));
	__Local__214 = 30000;
	auto& __Local__215 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__212), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__215 = TArray<FMovieSceneFloatValue> ();
	__Local__215.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__215.GetData(), 2);
	auto& __Local__216 = __Local__215[0];
	auto& __Local__217 = __Local__215[1];
	__Local__217.Value = 1.000000f;
	auto& __Local__218 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__205), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__219 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__218), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__219 = TArray<FFrameNumber> ();
	__Local__219.Reserve(2);
	__Local__219.Add(FFrameNumber{});
	__Local__219.Add(FFrameNumber{});
	auto& __Local__220 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__219[1]), 0)));
	__Local__220 = 30000;
	auto& __Local__221 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__218), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__221 = TArray<FMovieSceneFloatValue> ();
	__Local__221.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__221.GetData(), 2);
	auto& __Local__222 = __Local__221[0];
	auto& __Local__223 = __Local__221[1];
	__Local__223.Value = 1.000000f;
	auto& __Local__224 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__205), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__225 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__224), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__225 = TArray<FFrameNumber> ();
	__Local__225.Reserve(2);
	__Local__225.Add(FFrameNumber{});
	__Local__225.Add(FFrameNumber{});
	auto& __Local__226 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__225[1]), 0)));
	__Local__226 = 30000;
	auto& __Local__227 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__224), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__227 = TArray<FMovieSceneFloatValue> ();
	__Local__227.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__227.GetData(), 2);
	auto& __Local__228 = __Local__227[0];
	auto& __Local__229 = __Local__227[1];
	__Local__229.Value = 1.000000f;
	__Local__205->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	auto __Local__230 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__205, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__230->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__205->Easing.EaseIn = __Local__230;
	auto __Local__231 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__205, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__231->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__205->Easing.EaseOut = __Local__231;
	__Local__205->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__232 = (*(AccessPrivateProperty<FGuid >((__Local__205), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__232 = FGuid(0x32C846E8, 0x428558C0, 0xA2F6DCA9, 0x8AFFD55D);
	__Local__204.Add(__Local__205);
	auto& __Local__233 = (*(AccessPrivateProperty<FGuid >((__Local__201), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__233 = FGuid(0x91923528, 0x4B39CA63, 0x11D9199A, 0xD40E0A8A);
	__Local__167.Add(__Local__201);
	auto& __Local__234 = __Local__54[3];
	auto& __Local__235 = (*(AccessPrivateProperty<FGuid >(&(__Local__234), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__235 = FGuid(0x3B674939, 0x48BD0D42, 0x96D170AE, 0x740CDED4);
	auto& __Local__236 = (*(AccessPrivateProperty<FString >(&(__Local__234), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__236 = FString(TEXT("Button_2"));
	auto& __Local__237 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__234), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__237 = TArray<UMovieSceneTrack*> ();
	__Local__237.Reserve(2);
	auto __Local__238 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_5"));
	auto& __Local__239 = (*(AccessPrivateProperty<FName >((__Local__238), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__239 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__240 = (*(AccessPrivateProperty<FString >((__Local__238), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__240 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__241 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__238), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__241 = TArray<UMovieSceneSection*> ();
	__Local__241.Reserve(1);
	auto __Local__242 = NewObject<UMovieSceneColorSection>(__Local__238, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__243 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__242), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__244 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__243), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__244 = TArray<FFrameNumber> ();
	__Local__244.Reserve(2);
	__Local__244.Add(FFrameNumber{});
	__Local__244.Add(FFrameNumber{});
	auto& __Local__245 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__244[1]), 0)));
	__Local__245 = 33000;
	auto& __Local__246 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__243), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__246 = TArray<FMovieSceneFloatValue> ();
	__Local__246.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__246.GetData(), 2);
	auto& __Local__247 = __Local__246[0];
	__Local__247.Value = 1.000000f;
	auto& __Local__248 = __Local__246[1];
	__Local__248.Value = 1.000000f;
	auto& __Local__249 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__242), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__250 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__249), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__250 = TArray<FFrameNumber> ();
	__Local__250.Reserve(2);
	__Local__250.Add(FFrameNumber{});
	__Local__250.Add(FFrameNumber{});
	auto& __Local__251 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__250[1]), 0)));
	__Local__251 = 33000;
	auto& __Local__252 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__249), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__252 = TArray<FMovieSceneFloatValue> ();
	__Local__252.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__252.GetData(), 2);
	auto& __Local__253 = __Local__252[0];
	__Local__253.Value = 1.000000f;
	auto& __Local__254 = __Local__252[1];
	__Local__254.Value = 1.000000f;
	auto& __Local__255 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__242), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__256 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__255), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__256 = TArray<FFrameNumber> ();
	__Local__256.Reserve(2);
	__Local__256.Add(FFrameNumber{});
	__Local__256.Add(FFrameNumber{});
	auto& __Local__257 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__256[1]), 0)));
	__Local__257 = 33000;
	auto& __Local__258 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__255), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__258 = TArray<FMovieSceneFloatValue> ();
	__Local__258.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__258.GetData(), 2);
	auto& __Local__259 = __Local__258[0];
	__Local__259.Value = 1.000000f;
	auto& __Local__260 = __Local__258[1];
	__Local__260.Value = 1.000000f;
	auto& __Local__261 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__242), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__262 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__261), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__262 = TArray<FFrameNumber> ();
	__Local__262.Reserve(2);
	__Local__262.Add(FFrameNumber{});
	__Local__262.Add(FFrameNumber{});
	auto& __Local__263 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__262[1]), 0)));
	__Local__263 = 33000;
	auto& __Local__264 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__261), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__264 = TArray<FMovieSceneFloatValue> ();
	__Local__264.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__264.GetData(), 2);
	auto& __Local__265 = __Local__264[0];
	auto& __Local__266 = __Local__264[1];
	__Local__266.Value = 1.000000f;
	auto __Local__267 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__242, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__267->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__242->Easing.EaseIn = __Local__267;
	auto __Local__268 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__242, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__268->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__242->Easing.EaseOut = __Local__268;
	__Local__242->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(33001)));
	auto& __Local__269 = (*(AccessPrivateProperty<FGuid >((__Local__242), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__269 = FGuid(0x9D404B44, 0x482DD099, 0x2A8D948C, 0xDEEEAC39);
	__Local__241.Add(__Local__242);
	auto& __Local__270 = (*(AccessPrivateProperty<FGuid >((__Local__238), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__270 = FGuid(0xB96BAC1D, 0x4E1C9D76, 0x1B17AA8E, 0x9BEBC2C7);
	__Local__237.Add(__Local__238);
	auto __Local__271 = NewObject<UMovieSceneColorTrack>(__Local__36, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_6"));
	auto& __Local__272 = (*(AccessPrivateProperty<FName >((__Local__271), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__272 = FName(TEXT("BackgroundColor"));
	auto& __Local__273 = (*(AccessPrivateProperty<FString >((__Local__271), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__273 = FString(TEXT("BackgroundColor"));
	auto& __Local__274 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__271), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__274 = TArray<UMovieSceneSection*> ();
	__Local__274.Reserve(1);
	auto __Local__275 = NewObject<UMovieSceneColorSection>(__Local__271, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__276 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__275), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__277 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__276), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__277 = TArray<FFrameNumber> ();
	__Local__277.Reserve(1);
	__Local__277.Add(FFrameNumber{});
	auto& __Local__278 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__276), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__278 = TArray<FMovieSceneFloatValue> ();
	__Local__278.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__278.GetData(), 1);
	auto& __Local__279 = __Local__278[0];
	__Local__279.Value = 1.000000f;
	auto& __Local__280 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__275), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__281 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__280), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__281 = TArray<FFrameNumber> ();
	__Local__281.Reserve(1);
	__Local__281.Add(FFrameNumber{});
	auto& __Local__282 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__280), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__282 = TArray<FMovieSceneFloatValue> ();
	__Local__282.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__282.GetData(), 1);
	auto& __Local__283 = __Local__282[0];
	__Local__283.Value = 1.000000f;
	auto& __Local__284 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__275), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__285 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__284), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__285 = TArray<FFrameNumber> ();
	__Local__285.Reserve(1);
	__Local__285.Add(FFrameNumber{});
	auto& __Local__286 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__284), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__286 = TArray<FMovieSceneFloatValue> ();
	__Local__286.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__286.GetData(), 1);
	auto& __Local__287 = __Local__286[0];
	__Local__287.Value = 1.000000f;
	auto& __Local__288 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__275), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__289 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__288), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__289 = TArray<FFrameNumber> ();
	__Local__289.Reserve(2);
	__Local__289.Add(FFrameNumber{});
	__Local__289.Add(FFrameNumber{});
	auto& __Local__290 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__289[1]), 0)));
	__Local__290 = 33000;
	auto& __Local__291 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__288), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__291 = TArray<FMovieSceneFloatValue> ();
	__Local__291.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__291.GetData(), 2);
	auto& __Local__292 = __Local__291[0];
	auto& __Local__293 = __Local__291[1];
	__Local__293.Value = 1.000000f;
	auto __Local__294 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__275, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__294->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__275->Easing.EaseIn = __Local__294;
	auto __Local__295 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__275, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__295->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__275->Easing.EaseOut = __Local__295;
	__Local__275->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(33001)));
	auto& __Local__296 = (*(AccessPrivateProperty<FGuid >((__Local__275), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__296 = FGuid(0x5AF9B1EF, 0x46724C7E, 0x81DC06A1, 0x8A8431FC);
	__Local__274.Add(__Local__275);
	auto& __Local__297 = (*(AccessPrivateProperty<FGuid >((__Local__271), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__297 = FGuid(0xEC8001E8, 0x48AAD0CC, 0x264BE5B6, 0x304FBF57);
	__Local__237.Add(__Local__271);
	auto& __Local__298 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__36), UMovieScene::__PPO__PlaybackRange() )));
	__Local__298 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(33001)));
	auto& __Local__299 = (*(AccessPrivateProperty<FFrameRate >((__Local__36), UMovieScene::__PPO__DisplayRate() )));
	static TWeakObjectPtr<UProperty> __Local__301{};
	const UProperty* __Local__300 = __Local__301.Get();
	if (nullptr == __Local__300)
	{
		__Local__300 = (FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject")))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__300);
		__Local__301 = __Local__300;
	}
	auto& __Local__302 = (*(__Local__300->ContainerPtrToValuePtr<int32 >(&(__Local__299), 0)));
	__Local__302 = 20;
	auto& __Local__303 = (*(AccessPrivateProperty<FGuid >((__Local__36), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__303 = FGuid(0x00E15B17, 0x4582510E, 0x495BA194, 0x978209BA);
	__Local__2->MovieScene = __Local__36;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(4);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 4);
	auto& __Local__304 = __Local__2->AnimationBindings[0];
	__Local__304.WidgetName = FName(TEXT("Image_123"));
	__Local__304.AnimationGuid = FGuid(0xC28ABE0D, 0x4232C87F, 0xC6A6D598, 0x08D1CFC0);
	auto& __Local__305 = __Local__2->AnimationBindings[1];
	__Local__305.WidgetName = FName(TEXT("Button_0"));
	__Local__305.AnimationGuid = FGuid(0x18BBDD4A, 0x4D0E0DCA, 0xFDE5808B, 0x78F49611);
	auto& __Local__306 = __Local__2->AnimationBindings[2];
	__Local__306.WidgetName = FName(TEXT("Button_1"));
	__Local__306.AnimationGuid = FGuid(0xAB032651, 0x42AFEF3D, 0xC4EC608E, 0xA7CCCCF5);
	auto& __Local__307 = __Local__2->AnimationBindings[3];
	__Local__307.WidgetName = FName(TEXT("Button_2"));
	__Local__307.AnimationGuid = FGuid(0x3B674939, 0x48BD0D42, 0x96D170AE, 0x740CDED4);
	auto& __Local__308 = (*(AccessPrivateProperty<bool >((__Local__2), UWidgetAnimation::__PPO__bLegacyFinishOnStop() )));
	__Local__308 = false;
	auto& __Local__309 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__2->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__309 = {};
	__Local__309.Reserve(7);
	static TWeakObjectPtr<UProperty> __Local__312{};
	const UProperty* __Local__311 = __Local__312.Get();
	if (nullptr == __Local__311)
	{
		__Local__311 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__311);
		__Local__312 = __Local__311;
	}
	FScriptMapHelper __Local__310(CastChecked<UMapProperty>(__Local__311), &__Local__309);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__313 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__314 = (*(AccessPrivateProperty<uint32 >(&(__Local__313.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__314 = 0;
	auto& __Local__315 = (*(AccessPrivateProperty<FGuid >(&(__Local__313.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__315 = FGuid(0xC28ABE0D, 0x4232C87F, 0xC6A6D598, 0x08D1CFC0);
	auto& __Local__316 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__313.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__317 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__316), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__317 = TArray<int32> ();
	__Local__317.Reserve(1);
	__Local__317.Add(0);
	auto& __Local__318 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__316), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__318 = TArray<FMovieSceneSegment> ();
	__Local__318.Reserve(1);
	__Local__318.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__319 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__313.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__319 = __Local__59;
	auto& __Local__320 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__313.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__320 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__320.Reserve(1);
	__Local__320.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__321 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__321 = TArray<FFrameNumber> ();
	__Local__321.Reserve(2);
	__Local__321.Add(FFrameNumber{});
	__Local__321.Add(FFrameNumber{});
	auto& __Local__322 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__321[1]), 0)));
	__Local__322 = 30000;
	auto& __Local__323 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__323 = TArray<FMovieSceneFloatValue> ();
	__Local__323.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__323.GetData(), 2);
	auto& __Local__324 = __Local__323[0];
	auto& __Local__325 = __Local__323[1];
	auto& __Local__326 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__326 = TArray<FFrameNumber> ();
	__Local__326.Reserve(2);
	__Local__326.Add(FFrameNumber{});
	__Local__326.Add(FFrameNumber{});
	auto& __Local__327 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__326[1]), 0)));
	__Local__327 = 30000;
	auto& __Local__328 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__328 = TArray<FMovieSceneFloatValue> ();
	__Local__328.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__328.GetData(), 2);
	auto& __Local__329 = __Local__328[0];
	auto& __Local__330 = __Local__328[1];
	auto& __Local__331 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__331 = TArray<FFrameNumber> ();
	__Local__331.Reserve(2);
	__Local__331.Add(FFrameNumber{});
	__Local__331.Add(FFrameNumber{});
	auto& __Local__332 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__331[1]), 0)));
	__Local__332 = 30000;
	auto& __Local__333 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__333 = TArray<FMovieSceneFloatValue> ();
	__Local__333.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__333.GetData(), 2);
	auto& __Local__334 = __Local__333[0];
	auto& __Local__335 = __Local__333[1];
	auto& __Local__336 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__336 = TArray<FFrameNumber> ();
	__Local__336.Reserve(2);
	__Local__336.Add(FFrameNumber{});
	__Local__336.Add(FFrameNumber{});
	auto& __Local__337 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__336[1]), 0)));
	__Local__337 = 30000;
	auto& __Local__338 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__338 = TArray<FMovieSceneFloatValue> ();
	__Local__338.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__338.GetData(), 2);
	auto& __Local__339 = __Local__338[0];
	auto& __Local__340 = __Local__338[1];
	__Local__340.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__341 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__341.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__341.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__342 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__320[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__342 = __Local__63;
	static TWeakObjectPtr<UProperty> __Local__344{};
	const UProperty* __Local__343 = __Local__344.Get();
	if (nullptr == __Local__343)
	{
		__Local__343 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPreroll")));
		check(__Local__343);
		__Local__344 = __Local__343;
	}
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__313.Value), false, 0));
	static TWeakObjectPtr<UProperty> __Local__346{};
	const UProperty* __Local__345 = __Local__346.Get();
	if (nullptr == __Local__345)
	{
		__Local__345 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPostroll")));
		check(__Local__345);
		__Local__346 = __Local__345;
	}
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__313.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__347 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__348 = (*(AccessPrivateProperty<uint32 >(&(__Local__347.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__348 = 1;
	auto& __Local__349 = (*(AccessPrivateProperty<FGuid >(&(__Local__347.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__349 = FGuid(0x18BBDD4A, 0x4D0E0DCA, 0xFDE5808B, 0x78F49611);
	auto& __Local__350 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__347.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__351 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__350), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__351 = TArray<int32> ();
	__Local__351.Reserve(1);
	__Local__351.Add(0);
	auto& __Local__352 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__350), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__352 = TArray<FMovieSceneSegment> ();
	__Local__352.Reserve(1);
	__Local__352.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__353 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__347.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__353 = __Local__98;
	auto& __Local__354 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__347.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__354 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__354.Reserve(1);
	__Local__354.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__355 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__355 = TArray<FFrameNumber> ();
	__Local__355.Reserve(2);
	__Local__355.Add(FFrameNumber{});
	__Local__355.Add(FFrameNumber{});
	auto& __Local__356 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__355[1]), 0)));
	__Local__356 = 30000;
	auto& __Local__357 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__357 = TArray<FMovieSceneFloatValue> ();
	__Local__357.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__357.GetData(), 2);
	auto& __Local__358 = __Local__357[0];
	auto& __Local__359 = __Local__357[1];
	__Local__359.Value = 1.000000f;
	auto& __Local__360 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__360 = TArray<FFrameNumber> ();
	__Local__360.Reserve(2);
	__Local__360.Add(FFrameNumber{});
	__Local__360.Add(FFrameNumber{});
	auto& __Local__361 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__360[1]), 0)));
	__Local__361 = 30000;
	auto& __Local__362 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__362 = TArray<FMovieSceneFloatValue> ();
	__Local__362.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__362.GetData(), 2);
	auto& __Local__363 = __Local__362[0];
	auto& __Local__364 = __Local__362[1];
	__Local__364.Value = 1.000000f;
	auto& __Local__365 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__365 = TArray<FFrameNumber> ();
	__Local__365.Reserve(2);
	__Local__365.Add(FFrameNumber{});
	__Local__365.Add(FFrameNumber{});
	auto& __Local__366 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__365[1]), 0)));
	__Local__366 = 30000;
	auto& __Local__367 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__367 = TArray<FMovieSceneFloatValue> ();
	__Local__367.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__367.GetData(), 2);
	auto& __Local__368 = __Local__367[0];
	auto& __Local__369 = __Local__367[1];
	__Local__369.Value = 1.000000f;
	auto& __Local__370 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__370 = TArray<FFrameNumber> ();
	__Local__370.Reserve(2);
	__Local__370.Add(FFrameNumber{});
	__Local__370.Add(FFrameNumber{});
	auto& __Local__371 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__370[1]), 0)));
	__Local__371 = 30000;
	auto& __Local__372 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__372 = TArray<FMovieSceneFloatValue> ();
	__Local__372.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__372.GetData(), 2);
	auto& __Local__373 = __Local__372[0];
	auto& __Local__374 = __Local__372[1];
	__Local__374.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__375 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__375.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__375.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__376 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__354[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__376 = __Local__102;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__347.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__347.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__377 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__378 = (*(AccessPrivateProperty<uint32 >(&(__Local__377.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__378 = 2;
	auto& __Local__379 = (*(AccessPrivateProperty<FGuid >(&(__Local__377.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__379 = FGuid(0x18BBDD4A, 0x4D0E0DCA, 0xFDE5808B, 0x78F49611);
	auto& __Local__380 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__377.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__381 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__380), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__381 = TArray<int32> ();
	__Local__381.Reserve(1);
	__Local__381.Add(0);
	auto& __Local__382 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__380), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__382 = TArray<FMovieSceneSegment> ();
	__Local__382.Reserve(1);
	__Local__382.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__383 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__377.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__383 = __Local__131;
	auto& __Local__384 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__377.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__384 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__384.Reserve(1);
	__Local__384.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__385 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__385 = TArray<FFrameNumber> ();
	__Local__385.Reserve(2);
	__Local__385.Add(FFrameNumber{});
	__Local__385.Add(FFrameNumber{});
	auto& __Local__386 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__385[1]), 0)));
	__Local__386 = 30000;
	auto& __Local__387 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__387 = TArray<FMovieSceneFloatValue> ();
	__Local__387.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__387.GetData(), 2);
	auto& __Local__388 = __Local__387[0];
	auto& __Local__389 = __Local__387[1];
	__Local__389.Value = 1.000000f;
	auto& __Local__390 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__390 = TArray<FFrameNumber> ();
	__Local__390.Reserve(2);
	__Local__390.Add(FFrameNumber{});
	__Local__390.Add(FFrameNumber{});
	auto& __Local__391 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__390[1]), 0)));
	__Local__391 = 30000;
	auto& __Local__392 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__392 = TArray<FMovieSceneFloatValue> ();
	__Local__392.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__392.GetData(), 2);
	auto& __Local__393 = __Local__392[0];
	auto& __Local__394 = __Local__392[1];
	__Local__394.Value = 1.000000f;
	auto& __Local__395 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__395 = TArray<FFrameNumber> ();
	__Local__395.Reserve(2);
	__Local__395.Add(FFrameNumber{});
	__Local__395.Add(FFrameNumber{});
	auto& __Local__396 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__395[1]), 0)));
	__Local__396 = 30000;
	auto& __Local__397 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__397 = TArray<FMovieSceneFloatValue> ();
	__Local__397.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__397.GetData(), 2);
	auto& __Local__398 = __Local__397[0];
	auto& __Local__399 = __Local__397[1];
	__Local__399.Value = 1.000000f;
	auto& __Local__400 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__400 = TArray<FFrameNumber> ();
	__Local__400.Reserve(2);
	__Local__400.Add(FFrameNumber{});
	__Local__400.Add(FFrameNumber{});
	auto& __Local__401 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__400[1]), 0)));
	__Local__401 = 30000;
	auto& __Local__402 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__402 = TArray<FMovieSceneFloatValue> ();
	__Local__402.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__402.GetData(), 2);
	auto& __Local__403 = __Local__402[0];
	auto& __Local__404 = __Local__402[1];
	__Local__404.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__405 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__405.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__405.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__406 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__384[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__406 = __Local__135;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__377.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__377.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__407 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__408 = (*(AccessPrivateProperty<uint32 >(&(__Local__407.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__408 = 3;
	auto& __Local__409 = (*(AccessPrivateProperty<FGuid >(&(__Local__407.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__409 = FGuid(0xAB032651, 0x42AFEF3D, 0xC4EC608E, 0xA7CCCCF5);
	auto& __Local__410 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__407.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__411 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__410), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__411 = TArray<int32> ();
	__Local__411.Reserve(1);
	__Local__411.Add(0);
	auto& __Local__412 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__410), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__412 = TArray<FMovieSceneSegment> ();
	__Local__412.Reserve(1);
	__Local__412.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__413 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__407.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__413 = __Local__168;
	auto& __Local__414 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__407.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__414 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__414.Reserve(1);
	__Local__414.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__415 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__415 = TArray<FFrameNumber> ();
	__Local__415.Reserve(2);
	__Local__415.Add(FFrameNumber{});
	__Local__415.Add(FFrameNumber{});
	auto& __Local__416 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__415[1]), 0)));
	__Local__416 = 30000;
	auto& __Local__417 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__417 = TArray<FMovieSceneFloatValue> ();
	__Local__417.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__417.GetData(), 2);
	auto& __Local__418 = __Local__417[0];
	auto& __Local__419 = __Local__417[1];
	__Local__419.Value = 1.000000f;
	auto& __Local__420 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__420 = TArray<FFrameNumber> ();
	__Local__420.Reserve(2);
	__Local__420.Add(FFrameNumber{});
	__Local__420.Add(FFrameNumber{});
	auto& __Local__421 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__420[1]), 0)));
	__Local__421 = 30000;
	auto& __Local__422 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__422 = TArray<FMovieSceneFloatValue> ();
	__Local__422.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__422.GetData(), 2);
	auto& __Local__423 = __Local__422[0];
	auto& __Local__424 = __Local__422[1];
	__Local__424.Value = 1.000000f;
	auto& __Local__425 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__425 = TArray<FFrameNumber> ();
	__Local__425.Reserve(2);
	__Local__425.Add(FFrameNumber{});
	__Local__425.Add(FFrameNumber{});
	auto& __Local__426 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__425[1]), 0)));
	__Local__426 = 30000;
	auto& __Local__427 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__427 = TArray<FMovieSceneFloatValue> ();
	__Local__427.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__427.GetData(), 2);
	auto& __Local__428 = __Local__427[0];
	auto& __Local__429 = __Local__427[1];
	__Local__429.Value = 1.000000f;
	auto& __Local__430 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__430 = TArray<FFrameNumber> ();
	__Local__430.Reserve(2);
	__Local__430.Add(FFrameNumber{});
	__Local__430.Add(FFrameNumber{});
	auto& __Local__431 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__430[1]), 0)));
	__Local__431 = 30000;
	auto& __Local__432 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__432 = TArray<FMovieSceneFloatValue> ();
	__Local__432.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__432.GetData(), 2);
	auto& __Local__433 = __Local__432[0];
	auto& __Local__434 = __Local__432[1];
	__Local__434.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__435 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__435.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__435.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__436 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__414[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__436 = __Local__172;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__407.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__407.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__437 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__438 = (*(AccessPrivateProperty<uint32 >(&(__Local__437.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__438 = 4;
	auto& __Local__439 = (*(AccessPrivateProperty<FGuid >(&(__Local__437.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__439 = FGuid(0xAB032651, 0x42AFEF3D, 0xC4EC608E, 0xA7CCCCF5);
	auto& __Local__440 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__437.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__441 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__440), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__441 = TArray<int32> ();
	__Local__441.Reserve(1);
	__Local__441.Add(0);
	auto& __Local__442 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__440), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__442 = TArray<FMovieSceneSegment> ();
	__Local__442.Reserve(1);
	__Local__442.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__443 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__437.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__443 = __Local__201;
	auto& __Local__444 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__437.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__444 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__444.Reserve(1);
	__Local__444.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__445 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__445 = TArray<FFrameNumber> ();
	__Local__445.Reserve(2);
	__Local__445.Add(FFrameNumber{});
	__Local__445.Add(FFrameNumber{});
	auto& __Local__446 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__445[1]), 0)));
	__Local__446 = 30000;
	auto& __Local__447 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__447 = TArray<FMovieSceneFloatValue> ();
	__Local__447.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__447.GetData(), 2);
	auto& __Local__448 = __Local__447[0];
	auto& __Local__449 = __Local__447[1];
	__Local__449.Value = 1.000000f;
	auto& __Local__450 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__450 = TArray<FFrameNumber> ();
	__Local__450.Reserve(2);
	__Local__450.Add(FFrameNumber{});
	__Local__450.Add(FFrameNumber{});
	auto& __Local__451 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__450[1]), 0)));
	__Local__451 = 30000;
	auto& __Local__452 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__452 = TArray<FMovieSceneFloatValue> ();
	__Local__452.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__452.GetData(), 2);
	auto& __Local__453 = __Local__452[0];
	auto& __Local__454 = __Local__452[1];
	__Local__454.Value = 1.000000f;
	auto& __Local__455 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__455 = TArray<FFrameNumber> ();
	__Local__455.Reserve(2);
	__Local__455.Add(FFrameNumber{});
	__Local__455.Add(FFrameNumber{});
	auto& __Local__456 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__455[1]), 0)));
	__Local__456 = 30000;
	auto& __Local__457 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__457 = TArray<FMovieSceneFloatValue> ();
	__Local__457.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__457.GetData(), 2);
	auto& __Local__458 = __Local__457[0];
	auto& __Local__459 = __Local__457[1];
	__Local__459.Value = 1.000000f;
	auto& __Local__460 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__460 = TArray<FFrameNumber> ();
	__Local__460.Reserve(2);
	__Local__460.Add(FFrameNumber{});
	__Local__460.Add(FFrameNumber{});
	auto& __Local__461 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__460[1]), 0)));
	__Local__461 = 30000;
	auto& __Local__462 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__462 = TArray<FMovieSceneFloatValue> ();
	__Local__462.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__462.GetData(), 2);
	auto& __Local__463 = __Local__462[0];
	auto& __Local__464 = __Local__462[1];
	__Local__464.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__465 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__465.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__465.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__466 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__444[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__466 = __Local__205;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__437.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__437.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__467 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__468 = (*(AccessPrivateProperty<uint32 >(&(__Local__467.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__468 = 5;
	auto& __Local__469 = (*(AccessPrivateProperty<FGuid >(&(__Local__467.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__469 = FGuid(0x3B674939, 0x48BD0D42, 0x96D170AE, 0x740CDED4);
	auto& __Local__470 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__467.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__471 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__470), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__471 = TArray<int32> ();
	__Local__471.Reserve(1);
	__Local__471.Add(0);
	auto& __Local__472 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__470), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__472 = TArray<FMovieSceneSegment> ();
	__Local__472.Reserve(1);
	__Local__472.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(33001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__473 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__467.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__473 = __Local__238;
	auto& __Local__474 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__467.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__474 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__474.Reserve(1);
	__Local__474.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__475 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__475 = TArray<FFrameNumber> ();
	__Local__475.Reserve(2);
	__Local__475.Add(FFrameNumber{});
	__Local__475.Add(FFrameNumber{});
	auto& __Local__476 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__475[1]), 0)));
	__Local__476 = 33000;
	auto& __Local__477 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__477 = TArray<FMovieSceneFloatValue> ();
	__Local__477.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__477.GetData(), 2);
	auto& __Local__478 = __Local__477[0];
	__Local__478.Value = 1.000000f;
	auto& __Local__479 = __Local__477[1];
	__Local__479.Value = 1.000000f;
	auto& __Local__480 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__480 = TArray<FFrameNumber> ();
	__Local__480.Reserve(2);
	__Local__480.Add(FFrameNumber{});
	__Local__480.Add(FFrameNumber{});
	auto& __Local__481 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__480[1]), 0)));
	__Local__481 = 33000;
	auto& __Local__482 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__482 = TArray<FMovieSceneFloatValue> ();
	__Local__482.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__482.GetData(), 2);
	auto& __Local__483 = __Local__482[0];
	__Local__483.Value = 1.000000f;
	auto& __Local__484 = __Local__482[1];
	__Local__484.Value = 1.000000f;
	auto& __Local__485 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__485 = TArray<FFrameNumber> ();
	__Local__485.Reserve(2);
	__Local__485.Add(FFrameNumber{});
	__Local__485.Add(FFrameNumber{});
	auto& __Local__486 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__485[1]), 0)));
	__Local__486 = 33000;
	auto& __Local__487 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__487 = TArray<FMovieSceneFloatValue> ();
	__Local__487.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__487.GetData(), 2);
	auto& __Local__488 = __Local__487[0];
	__Local__488.Value = 1.000000f;
	auto& __Local__489 = __Local__487[1];
	__Local__489.Value = 1.000000f;
	auto& __Local__490 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__490 = TArray<FFrameNumber> ();
	__Local__490.Reserve(2);
	__Local__490.Add(FFrameNumber{});
	__Local__490.Add(FFrameNumber{});
	auto& __Local__491 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__490[1]), 0)));
	__Local__491 = 33000;
	auto& __Local__492 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__492 = TArray<FMovieSceneFloatValue> ();
	__Local__492.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__492.GetData(), 2);
	auto& __Local__493 = __Local__492[0];
	auto& __Local__494 = __Local__492[1];
	__Local__494.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__495 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__495.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__495.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__496 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__474[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__496 = __Local__242;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__467.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__467.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__497 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__310.GetPairPtr(__Local__310.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__498 = (*(AccessPrivateProperty<uint32 >(&(__Local__497.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__498 = 6;
	auto& __Local__499 = (*(AccessPrivateProperty<FGuid >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__499 = FGuid(0x3B674939, 0x48BD0D42, 0x96D170AE, 0x740CDED4);
	auto& __Local__500 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__501 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__500), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__501 = TArray<int32> ();
	__Local__501.Reserve(1);
	__Local__501.Add(0);
	auto& __Local__502 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__500), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__502 = TArray<FMovieSceneSegment> ();
	__Local__502.Reserve(1);
	__Local__502.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(33001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__503 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__503 = __Local__271;
	auto& __Local__504 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__504 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__504.Reserve(1);
	__Local__504.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__505 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__505 = TArray<FFrameNumber> ();
	__Local__505.Reserve(1);
	__Local__505.Add(FFrameNumber{});
	auto& __Local__506 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__506 = TArray<FMovieSceneFloatValue> ();
	__Local__506.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__506.GetData(), 1);
	auto& __Local__507 = __Local__506[0];
	__Local__507.Value = 1.000000f;
	auto& __Local__508 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__508 = TArray<FFrameNumber> ();
	__Local__508.Reserve(1);
	__Local__508.Add(FFrameNumber{});
	auto& __Local__509 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__509 = TArray<FMovieSceneFloatValue> ();
	__Local__509.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__509.GetData(), 1);
	auto& __Local__510 = __Local__509[0];
	__Local__510.Value = 1.000000f;
	auto& __Local__511 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__511 = TArray<FFrameNumber> ();
	__Local__511.Reserve(1);
	__Local__511.Add(FFrameNumber{});
	auto& __Local__512 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[2]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__512 = TArray<FMovieSceneFloatValue> ();
	__Local__512.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__512.GetData(), 1);
	auto& __Local__513 = __Local__512[0];
	__Local__513.Value = 1.000000f;
	auto& __Local__514 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__514 = TArray<FFrameNumber> ();
	__Local__514.Reserve(2);
	__Local__514.Add(FFrameNumber{});
	__Local__514.Add(FFrameNumber{});
	auto& __Local__515 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__514[1]), 0)));
	__Local__515 = 33000;
	auto& __Local__516 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__516 = TArray<FMovieSceneFloatValue> ();
	__Local__516.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__516.GetData(), 2);
	auto& __Local__517 = __Local__516[0];
	auto& __Local__518 = __Local__516[1];
	__Local__518.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__519 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__519.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__519.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__520 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__520 = __Local__275;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__497.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__497.Value), false, 0));
	__Local__310.Rehash();
	auto& __Local__521 = (*(AccessPrivateProperty<TArray<FMovieSceneFrameRange> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__521 = TArray<FMovieSceneFrameRange> ();
	__Local__521.Reserve(4);
	__Local__521.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Open(), TRangeBound<FFrameNumber>::Exclusive(0))));
	__Local__521.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001))));
	__Local__521.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(30001), TRangeBound<FFrameNumber>::Exclusive(33001))));
	__Local__521.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(33001), TRangeBound<FFrameNumber>::Open())));
	auto& __Local__522 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__522 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__522.AddUninitialized(4);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__522.GetData(), 4);
	auto& __Local__523 = __Local__522[0];
	auto& __Local__524 = __Local__522[1];
	__Local__524.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__524.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__524.LUTIndices.GetData(), 1);
	auto& __Local__525 = __Local__524.LUTIndices[0];
	__Local__525.NumEvalPtrs = 7;
	__Local__524.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__524.SegmentPtrLUT.AddUninitialized(7);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__524.SegmentPtrLUT.GetData(), 7);
	auto& __Local__526 = __Local__524.SegmentPtrLUT[0];
	auto& __Local__527 = (*(AccessPrivateProperty<int32 >(&(__Local__526.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__527 = 0;
	auto& __Local__528 = (*(AccessPrivateProperty<uint32 >(&(__Local__526.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__528 = 0;
	auto& __Local__529 = (*(AccessPrivateProperty<uint32 >(&(__Local__526.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__529 = 1;
	auto& __Local__530 = __Local__524.SegmentPtrLUT[1];
	auto& __Local__531 = (*(AccessPrivateProperty<int32 >(&(__Local__530.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__531 = 0;
	auto& __Local__532 = (*(AccessPrivateProperty<uint32 >(&(__Local__530.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__532 = 0;
	auto& __Local__533 = (*(AccessPrivateProperty<uint32 >(&(__Local__530.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__533 = 2;
	auto& __Local__534 = __Local__524.SegmentPtrLUT[2];
	auto& __Local__535 = (*(AccessPrivateProperty<int32 >(&(__Local__534.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__535 = 0;
	auto& __Local__536 = (*(AccessPrivateProperty<uint32 >(&(__Local__534.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__536 = 0;
	auto& __Local__537 = (*(AccessPrivateProperty<uint32 >(&(__Local__534.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__537 = 3;
	auto& __Local__538 = __Local__524.SegmentPtrLUT[3];
	auto& __Local__539 = (*(AccessPrivateProperty<int32 >(&(__Local__538.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__539 = 0;
	auto& __Local__540 = (*(AccessPrivateProperty<uint32 >(&(__Local__538.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__540 = 0;
	auto& __Local__541 = (*(AccessPrivateProperty<uint32 >(&(__Local__538.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__541 = 4;
	auto& __Local__542 = __Local__524.SegmentPtrLUT[4];
	auto& __Local__543 = (*(AccessPrivateProperty<int32 >(&(__Local__542.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__543 = 0;
	auto& __Local__544 = (*(AccessPrivateProperty<uint32 >(&(__Local__542.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__544 = 0;
	auto& __Local__545 = (*(AccessPrivateProperty<uint32 >(&(__Local__542.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__545 = 5;
	auto& __Local__546 = __Local__524.SegmentPtrLUT[5];
	auto& __Local__547 = (*(AccessPrivateProperty<int32 >(&(__Local__546.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__547 = 0;
	auto& __Local__548 = (*(AccessPrivateProperty<uint32 >(&(__Local__546.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__548 = 0;
	auto& __Local__549 = (*(AccessPrivateProperty<uint32 >(&(__Local__546.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__549 = 6;
	auto& __Local__550 = __Local__524.SegmentPtrLUT[6];
	auto& __Local__551 = (*(AccessPrivateProperty<int32 >(&(__Local__550.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__551 = 0;
	auto& __Local__552 = (*(AccessPrivateProperty<uint32 >(&(__Local__550.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__552 = 0;
	auto& __Local__553 = (*(AccessPrivateProperty<uint32 >(&(__Local__550.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__553 = 0;
	auto& __Local__554 = __Local__522[2];
	__Local__554.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__554.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__554.LUTIndices.GetData(), 1);
	auto& __Local__555 = __Local__554.LUTIndices[0];
	__Local__555.NumEvalPtrs = 2;
	__Local__554.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__554.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__554.SegmentPtrLUT.GetData(), 2);
	auto& __Local__556 = __Local__554.SegmentPtrLUT[0];
	auto& __Local__557 = (*(AccessPrivateProperty<int32 >(&(__Local__556.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__557 = 0;
	auto& __Local__558 = (*(AccessPrivateProperty<uint32 >(&(__Local__556.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__558 = 0;
	auto& __Local__559 = (*(AccessPrivateProperty<uint32 >(&(__Local__556.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__559 = 6;
	auto& __Local__560 = __Local__554.SegmentPtrLUT[1];
	auto& __Local__561 = (*(AccessPrivateProperty<int32 >(&(__Local__560.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__561 = 0;
	auto& __Local__562 = (*(AccessPrivateProperty<uint32 >(&(__Local__560.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__562 = 0;
	auto& __Local__563 = (*(AccessPrivateProperty<uint32 >(&(__Local__560.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__563 = 5;
	auto& __Local__564 = __Local__522[3];
	auto& __Local__565 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__565 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__565.AddUninitialized(4);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__565.GetData(), 4);
	auto& __Local__566 = __Local__565[0];
	__Local__566.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__566.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__566.ActiveSequences.GetData(), 1);
	auto& __Local__567 = __Local__566.ActiveSequences[0];
	auto& __Local__568 = (*(AccessPrivateProperty<uint32 >(&(__Local__567), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__568 = 0;
	auto& __Local__569 = __Local__565[1];
	__Local__569.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__569.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__569.ActiveSequences.GetData(), 1);
	auto& __Local__570 = __Local__569.ActiveSequences[0];
	auto& __Local__571 = (*(AccessPrivateProperty<uint32 >(&(__Local__570), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__571 = 0;
	__Local__569.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__569.ActiveEntities.AddUninitialized(14);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__569.ActiveEntities.GetData(), 14);
	auto& __Local__572 = __Local__569.ActiveEntities[0];
	auto& __Local__573 = (*(AccessPrivateProperty<uint32 >(&(__Local__572.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__573 = 0;
	auto& __Local__574 = (*(AccessPrivateProperty<uint32 >(&(__Local__572.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__574 = 0;
	__Local__572.Key.SectionIndex = 0;
	__Local__572.EvaluationIndex = 13;
	auto& __Local__575 = __Local__569.ActiveEntities[1];
	auto& __Local__576 = (*(AccessPrivateProperty<uint32 >(&(__Local__575.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__576 = 0;
	auto& __Local__577 = (*(AccessPrivateProperty<uint32 >(&(__Local__575.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__577 = 0;
	__Local__575.EvaluationIndex = 12;
	auto& __Local__578 = __Local__569.ActiveEntities[2];
	auto& __Local__579 = (*(AccessPrivateProperty<uint32 >(&(__Local__578.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__579 = 0;
	auto& __Local__580 = (*(AccessPrivateProperty<uint32 >(&(__Local__578.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__580 = 1;
	__Local__578.Key.SectionIndex = 0;
	__Local__578.EvaluationIndex = 1;
	auto& __Local__581 = __Local__569.ActiveEntities[3];
	auto& __Local__582 = (*(AccessPrivateProperty<uint32 >(&(__Local__581.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__582 = 0;
	auto& __Local__583 = (*(AccessPrivateProperty<uint32 >(&(__Local__581.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__583 = 1;
	auto& __Local__584 = __Local__569.ActiveEntities[4];
	auto& __Local__585 = (*(AccessPrivateProperty<uint32 >(&(__Local__584.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__585 = 0;
	auto& __Local__586 = (*(AccessPrivateProperty<uint32 >(&(__Local__584.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__586 = 2;
	__Local__584.Key.SectionIndex = 0;
	__Local__584.EvaluationIndex = 3;
	auto& __Local__587 = __Local__569.ActiveEntities[5];
	auto& __Local__588 = (*(AccessPrivateProperty<uint32 >(&(__Local__587.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__588 = 0;
	auto& __Local__589 = (*(AccessPrivateProperty<uint32 >(&(__Local__587.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__589 = 2;
	__Local__587.EvaluationIndex = 2;
	auto& __Local__590 = __Local__569.ActiveEntities[6];
	auto& __Local__591 = (*(AccessPrivateProperty<uint32 >(&(__Local__590.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__591 = 0;
	auto& __Local__592 = (*(AccessPrivateProperty<uint32 >(&(__Local__590.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__592 = 3;
	__Local__590.Key.SectionIndex = 0;
	__Local__590.EvaluationIndex = 5;
	auto& __Local__593 = __Local__569.ActiveEntities[7];
	auto& __Local__594 = (*(AccessPrivateProperty<uint32 >(&(__Local__593.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__594 = 0;
	auto& __Local__595 = (*(AccessPrivateProperty<uint32 >(&(__Local__593.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__595 = 3;
	__Local__593.EvaluationIndex = 4;
	auto& __Local__596 = __Local__569.ActiveEntities[8];
	auto& __Local__597 = (*(AccessPrivateProperty<uint32 >(&(__Local__596.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__597 = 0;
	auto& __Local__598 = (*(AccessPrivateProperty<uint32 >(&(__Local__596.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__598 = 4;
	__Local__596.Key.SectionIndex = 0;
	__Local__596.EvaluationIndex = 7;
	auto& __Local__599 = __Local__569.ActiveEntities[9];
	auto& __Local__600 = (*(AccessPrivateProperty<uint32 >(&(__Local__599.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__600 = 0;
	auto& __Local__601 = (*(AccessPrivateProperty<uint32 >(&(__Local__599.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__601 = 4;
	__Local__599.EvaluationIndex = 6;
	auto& __Local__602 = __Local__569.ActiveEntities[10];
	auto& __Local__603 = (*(AccessPrivateProperty<uint32 >(&(__Local__602.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__603 = 0;
	auto& __Local__604 = (*(AccessPrivateProperty<uint32 >(&(__Local__602.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__604 = 5;
	__Local__602.Key.SectionIndex = 0;
	__Local__602.EvaluationIndex = 9;
	auto& __Local__605 = __Local__569.ActiveEntities[11];
	auto& __Local__606 = (*(AccessPrivateProperty<uint32 >(&(__Local__605.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__606 = 0;
	auto& __Local__607 = (*(AccessPrivateProperty<uint32 >(&(__Local__605.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__607 = 5;
	__Local__605.EvaluationIndex = 8;
	auto& __Local__608 = __Local__569.ActiveEntities[12];
	auto& __Local__609 = (*(AccessPrivateProperty<uint32 >(&(__Local__608.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__609 = 0;
	auto& __Local__610 = (*(AccessPrivateProperty<uint32 >(&(__Local__608.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__610 = 6;
	__Local__608.Key.SectionIndex = 0;
	__Local__608.EvaluationIndex = 11;
	auto& __Local__611 = __Local__569.ActiveEntities[13];
	auto& __Local__612 = (*(AccessPrivateProperty<uint32 >(&(__Local__611.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__612 = 0;
	auto& __Local__613 = (*(AccessPrivateProperty<uint32 >(&(__Local__611.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__613 = 6;
	__Local__611.EvaluationIndex = 10;
	auto& __Local__614 = __Local__565[2];
	__Local__614.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__614.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__614.ActiveSequences.GetData(), 1);
	auto& __Local__615 = __Local__614.ActiveSequences[0];
	auto& __Local__616 = (*(AccessPrivateProperty<uint32 >(&(__Local__615), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__616 = 0;
	__Local__614.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__614.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__614.ActiveEntities.GetData(), 4);
	auto& __Local__617 = __Local__614.ActiveEntities[0];
	auto& __Local__618 = (*(AccessPrivateProperty<uint32 >(&(__Local__617.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__618 = 0;
	auto& __Local__619 = (*(AccessPrivateProperty<uint32 >(&(__Local__617.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__619 = 5;
	__Local__617.Key.SectionIndex = 0;
	__Local__617.EvaluationIndex = 3;
	auto& __Local__620 = __Local__614.ActiveEntities[1];
	auto& __Local__621 = (*(AccessPrivateProperty<uint32 >(&(__Local__620.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__621 = 0;
	auto& __Local__622 = (*(AccessPrivateProperty<uint32 >(&(__Local__620.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__622 = 5;
	__Local__620.EvaluationIndex = 2;
	auto& __Local__623 = __Local__614.ActiveEntities[2];
	auto& __Local__624 = (*(AccessPrivateProperty<uint32 >(&(__Local__623.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__624 = 0;
	auto& __Local__625 = (*(AccessPrivateProperty<uint32 >(&(__Local__623.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__625 = 6;
	__Local__623.Key.SectionIndex = 0;
	__Local__623.EvaluationIndex = 1;
	auto& __Local__626 = __Local__614.ActiveEntities[3];
	auto& __Local__627 = (*(AccessPrivateProperty<uint32 >(&(__Local__626.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__627 = 0;
	auto& __Local__628 = (*(AccessPrivateProperty<uint32 >(&(__Local__626.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__628 = 6;
	auto& __Local__629 = __Local__565[3];
	__Local__629.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__629.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__629.ActiveSequences.GetData(), 1);
	auto& __Local__630 = __Local__629.ActiveSequences[0];
	auto& __Local__631 = (*(AccessPrivateProperty<uint32 >(&(__Local__630), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__631 = 0;
	__Local__2->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x99533407, 0x4E0F1BA8, 0x6DB3A3AC, 0x3051E32B);
	auto& __Local__632 = (*(AccessPrivateProperty<uint32 >(&(__Local__2->PrecompiledEvaluationTemplate.TemplateSerialNumber), FMovieSceneEvaluationTemplateSerialNumber::__PPO__Value() )));
	__Local__632 = 1;
	auto& __Local__633 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__2->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__634 = (*(AccessPrivateProperty<uint32 >(&(__Local__633.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__634 = 6;
	__Local__633.TrackSignatureToTrackIdentifier = {};
	__Local__633.TrackSignatureToTrackIdentifier.Reserve(7);
	static TWeakObjectPtr<UProperty> __Local__637{};
	const UProperty* __Local__636 = __Local__637.Get();
	if (nullptr == __Local__636)
	{
		__Local__636 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__636);
		__Local__637 = __Local__636;
	}
	FScriptMapHelper __Local__635(CastChecked<UMapProperty>(__Local__636), &__Local__633.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__638 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__638.Key.A = 1010251276;
	__Local__638.Key.B = 1086577330;
	__Local__638.Key.C = 426811018;
	__Local__638.Key.D = -2004963759;
	auto& __Local__639 = (*(AccessPrivateProperty<uint32 >(&(__Local__638.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__639 = 0;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__640 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__640.Key.A = 238862703;
	__Local__640.Key.B = 1241240159;
	__Local__640.Key.C = 888965052;
	__Local__640.Key.D = -207967591;
	auto& __Local__641 = (*(AccessPrivateProperty<uint32 >(&(__Local__640.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__641 = 1;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__642 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__642.Key.A = -440214725;
	__Local__642.Key.B = 1202440328;
	__Local__642.Key.C = -1201032303;
	__Local__642.Key.D = 132735434;
	auto& __Local__643 = (*(AccessPrivateProperty<uint32 >(&(__Local__642.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__643 = 2;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__644 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__644.Key.A = -1557813532;
	__Local__644.Key.B = 1339480859;
	__Local__644.Key.C = -1528976207;
	__Local__644.Key.D = 1365455687;
	auto& __Local__645 = (*(AccessPrivateProperty<uint32 >(&(__Local__644.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__645 = 3;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__646 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__646.Key.A = -1852689112;
	__Local__646.Key.B = 1262078563;
	__Local__646.Key.C = 299440538;
	__Local__646.Key.D = -737277302;
	auto& __Local__647 = (*(AccessPrivateProperty<uint32 >(&(__Local__646.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__647 = 4;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__648 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__648.Key.A = -1184125923;
	__Local__648.Key.B = 1310498166;
	__Local__648.Key.C = 454535822;
	__Local__648.Key.D = -1679047993;
	auto& __Local__649 = (*(AccessPrivateProperty<uint32 >(&(__Local__648.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__649 = 5;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__650 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__635.GetPairPtr(__Local__635.AddDefaultValue_Invalid_NeedsRehash());
	__Local__650.Key.A = -327155224;
	__Local__650.Key.B = 1219154124;
	__Local__650.Key.C = 642508214;
	__Local__650.Key.D = 810532695;
	auto& __Local__651 = (*(AccessPrivateProperty<uint32 >(&(__Local__650.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__651 = 6;
	__Local__635.Rehash();
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__652 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__652 = FGuid(0x99533407, 0x4E0F1BA8, 0x6DB3A3AC, 0x3051E32B);
	auto __Local__653 = NewObject<UMovieScene>(__Local__3, UMovieScene::StaticClass(), TEXT("1"));
	auto& __Local__654 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__653), UMovieScene::__PPO__Possessables() )));
	__Local__654 = TArray<FMovieScenePossessable> ();
	__Local__654.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__654.GetData(), 2);
	auto& __Local__655 = __Local__654[0];
	auto& __Local__656 = (*(AccessPrivateProperty<FGuid >(&(__Local__655), FMovieScenePossessable::__PPO__Guid() )));
	__Local__656 = FGuid(0x93655AC1, 0x472DE8E8, 0x8A35E1BF, 0x42B1A7FA);
	auto& __Local__657 = (*(AccessPrivateProperty<FString >(&(__Local__655), FMovieScenePossessable::__PPO__Name() )));
	__Local__657 = FString(TEXT("Image_120"));
	auto& __Local__658 = (*(AccessPrivateProperty<UClass* >(&(__Local__655), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__658 = UImage::StaticClass();
	auto& __Local__659 = __Local__654[1];
	auto& __Local__660 = (*(AccessPrivateProperty<FGuid >(&(__Local__659), FMovieScenePossessable::__PPO__Guid() )));
	__Local__660 = FGuid(0xEFE07258, 0x48C3CD5A, 0xE9E72AA2, 0x5207902C);
	auto& __Local__661 = (*(AccessPrivateProperty<FString >(&(__Local__659), FMovieScenePossessable::__PPO__Name() )));
	__Local__661 = FString(TEXT("Image_163"));
	auto& __Local__662 = (*(AccessPrivateProperty<UClass* >(&(__Local__659), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__662 = UImage::StaticClass();
	auto& __Local__663 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__653), UMovieScene::__PPO__ObjectBindings() )));
	__Local__663 = TArray<FMovieSceneBinding> ();
	__Local__663.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__663.GetData(), 2);
	auto& __Local__664 = __Local__663[0];
	auto& __Local__665 = (*(AccessPrivateProperty<FGuid >(&(__Local__664), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__665 = FGuid(0x93655AC1, 0x472DE8E8, 0x8A35E1BF, 0x42B1A7FA);
	auto& __Local__666 = (*(AccessPrivateProperty<FString >(&(__Local__664), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__666 = FString(TEXT("Image_120"));
	auto& __Local__667 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__664), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__667 = TArray<UMovieSceneTrack*> ();
	__Local__667.Reserve(2);
	auto __Local__668 = NewObject<UMovieSceneColorTrack>(__Local__653, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_5"));
	auto& __Local__669 = (*(AccessPrivateProperty<FName >((__Local__668), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__669 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__670 = (*(AccessPrivateProperty<FString >((__Local__668), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__670 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__671 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__668), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__671 = TArray<UMovieSceneSection*> ();
	__Local__671.Reserve(1);
	auto __Local__672 = NewObject<UMovieSceneColorSection>(__Local__668, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_5"));
	auto& __Local__673 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__672), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__674 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__673), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__674 = TArray<FFrameNumber> ();
	__Local__674.Reserve(3);
	__Local__674.Add(FFrameNumber{});
	__Local__674.Add(FFrameNumber{});
	auto& __Local__675 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__674[1]), 0)));
	__Local__675 = 18000;
	__Local__674.Add(FFrameNumber{});
	auto& __Local__676 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__674[2]), 0)));
	__Local__676 = 27000;
	auto& __Local__677 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__673), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__677 = TArray<FMovieSceneFloatValue> ();
	__Local__677.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__677.GetData(), 3);
	auto& __Local__678 = __Local__677[0];
	auto& __Local__679 = __Local__677[1];
	__Local__679.Value = 1.000000f;
	auto& __Local__680 = __Local__677[2];
	auto __Local__681 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__672, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__681->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__672->Easing.EaseIn = __Local__681;
	auto __Local__682 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__672, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__682->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__672->Easing.EaseOut = __Local__682;
	__Local__672->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)));
	auto& __Local__683 = (*(AccessPrivateProperty<FGuid >((__Local__672), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__683 = FGuid(0x8982135D, 0x49F5D779, 0xD1082685, 0x5D8B71B9);
	__Local__671.Add(__Local__672);
	auto& __Local__684 = (*(AccessPrivateProperty<FGuid >((__Local__668), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__684 = FGuid(0x17FFDAEF, 0x4E1730A3, 0x2295F49D, 0x5C68A689);
	__Local__667.Add(__Local__668);
	auto __Local__685 = NewObject<UMovieScene2DTransformTrack>(__Local__653, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_2"));
	auto& __Local__686 = (*(AccessPrivateProperty<FName >((__Local__685), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__686 = FName(TEXT("RenderTransform"));
	auto& __Local__687 = (*(AccessPrivateProperty<FString >((__Local__685), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__687 = FString(TEXT("RenderTransform"));
	auto& __Local__688 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__685), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__688 = TArray<UMovieSceneSection*> ();
	__Local__688.Reserve(1);
	auto __Local__689 = NewObject<UMovieScene2DTransformSection>(__Local__685, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_2"));
	auto& __Local__690 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__690 = TArray<FFrameNumber> ();
	__Local__690.Reserve(3);
	__Local__690.Add(FFrameNumber{});
	__Local__690.Add(FFrameNumber{});
	auto& __Local__691 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__690[1]), 0)));
	__Local__691 = 18000;
	__Local__690.Add(FFrameNumber{});
	auto& __Local__692 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__690[2]), 0)));
	__Local__692 = 27000;
	auto& __Local__693 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__693 = TArray<FMovieSceneFloatValue> ();
	__Local__693.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__693.GetData(), 3);
	auto& __Local__694 = __Local__693[0];
	auto& __Local__695 = __Local__693[1];
	auto& __Local__696 = __Local__693[2];
	auto& __Local__697 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__697 = TArray<FFrameNumber> ();
	__Local__697.Reserve(3);
	__Local__697.Add(FFrameNumber{});
	__Local__697.Add(FFrameNumber{});
	auto& __Local__698 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__697[1]), 0)));
	__Local__698 = 18000;
	__Local__697.Add(FFrameNumber{});
	auto& __Local__699 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__697[2]), 0)));
	__Local__699 = 27000;
	auto& __Local__700 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__700 = TArray<FMovieSceneFloatValue> ();
	__Local__700.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__700.GetData(), 3);
	auto& __Local__701 = __Local__700[0];
	auto& __Local__702 = __Local__700[1];
	auto& __Local__703 = __Local__700[2];
	auto& __Local__704 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__704 = TArray<FFrameNumber> ();
	__Local__704.Reserve(3);
	__Local__704.Add(FFrameNumber{});
	__Local__704.Add(FFrameNumber{});
	auto& __Local__705 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__704[1]), 0)));
	__Local__705 = 18000;
	__Local__704.Add(FFrameNumber{});
	auto& __Local__706 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__704[2]), 0)));
	__Local__706 = 27000;
	auto& __Local__707 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__707 = TArray<FMovieSceneFloatValue> ();
	__Local__707.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__707.GetData(), 3);
	auto& __Local__708 = __Local__707[0];
	auto& __Local__709 = __Local__707[1];
	auto& __Local__710 = __Local__707[2];
	auto& __Local__711 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__711 = TArray<FFrameNumber> ();
	__Local__711.Reserve(3);
	__Local__711.Add(FFrameNumber{});
	__Local__711.Add(FFrameNumber{});
	auto& __Local__712 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__711[1]), 0)));
	__Local__712 = 18000;
	__Local__711.Add(FFrameNumber{});
	auto& __Local__713 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__711[2]), 0)));
	__Local__713 = 27000;
	auto& __Local__714 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__714 = TArray<FMovieSceneFloatValue> ();
	__Local__714.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__714.GetData(), 3);
	auto& __Local__715 = __Local__714[0];
	__Local__715.Value = 0.800000f;
	auto& __Local__716 = __Local__714[1];
	__Local__716.Value = 2.850000f;
	__Local__716.Tangent.ArriveTangent = 0.000087f;
	__Local__716.Tangent.LeaveTangent = 0.000087f;
	auto& __Local__717 = __Local__714[2];
	__Local__717.Value = 3.150000f;
	auto& __Local__718 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__718 = TArray<FFrameNumber> ();
	__Local__718.Reserve(3);
	__Local__718.Add(FFrameNumber{});
	__Local__718.Add(FFrameNumber{});
	auto& __Local__719 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__718[1]), 0)));
	__Local__719 = 18000;
	__Local__718.Add(FFrameNumber{});
	auto& __Local__720 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__718[2]), 0)));
	__Local__720 = 27000;
	auto& __Local__721 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__721 = TArray<FMovieSceneFloatValue> ();
	__Local__721.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__721.GetData(), 3);
	auto& __Local__722 = __Local__721[0];
	__Local__722.Value = 1.400000f;
	auto& __Local__723 = __Local__721[1];
	__Local__723.Value = 4.400000f;
	__Local__723.Tangent.ArriveTangent = 0.000111f;
	__Local__723.Tangent.LeaveTangent = 0.000111f;
	auto& __Local__724 = __Local__721[2];
	__Local__724.Value = 4.400000f;
	auto& __Local__725 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__725 = TArray<FFrameNumber> ();
	__Local__725.Reserve(3);
	__Local__725.Add(FFrameNumber{});
	__Local__725.Add(FFrameNumber{});
	auto& __Local__726 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__725[1]), 0)));
	__Local__726 = 18000;
	__Local__725.Add(FFrameNumber{});
	auto& __Local__727 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__725[2]), 0)));
	__Local__727 = 27000;
	auto& __Local__728 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__728 = TArray<FMovieSceneFloatValue> ();
	__Local__728.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__728.GetData(), 3);
	auto& __Local__729 = __Local__728[0];
	auto& __Local__730 = __Local__728[1];
	auto& __Local__731 = __Local__728[2];
	auto& __Local__732 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__689->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__732 = TArray<FFrameNumber> ();
	__Local__732.Reserve(3);
	__Local__732.Add(FFrameNumber{});
	__Local__732.Add(FFrameNumber{});
	auto& __Local__733 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__732[1]), 0)));
	__Local__733 = 18000;
	__Local__732.Add(FFrameNumber{});
	auto& __Local__734 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__732[2]), 0)));
	__Local__734 = 27000;
	auto& __Local__735 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__689->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__735 = TArray<FMovieSceneFloatValue> ();
	__Local__735.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__735.GetData(), 3);
	auto& __Local__736 = __Local__735[0];
	auto& __Local__737 = __Local__735[1];
	auto& __Local__738 = __Local__735[2];
	auto __Local__739 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__689, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__739->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__689->Easing.EaseIn = __Local__739;
	auto __Local__740 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__689, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__740->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__689->Easing.EaseOut = __Local__740;
	__Local__689->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)));
	auto& __Local__741 = (*(AccessPrivateProperty<FGuid >((__Local__689), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__741 = FGuid(0xCEF07B46, 0x4E74E81F, 0x159DDAB3, 0xA5B82CB0);
	__Local__688.Add(__Local__689);
	auto& __Local__742 = (*(AccessPrivateProperty<FGuid >((__Local__685), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__742 = FGuid(0xD8A6FF7F, 0x489C07BA, 0x56DCA784, 0x987EA18D);
	__Local__667.Add(__Local__685);
	auto& __Local__743 = __Local__663[1];
	auto& __Local__744 = (*(AccessPrivateProperty<FGuid >(&(__Local__743), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__744 = FGuid(0xEFE07258, 0x48C3CD5A, 0xE9E72AA2, 0x5207902C);
	auto& __Local__745 = (*(AccessPrivateProperty<FString >(&(__Local__743), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__745 = FString(TEXT("Image_163"));
	auto& __Local__746 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__743), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__746 = TArray<UMovieSceneTrack*> ();
	__Local__746.Reserve(2);
	auto __Local__747 = NewObject<UMovieSceneColorTrack>(__Local__653, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_6"));
	auto& __Local__748 = (*(AccessPrivateProperty<FName >((__Local__747), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__748 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__749 = (*(AccessPrivateProperty<FString >((__Local__747), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__749 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__750 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__747), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__750 = TArray<UMovieSceneSection*> ();
	__Local__750.Reserve(1);
	auto __Local__751 = NewObject<UMovieSceneColorSection>(__Local__747, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_6"));
	auto& __Local__752 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__751), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__753 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__752), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__753 = TArray<FFrameNumber> ();
	__Local__753.Reserve(2);
	__Local__753.Add(FFrameNumber{});
	__Local__753.Add(FFrameNumber{});
	auto& __Local__754 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__753[1]), 0)));
	__Local__754 = 27000;
	auto& __Local__755 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__752), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__755 = TArray<FMovieSceneFloatValue> ();
	__Local__755.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__755.GetData(), 2);
	auto& __Local__756 = __Local__755[0];
	auto& __Local__757 = __Local__755[1];
	__Local__757.Value = 1.000000f;
	auto __Local__758 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__751, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__758->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__751->Easing.EaseIn = __Local__758;
	auto __Local__759 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__751, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__759->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__751->Easing.EaseOut = __Local__759;
	__Local__751->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)));
	auto& __Local__760 = (*(AccessPrivateProperty<FGuid >((__Local__751), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__760 = FGuid(0x8CF2E22D, 0x44EE0DE0, 0x54A4F9BF, 0x8764D783);
	__Local__750.Add(__Local__751);
	auto& __Local__761 = (*(AccessPrivateProperty<FGuid >((__Local__747), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__761 = FGuid(0x5E29A6DF, 0x476B9203, 0x75A92D9F, 0x120FCFBB);
	__Local__746.Add(__Local__747);
	auto __Local__762 = NewObject<UMovieScene2DTransformTrack>(__Local__653, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_3"));
	auto& __Local__763 = (*(AccessPrivateProperty<FName >((__Local__762), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__763 = FName(TEXT("RenderTransform"));
	auto& __Local__764 = (*(AccessPrivateProperty<FString >((__Local__762), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__764 = FString(TEXT("RenderTransform"));
	auto& __Local__765 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__762), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__765 = TArray<UMovieSceneSection*> ();
	__Local__765.Reserve(1);
	auto __Local__766 = NewObject<UMovieScene2DTransformSection>(__Local__762, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_3"));
	auto& __Local__767 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__767 = TArray<FFrameNumber> ();
	__Local__767.Reserve(2);
	__Local__767.Add(FFrameNumber{});
	__Local__767.Add(FFrameNumber{});
	auto& __Local__768 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__767[1]), 0)));
	__Local__768 = 27000;
	auto& __Local__769 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__769 = TArray<FMovieSceneFloatValue> ();
	__Local__769.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__769.GetData(), 2);
	auto& __Local__770 = __Local__769[0];
	auto& __Local__771 = __Local__769[1];
	auto& __Local__772 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__772 = TArray<FFrameNumber> ();
	__Local__772.Reserve(2);
	__Local__772.Add(FFrameNumber{});
	__Local__772.Add(FFrameNumber{});
	auto& __Local__773 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__772[1]), 0)));
	__Local__773 = 27000;
	auto& __Local__774 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__774 = TArray<FMovieSceneFloatValue> ();
	__Local__774.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__774.GetData(), 2);
	auto& __Local__775 = __Local__774[0];
	auto& __Local__776 = __Local__774[1];
	auto& __Local__777 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__777 = TArray<FFrameNumber> ();
	__Local__777.Reserve(2);
	__Local__777.Add(FFrameNumber{});
	__Local__777.Add(FFrameNumber{});
	auto& __Local__778 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__777[1]), 0)));
	__Local__778 = 27000;
	auto& __Local__779 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__779 = TArray<FMovieSceneFloatValue> ();
	__Local__779.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__779.GetData(), 2);
	auto& __Local__780 = __Local__779[0];
	auto& __Local__781 = __Local__779[1];
	auto& __Local__782 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__782 = TArray<FFrameNumber> ();
	__Local__782.Reserve(2);
	__Local__782.Add(FFrameNumber{});
	__Local__782.Add(FFrameNumber{});
	auto& __Local__783 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__782[1]), 0)));
	__Local__783 = 27000;
	auto& __Local__784 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__784 = TArray<FMovieSceneFloatValue> ();
	__Local__784.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__784.GetData(), 2);
	auto& __Local__785 = __Local__784[0];
	__Local__785.Value = 0.100000f;
	auto& __Local__786 = __Local__784[1];
	__Local__786.Value = 1.000000f;
	auto& __Local__787 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__787 = TArray<FFrameNumber> ();
	__Local__787.Reserve(2);
	__Local__787.Add(FFrameNumber{});
	__Local__787.Add(FFrameNumber{});
	auto& __Local__788 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__787[1]), 0)));
	__Local__788 = 27000;
	auto& __Local__789 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__789 = TArray<FMovieSceneFloatValue> ();
	__Local__789.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__789.GetData(), 2);
	auto& __Local__790 = __Local__789[0];
	__Local__790.Value = 0.700000f;
	auto& __Local__791 = __Local__789[1];
	__Local__791.Value = 1.100000f;
	auto& __Local__792 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__792 = TArray<FFrameNumber> ();
	__Local__792.Reserve(2);
	__Local__792.Add(FFrameNumber{});
	__Local__792.Add(FFrameNumber{});
	auto& __Local__793 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__792[1]), 0)));
	__Local__793 = 27000;
	auto& __Local__794 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__794 = TArray<FMovieSceneFloatValue> ();
	__Local__794.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__794.GetData(), 2);
	auto& __Local__795 = __Local__794[0];
	auto& __Local__796 = __Local__794[1];
	auto& __Local__797 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__766->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__797 = TArray<FFrameNumber> ();
	__Local__797.Reserve(2);
	__Local__797.Add(FFrameNumber{});
	__Local__797.Add(FFrameNumber{});
	auto& __Local__798 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__797[1]), 0)));
	__Local__798 = 27000;
	auto& __Local__799 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__766->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__799 = TArray<FMovieSceneFloatValue> ();
	__Local__799.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__799.GetData(), 2);
	auto& __Local__800 = __Local__799[0];
	auto& __Local__801 = __Local__799[1];
	auto __Local__802 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__766, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__802->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__766->Easing.EaseIn = __Local__802;
	auto __Local__803 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__766, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__803->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__766->Easing.EaseOut = __Local__803;
	__Local__766->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)));
	auto& __Local__804 = (*(AccessPrivateProperty<FGuid >((__Local__766), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__804 = FGuid(0x5CBD9037, 0x46E8209E, 0xE27C0CA0, 0xBB891B09);
	__Local__765.Add(__Local__766);
	auto& __Local__805 = (*(AccessPrivateProperty<FGuid >((__Local__762), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__805 = FGuid(0xD6F2A5D0, 0x47A2EFDF, 0x6346838F, 0xDB04BF07);
	__Local__746.Add(__Local__762);
	auto& __Local__806 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__653), UMovieScene::__PPO__PlaybackRange() )));
	__Local__806 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)));
	auto& __Local__807 = (*(AccessPrivateProperty<FFrameRate >((__Local__653), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__808 = (*(__Local__300->ContainerPtrToValuePtr<int32 >(&(__Local__807), 0)));
	__Local__808 = 20;
	auto& __Local__809 = (*(AccessPrivateProperty<FGuid >((__Local__653), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__809 = FGuid(0xF6B517A2, 0x46119669, 0x8D6F83B4, 0x571885FD);
	__Local__3->MovieScene = __Local__653;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 2);
	auto& __Local__810 = __Local__3->AnimationBindings[0];
	__Local__810.WidgetName = FName(TEXT("Image_120"));
	__Local__810.AnimationGuid = FGuid(0x93655AC1, 0x472DE8E8, 0x8A35E1BF, 0x42B1A7FA);
	auto& __Local__811 = __Local__3->AnimationBindings[1];
	__Local__811.WidgetName = FName(TEXT("Image_163"));
	__Local__811.AnimationGuid = FGuid(0xEFE07258, 0x48C3CD5A, 0xE9E72AA2, 0x5207902C);
	auto& __Local__812 = (*(AccessPrivateProperty<bool >((__Local__3), UWidgetAnimation::__PPO__bLegacyFinishOnStop() )));
	__Local__812 = false;
	auto& __Local__813 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__3->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__813 = {};
	__Local__813.Reserve(4);
	FScriptMapHelper __Local__814(CastChecked<UMapProperty>(__Local__311), &__Local__813);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__815 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__814.GetPairPtr(__Local__814.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__816 = (*(AccessPrivateProperty<uint32 >(&(__Local__815.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__816 = 0;
	auto& __Local__817 = (*(AccessPrivateProperty<FGuid >(&(__Local__815.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__817 = FGuid(0x93655AC1, 0x472DE8E8, 0x8A35E1BF, 0x42B1A7FA);
	auto& __Local__818 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__815.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__819 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__818), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__819 = TArray<int32> ();
	__Local__819.Reserve(1);
	__Local__819.Add(0);
	auto& __Local__820 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__818), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__820 = TArray<FMovieSceneSegment> ();
	__Local__820.Reserve(1);
	__Local__820.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__821 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__815.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__821 = __Local__668;
	auto& __Local__822 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__815.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__822 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__822.Reserve(1);
	__Local__822.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__823 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__822[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__823 = TArray<FFrameNumber> ();
	__Local__823.Reserve(3);
	__Local__823.Add(FFrameNumber{});
	__Local__823.Add(FFrameNumber{});
	auto& __Local__824 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__823[1]), 0)));
	__Local__824 = 18000;
	__Local__823.Add(FFrameNumber{});
	auto& __Local__825 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__823[2]), 0)));
	__Local__825 = 27000;
	auto& __Local__826 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__822[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__826 = TArray<FMovieSceneFloatValue> ();
	__Local__826.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__826.GetData(), 3);
	auto& __Local__827 = __Local__826[0];
	auto& __Local__828 = __Local__826[1];
	__Local__828.Value = 1.000000f;
	auto& __Local__829 = __Local__826[2];
	((FMovieSceneColorSectionTemplate*)__Local__822[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__830 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__822[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__830.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__830.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__831 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__822[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__831 = __Local__672;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__815.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__815.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__832 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__814.GetPairPtr(__Local__814.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__833 = (*(AccessPrivateProperty<uint32 >(&(__Local__832.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__833 = 1;
	auto& __Local__834 = (*(AccessPrivateProperty<FGuid >(&(__Local__832.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__834 = FGuid(0x93655AC1, 0x472DE8E8, 0x8A35E1BF, 0x42B1A7FA);
	auto& __Local__835 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__832.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__836 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__835), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__836 = TArray<int32> ();
	__Local__836.Reserve(1);
	__Local__836.Add(0);
	auto& __Local__837 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__835), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__837 = TArray<FMovieSceneSegment> ();
	__Local__837.Reserve(1);
	__Local__837.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__838 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__832.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__838 = __Local__685;
	auto& __Local__839 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__832.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__839 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__839.Reserve(1);
	__Local__839.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieScene2DTransformSectionTemplate::StaticStruct()));
	auto& __Local__840 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() )));
	auto& __Local__841 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__840), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__841 = TArray<FFrameNumber> ();
	__Local__841.Reserve(3);
	__Local__841.Add(FFrameNumber{});
	__Local__841.Add(FFrameNumber{});
	auto& __Local__842 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__841[1]), 0)));
	__Local__842 = 18000;
	__Local__841.Add(FFrameNumber{});
	auto& __Local__843 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__841[2]), 0)));
	__Local__843 = 27000;
	auto& __Local__844 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__840), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__844 = TArray<FMovieSceneFloatValue> ();
	__Local__844.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__844.GetData(), 3);
	auto& __Local__845 = __Local__844[0];
	auto& __Local__846 = __Local__844[1];
	auto& __Local__847 = __Local__844[2];
	auto& __Local__848 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() , sizeof(FMovieSceneFloatChannel ), 1)));
	auto& __Local__849 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__848), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__849 = TArray<FFrameNumber> ();
	__Local__849.Reserve(3);
	__Local__849.Add(FFrameNumber{});
	__Local__849.Add(FFrameNumber{});
	auto& __Local__850 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__849[1]), 0)));
	__Local__850 = 18000;
	__Local__849.Add(FFrameNumber{});
	auto& __Local__851 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__849[2]), 0)));
	__Local__851 = 27000;
	auto& __Local__852 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__848), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__852 = TArray<FMovieSceneFloatValue> ();
	__Local__852.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__852.GetData(), 3);
	auto& __Local__853 = __Local__852[0];
	auto& __Local__854 = __Local__852[1];
	auto& __Local__855 = __Local__852[2];
	auto& __Local__856 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Rotation() )));
	auto& __Local__857 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__856), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__857 = TArray<FFrameNumber> ();
	__Local__857.Reserve(3);
	__Local__857.Add(FFrameNumber{});
	__Local__857.Add(FFrameNumber{});
	auto& __Local__858 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__857[1]), 0)));
	__Local__858 = 18000;
	__Local__857.Add(FFrameNumber{});
	auto& __Local__859 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__857[2]), 0)));
	__Local__859 = 27000;
	auto& __Local__860 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__856), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__860 = TArray<FMovieSceneFloatValue> ();
	__Local__860.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__860.GetData(), 3);
	auto& __Local__861 = __Local__860[0];
	auto& __Local__862 = __Local__860[1];
	auto& __Local__863 = __Local__860[2];
	auto& __Local__864 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() )));
	auto& __Local__865 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__864), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__865 = TArray<FFrameNumber> ();
	__Local__865.Reserve(3);
	__Local__865.Add(FFrameNumber{});
	__Local__865.Add(FFrameNumber{});
	auto& __Local__866 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__865[1]), 0)));
	__Local__866 = 18000;
	__Local__865.Add(FFrameNumber{});
	auto& __Local__867 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__865[2]), 0)));
	__Local__867 = 27000;
	auto& __Local__868 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__864), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__868 = TArray<FMovieSceneFloatValue> ();
	__Local__868.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__868.GetData(), 3);
	auto& __Local__869 = __Local__868[0];
	__Local__869.Value = 0.800000f;
	auto& __Local__870 = __Local__868[1];
	__Local__870.Value = 2.850000f;
	__Local__870.Tangent.ArriveTangent = 0.000087f;
	__Local__870.Tangent.LeaveTangent = 0.000087f;
	auto& __Local__871 = __Local__868[2];
	__Local__871.Value = 3.150000f;
	auto& __Local__872 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() , sizeof(FMovieSceneFloatChannel ), 1)));
	auto& __Local__873 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__872), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__873 = TArray<FFrameNumber> ();
	__Local__873.Reserve(3);
	__Local__873.Add(FFrameNumber{});
	__Local__873.Add(FFrameNumber{});
	auto& __Local__874 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__873[1]), 0)));
	__Local__874 = 18000;
	__Local__873.Add(FFrameNumber{});
	auto& __Local__875 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__873[2]), 0)));
	__Local__875 = 27000;
	auto& __Local__876 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__872), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__876 = TArray<FMovieSceneFloatValue> ();
	__Local__876.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__876.GetData(), 3);
	auto& __Local__877 = __Local__876[0];
	__Local__877.Value = 1.400000f;
	auto& __Local__878 = __Local__876[1];
	__Local__878.Value = 4.400000f;
	__Local__878.Tangent.ArriveTangent = 0.000111f;
	__Local__878.Tangent.LeaveTangent = 0.000111f;
	auto& __Local__879 = __Local__876[2];
	__Local__879.Value = 4.400000f;
	auto& __Local__880 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() )));
	auto& __Local__881 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__880), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__881 = TArray<FFrameNumber> ();
	__Local__881.Reserve(3);
	__Local__881.Add(FFrameNumber{});
	__Local__881.Add(FFrameNumber{});
	auto& __Local__882 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__881[1]), 0)));
	__Local__882 = 18000;
	__Local__881.Add(FFrameNumber{});
	auto& __Local__883 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__881[2]), 0)));
	__Local__883 = 27000;
	auto& __Local__884 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__880), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__884 = TArray<FMovieSceneFloatValue> ();
	__Local__884.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__884.GetData(), 3);
	auto& __Local__885 = __Local__884[0];
	auto& __Local__886 = __Local__884[1];
	auto& __Local__887 = __Local__884[2];
	auto& __Local__888 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() , sizeof(FMovieSceneFloatChannel ), 1)));
	auto& __Local__889 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__888), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__889 = TArray<FFrameNumber> ();
	__Local__889.Reserve(3);
	__Local__889.Add(FFrameNumber{});
	__Local__889.Add(FFrameNumber{});
	auto& __Local__890 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__889[1]), 0)));
	__Local__890 = 18000;
	__Local__889.Add(FFrameNumber{});
	auto& __Local__891 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__889[2]), 0)));
	__Local__891 = 27000;
	auto& __Local__892 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__888), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__892 = TArray<FMovieSceneFloatValue> ();
	__Local__892.AddUninitialized(3);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__892.GetData(), 3);
	auto& __Local__893 = __Local__892[0];
	auto& __Local__894 = __Local__892[1];
	auto& __Local__895 = __Local__892[2];
	auto& __Local__896 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__BlendType() )));
	__Local__896 = EMovieSceneBlendType::Absolute;
	auto& __Local__897 = (*(AccessPrivateProperty<FMovieScene2DTransformMask >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Mask() )));
	auto& __Local__898 = (*(AccessPrivateProperty<uint32 >(&(__Local__897), FMovieScene2DTransformMask::__PPO__Mask() )));
	__Local__898 = 127;
	auto& __Local__899 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__899.PropertyName = FName(TEXT("RenderTransform"));
	__Local__899.PropertyPath = FString(TEXT("RenderTransform"));
	auto& __Local__900 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieScene2DTransformSectionTemplate*)__Local__839[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__900 = __Local__689;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__832.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__832.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__901 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__814.GetPairPtr(__Local__814.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__902 = (*(AccessPrivateProperty<uint32 >(&(__Local__901.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__902 = 2;
	auto& __Local__903 = (*(AccessPrivateProperty<FGuid >(&(__Local__901.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__903 = FGuid(0xEFE07258, 0x48C3CD5A, 0xE9E72AA2, 0x5207902C);
	auto& __Local__904 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__901.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__905 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__904), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__905 = TArray<int32> ();
	__Local__905.Reserve(1);
	__Local__905.Add(0);
	auto& __Local__906 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__904), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__906 = TArray<FMovieSceneSegment> ();
	__Local__906.Reserve(1);
	__Local__906.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__907 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__901.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__907 = __Local__747;
	auto& __Local__908 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__901.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__908 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__908.Reserve(1);
	__Local__908.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	auto& __Local__909 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(((FMovieSceneColorSectionTemplate*)__Local__908[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__909 = TArray<FFrameNumber> ();
	__Local__909.Reserve(2);
	__Local__909.Add(FFrameNumber{});
	__Local__909.Add(FFrameNumber{});
	auto& __Local__910 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__909[1]), 0)));
	__Local__910 = 27000;
	auto& __Local__911 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(((FMovieSceneColorSectionTemplate*)__Local__908[0].GetPtr())->Curves[3]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__911 = TArray<FMovieSceneFloatValue> ();
	__Local__911.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__911.GetData(), 2);
	auto& __Local__912 = __Local__911[0];
	auto& __Local__913 = __Local__911[1];
	__Local__913.Value = 1.000000f;
	((FMovieSceneColorSectionTemplate*)__Local__908[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__914 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__908[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__914.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__914.PropertyPath = FString(TEXT("ColorAndOpacity"));
	auto& __Local__915 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__908[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__915 = __Local__751;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__901.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__901.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__916 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__814.GetPairPtr(__Local__814.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__917 = (*(AccessPrivateProperty<uint32 >(&(__Local__916.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__917 = 3;
	auto& __Local__918 = (*(AccessPrivateProperty<FGuid >(&(__Local__916.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__918 = FGuid(0xEFE07258, 0x48C3CD5A, 0xE9E72AA2, 0x5207902C);
	auto& __Local__919 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__916.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__920 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__919), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__920 = TArray<int32> ();
	__Local__920.Reserve(1);
	__Local__920.Add(0);
	auto& __Local__921 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__919), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__921 = TArray<FMovieSceneSegment> ();
	__Local__921.Reserve(1);
	__Local__921.Add(FMovieSceneSegment(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001)), {FSectionEvaluationData(0, ESectionEvaluationFlags(0x00))}));
	auto& __Local__922 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__916.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__922 = __Local__762;
	auto& __Local__923 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__916.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__923 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__923.Reserve(1);
	__Local__923.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieScene2DTransformSectionTemplate::StaticStruct()));
	auto& __Local__924 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() )));
	auto& __Local__925 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__924), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__925 = TArray<FFrameNumber> ();
	__Local__925.Reserve(2);
	__Local__925.Add(FFrameNumber{});
	__Local__925.Add(FFrameNumber{});
	auto& __Local__926 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__925[1]), 0)));
	__Local__926 = 27000;
	auto& __Local__927 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__924), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__927 = TArray<FMovieSceneFloatValue> ();
	__Local__927.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__927.GetData(), 2);
	auto& __Local__928 = __Local__927[0];
	auto& __Local__929 = __Local__927[1];
	auto& __Local__930 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() , sizeof(FMovieSceneFloatChannel ), 1)));
	auto& __Local__931 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__930), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__931 = TArray<FFrameNumber> ();
	__Local__931.Reserve(2);
	__Local__931.Add(FFrameNumber{});
	__Local__931.Add(FFrameNumber{});
	auto& __Local__932 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__931[1]), 0)));
	__Local__932 = 27000;
	auto& __Local__933 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__930), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__933 = TArray<FMovieSceneFloatValue> ();
	__Local__933.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__933.GetData(), 2);
	auto& __Local__934 = __Local__933[0];
	auto& __Local__935 = __Local__933[1];
	auto& __Local__936 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Rotation() )));
	auto& __Local__937 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__936), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__937 = TArray<FFrameNumber> ();
	__Local__937.Reserve(2);
	__Local__937.Add(FFrameNumber{});
	__Local__937.Add(FFrameNumber{});
	auto& __Local__938 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__937[1]), 0)));
	__Local__938 = 27000;
	auto& __Local__939 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__936), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__939 = TArray<FMovieSceneFloatValue> ();
	__Local__939.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__939.GetData(), 2);
	auto& __Local__940 = __Local__939[0];
	auto& __Local__941 = __Local__939[1];
	auto& __Local__942 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() )));
	auto& __Local__943 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__942), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__943 = TArray<FFrameNumber> ();
	__Local__943.Reserve(2);
	__Local__943.Add(FFrameNumber{});
	__Local__943.Add(FFrameNumber{});
	auto& __Local__944 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__943[1]), 0)));
	__Local__944 = 27000;
	auto& __Local__945 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__942), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__945 = TArray<FMovieSceneFloatValue> ();
	__Local__945.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__945.GetData(), 2);
	auto& __Local__946 = __Local__945[0];
	__Local__946.Value = 0.100000f;
	auto& __Local__947 = __Local__945[1];
	__Local__947.Value = 1.000000f;
	auto& __Local__948 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() , sizeof(FMovieSceneFloatChannel ), 1)));
	auto& __Local__949 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__948), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__949 = TArray<FFrameNumber> ();
	__Local__949.Reserve(2);
	__Local__949.Add(FFrameNumber{});
	__Local__949.Add(FFrameNumber{});
	auto& __Local__950 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__949[1]), 0)));
	__Local__950 = 27000;
	auto& __Local__951 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__948), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__951 = TArray<FMovieSceneFloatValue> ();
	__Local__951.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__951.GetData(), 2);
	auto& __Local__952 = __Local__951[0];
	__Local__952.Value = 0.700000f;
	auto& __Local__953 = __Local__951[1];
	__Local__953.Value = 1.100000f;
	auto& __Local__954 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() )));
	auto& __Local__955 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__954), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__955 = TArray<FFrameNumber> ();
	__Local__955.Reserve(2);
	__Local__955.Add(FFrameNumber{});
	__Local__955.Add(FFrameNumber{});
	auto& __Local__956 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__955[1]), 0)));
	__Local__956 = 27000;
	auto& __Local__957 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__954), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__957 = TArray<FMovieSceneFloatValue> ();
	__Local__957.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__957.GetData(), 2);
	auto& __Local__958 = __Local__957[0];
	auto& __Local__959 = __Local__957[1];
	auto& __Local__960 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() , sizeof(FMovieSceneFloatChannel ), 1)));
	auto& __Local__961 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__960), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__961 = TArray<FFrameNumber> ();
	__Local__961.Reserve(2);
	__Local__961.Add(FFrameNumber{});
	__Local__961.Add(FFrameNumber{});
	auto& __Local__962 = (*(__Local__66->ContainerPtrToValuePtr<int32 >(&(__Local__961[1]), 0)));
	__Local__962 = 27000;
	auto& __Local__963 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__960), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__963 = TArray<FMovieSceneFloatValue> ();
	__Local__963.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__963.GetData(), 2);
	auto& __Local__964 = __Local__963[0];
	auto& __Local__965 = __Local__963[1];
	auto& __Local__966 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__BlendType() )));
	__Local__966 = EMovieSceneBlendType::Absolute;
	auto& __Local__967 = (*(AccessPrivateProperty<FMovieScene2DTransformMask >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Mask() )));
	auto& __Local__968 = (*(AccessPrivateProperty<uint32 >(&(__Local__967), FMovieScene2DTransformMask::__PPO__Mask() )));
	__Local__968 = 127;
	auto& __Local__969 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__969.PropertyName = FName(TEXT("RenderTransform"));
	__Local__969.PropertyPath = FString(TEXT("RenderTransform"));
	auto& __Local__970 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieScene2DTransformSectionTemplate*)__Local__923[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__970 = __Local__766;
	(((UBoolProperty*)__Local__343)->SetPropertyValue_InContainer(&(__Local__916.Value), false, 0));
	(((UBoolProperty*)__Local__345)->SetPropertyValue_InContainer(&(__Local__916.Value), false, 0));
	__Local__814.Rehash();
	auto& __Local__971 = (*(AccessPrivateProperty<TArray<FMovieSceneFrameRange> >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__971 = TArray<FMovieSceneFrameRange> ();
	__Local__971.Reserve(3);
	__Local__971.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Open(), TRangeBound<FFrameNumber>::Exclusive(0))));
	__Local__971.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(27001))));
	__Local__971.Add(FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(27001), TRangeBound<FFrameNumber>::Open())));
	auto& __Local__972 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__972 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__972.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__972.GetData(), 3);
	auto& __Local__973 = __Local__972[0];
	auto& __Local__974 = __Local__972[1];
	__Local__974.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__974.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__974.LUTIndices.GetData(), 1);
	auto& __Local__975 = __Local__974.LUTIndices[0];
	__Local__975.NumEvalPtrs = 4;
	__Local__974.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__974.SegmentPtrLUT.AddUninitialized(4);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__974.SegmentPtrLUT.GetData(), 4);
	auto& __Local__976 = __Local__974.SegmentPtrLUT[0];
	auto& __Local__977 = (*(AccessPrivateProperty<int32 >(&(__Local__976.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__977 = 0;
	auto& __Local__978 = (*(AccessPrivateProperty<uint32 >(&(__Local__976.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__978 = 0;
	auto& __Local__979 = (*(AccessPrivateProperty<uint32 >(&(__Local__976.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__979 = 1;
	auto& __Local__980 = __Local__974.SegmentPtrLUT[1];
	auto& __Local__981 = (*(AccessPrivateProperty<int32 >(&(__Local__980.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__981 = 0;
	auto& __Local__982 = (*(AccessPrivateProperty<uint32 >(&(__Local__980.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__982 = 0;
	auto& __Local__983 = (*(AccessPrivateProperty<uint32 >(&(__Local__980.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__983 = 2;
	auto& __Local__984 = __Local__974.SegmentPtrLUT[2];
	auto& __Local__985 = (*(AccessPrivateProperty<int32 >(&(__Local__984.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__985 = 0;
	auto& __Local__986 = (*(AccessPrivateProperty<uint32 >(&(__Local__984.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__986 = 0;
	auto& __Local__987 = (*(AccessPrivateProperty<uint32 >(&(__Local__984.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__987 = 3;
	auto& __Local__988 = __Local__974.SegmentPtrLUT[3];
	auto& __Local__989 = (*(AccessPrivateProperty<int32 >(&(__Local__988.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__989 = 0;
	auto& __Local__990 = (*(AccessPrivateProperty<uint32 >(&(__Local__988.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__990 = 0;
	auto& __Local__991 = (*(AccessPrivateProperty<uint32 >(&(__Local__988.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__991 = 0;
	auto& __Local__992 = __Local__972[2];
	auto& __Local__993 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__993 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__993.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__993.GetData(), 3);
	auto& __Local__994 = __Local__993[0];
	__Local__994.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__994.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__994.ActiveSequences.GetData(), 1);
	auto& __Local__995 = __Local__994.ActiveSequences[0];
	auto& __Local__996 = (*(AccessPrivateProperty<uint32 >(&(__Local__995), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__996 = 0;
	auto& __Local__997 = __Local__993[1];
	__Local__997.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__997.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__997.ActiveSequences.GetData(), 1);
	auto& __Local__998 = __Local__997.ActiveSequences[0];
	auto& __Local__999 = (*(AccessPrivateProperty<uint32 >(&(__Local__998), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__999 = 0;
	__Local__997.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__997.ActiveEntities.AddUninitialized(8);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__997.ActiveEntities.GetData(), 8);
	auto& __Local__1000 = __Local__997.ActiveEntities[0];
	auto& __Local__1001 = (*(AccessPrivateProperty<uint32 >(&(__Local__1000.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1001 = 0;
	auto& __Local__1002 = (*(AccessPrivateProperty<uint32 >(&(__Local__1000.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1002 = 0;
	__Local__1000.Key.SectionIndex = 0;
	__Local__1000.EvaluationIndex = 7;
	auto& __Local__1003 = __Local__997.ActiveEntities[1];
	auto& __Local__1004 = (*(AccessPrivateProperty<uint32 >(&(__Local__1003.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1004 = 0;
	auto& __Local__1005 = (*(AccessPrivateProperty<uint32 >(&(__Local__1003.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1005 = 0;
	__Local__1003.EvaluationIndex = 6;
	auto& __Local__1006 = __Local__997.ActiveEntities[2];
	auto& __Local__1007 = (*(AccessPrivateProperty<uint32 >(&(__Local__1006.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1007 = 0;
	auto& __Local__1008 = (*(AccessPrivateProperty<uint32 >(&(__Local__1006.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1008 = 1;
	__Local__1006.Key.SectionIndex = 0;
	__Local__1006.EvaluationIndex = 1;
	auto& __Local__1009 = __Local__997.ActiveEntities[3];
	auto& __Local__1010 = (*(AccessPrivateProperty<uint32 >(&(__Local__1009.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1010 = 0;
	auto& __Local__1011 = (*(AccessPrivateProperty<uint32 >(&(__Local__1009.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1011 = 1;
	auto& __Local__1012 = __Local__997.ActiveEntities[4];
	auto& __Local__1013 = (*(AccessPrivateProperty<uint32 >(&(__Local__1012.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1013 = 0;
	auto& __Local__1014 = (*(AccessPrivateProperty<uint32 >(&(__Local__1012.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1014 = 2;
	__Local__1012.Key.SectionIndex = 0;
	__Local__1012.EvaluationIndex = 3;
	auto& __Local__1015 = __Local__997.ActiveEntities[5];
	auto& __Local__1016 = (*(AccessPrivateProperty<uint32 >(&(__Local__1015.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1016 = 0;
	auto& __Local__1017 = (*(AccessPrivateProperty<uint32 >(&(__Local__1015.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1017 = 2;
	__Local__1015.EvaluationIndex = 2;
	auto& __Local__1018 = __Local__997.ActiveEntities[6];
	auto& __Local__1019 = (*(AccessPrivateProperty<uint32 >(&(__Local__1018.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1019 = 0;
	auto& __Local__1020 = (*(AccessPrivateProperty<uint32 >(&(__Local__1018.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1020 = 3;
	__Local__1018.Key.SectionIndex = 0;
	__Local__1018.EvaluationIndex = 5;
	auto& __Local__1021 = __Local__997.ActiveEntities[7];
	auto& __Local__1022 = (*(AccessPrivateProperty<uint32 >(&(__Local__1021.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1022 = 0;
	auto& __Local__1023 = (*(AccessPrivateProperty<uint32 >(&(__Local__1021.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1023 = 3;
	__Local__1021.EvaluationIndex = 4;
	auto& __Local__1024 = __Local__993[2];
	__Local__1024.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__1024.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__1024.ActiveSequences.GetData(), 1);
	auto& __Local__1025 = __Local__1024.ActiveSequences[0];
	auto& __Local__1026 = (*(AccessPrivateProperty<uint32 >(&(__Local__1025), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__1026 = 0;
	__Local__3->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x3932953F, 0x49B3A8E4, 0x03130894, 0xB7CCAA2E);
	auto& __Local__1027 = (*(AccessPrivateProperty<uint32 >(&(__Local__3->PrecompiledEvaluationTemplate.TemplateSerialNumber), FMovieSceneEvaluationTemplateSerialNumber::__PPO__Value() )));
	__Local__1027 = 1;
	auto& __Local__1028 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__3->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__1029 = (*(AccessPrivateProperty<uint32 >(&(__Local__1028.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1029 = 3;
	__Local__1028.TrackSignatureToTrackIdentifier = {};
	__Local__1028.TrackSignatureToTrackIdentifier.Reserve(4);
	FScriptMapHelper __Local__1030(CastChecked<UMapProperty>(__Local__636), &__Local__1028.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__1031 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__1030.GetPairPtr(__Local__1030.AddDefaultValue_Invalid_NeedsRehash());
	__Local__1031.Key.A = 402643695;
	__Local__1031.Key.B = 1310142627;
	__Local__1031.Key.C = 580252829;
	__Local__1031.Key.D = 1550362249;
	auto& __Local__1032 = (*(AccessPrivateProperty<uint32 >(&(__Local__1031.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1032 = 0;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__1033 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__1030.GetPairPtr(__Local__1030.AddDefaultValue_Invalid_NeedsRehash());
	__Local__1033.Key.A = -660144257;
	__Local__1033.Key.B = 1218185146;
	__Local__1033.Key.C = 1457301380;
	__Local__1033.Key.D = -1736531571;
	auto& __Local__1034 = (*(AccessPrivateProperty<uint32 >(&(__Local__1033.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1034 = 1;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__1035 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__1030.GetPairPtr(__Local__1030.AddDefaultValue_Invalid_NeedsRehash());
	__Local__1035.Key.A = 1579787999;
	__Local__1035.Key.B = 1198232067;
	__Local__1035.Key.C = 1974021535;
	__Local__1035.Key.D = 303026107;
	auto& __Local__1036 = (*(AccessPrivateProperty<uint32 >(&(__Local__1035.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1036 = 2;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__1037 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__1030.GetPairPtr(__Local__1030.AddDefaultValue_Invalid_NeedsRehash());
	__Local__1037.Key.A = -688740912;
	__Local__1037.Key.B = 1201860575;
	__Local__1037.Key.C = 1665565583;
	__Local__1037.Key.D = -620445945;
	auto& __Local__1038 = (*(AccessPrivateProperty<uint32 >(&(__Local__1037.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__1038 = 3;
	__Local__1030.Rehash();
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__1039 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__1039 = FGuid(0x3932953F, 0x49B3A8E4, 0x03130894, 0xB7CCAA2E);
}
PRAGMA_ENABLE_OPTIMIZATION
void UGameOver_C__pf534478733::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__1040;
	SlotNames.Append(__Local__1040);
}
void UGameOver_C__pf534478733::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__1041;
	__Local__1041.Reserve(2);
	__Local__1041.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__1041.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->MiscConvertedSubobjects[2]));
	TArray<FDelegateRuntimeBinding>  __Local__1042;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UGameOver_C__pf534478733::StaticClass())->MiscConvertedSubobjects[0]), __Local__1041, __Local__1042);
}
void UGameOver_C__pf534478733::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UGameOver_C__pf534478733::bpf__ExecuteUbergraph_GameOver__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpf__QuitGame__pf();
	return; // KCST_GotoReturn
}
void UGameOver_C__pf534478733::bpf__ExecuteUbergraph_GameOver__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpf__RestartGame__pf();
	return; // KCST_GotoReturn
}
void UGameOver_C__pf534478733::bpf__ExecuteUbergraph_GameOver__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpf__LoadGame__pf();
	return; // KCST_GotoReturn
}
void UGameOver_C__pf534478733::bpf__ExecuteUbergraph_GameOver__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	bpf__WidgetAnimation__pf();
	return; // KCST_GotoReturn
}
void UGameOver_C__pf534478733::bpf__BndEvt__Button_2_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameOver__pf_0(7);
}
void UGameOver_C__pf534478733::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_GameOver__pf_3(6);
}
void UGameOver_C__pf534478733::bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_281_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameOver__pf_2(4);
}
void UGameOver_C__pf534478733::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameOver__pf_1(2);
}
void UGameOver_C__pf534478733::bpf__LoadGame__pf()
{
}
void UGameOver_C__pf534478733::bpf__RestartGame__pf()
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	UIgra_C__pf2999911482* bpfv__K2Node_DynamicCast_AsIgra__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				RemoveFromParent();
			}
		case 2:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				bpfv__K2Node_DynamicCast_AsIgra__pf = Cast<UIgra_C__pf2999911482>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsIgra__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsIgra__pf))
				{
					bpfv__K2Node_DynamicCast_AsIgra__pf->bpv__LevelName__pf = FName(TEXT("Level1"));
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsIgra__pf))
				{
					bpfv__K2Node_DynamicCast_AsIgra__pf->bpv__WasGameLoadedx__pfzy = true;
				}
			}
		case 5:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("PersistentLevel")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameOver_C__pf534478733::bpf__QuitGame__pf()
{
	RemoveFromParent();
	UKismetSystemLibrary::QuitGame(this, ((APlayerController*)nullptr), EQuitPreference::Quit);
}
void UGameOver_C__pf534478733::bpf__WidgetAnimation__pf()
{
	UUserWidget::PlayAnimation(bpv__Death__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
	UUserWidget::PlayAnimation(bpv__1__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGameOver_C__pf534478733::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/DeathMenu/Restart_Level-01.Restart_Level-01 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/DeathMenu/Restart_Level_Hovered-01.Restart_Level_Hovered-01 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Widgets/MainMenu/Button_Clicked1.Button_Clicked1 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Widgets/MainMenu/Button_Hover1.Button_Hover1 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/LFLC-01.LFLC-01 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/LFLC_Hover-01.LFLC_Hover-01 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Exit_Game-01.Exit_Game-01 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/PauseMenu/Exit_Hover-01.Exit_Hover-01 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/DeathMenu/You_Died2.You_Died2 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Igra/Widgets/DeathMenu/You_Died.You_Died 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UGameOver_C__pf534478733::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{64, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{65, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Igra.Igra_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UGameOver_C__pf534478733
{
	FRegisterHelper__UGameOver_C__pf534478733()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/Widgets/DeathMenu/GameOver"), &UGameOver_C__pf534478733::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UGameOver_C__pf534478733 Instance;
};
FRegisterHelper__UGameOver_C__pf534478733 FRegisterHelper__UGameOver_C__pf534478733::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
