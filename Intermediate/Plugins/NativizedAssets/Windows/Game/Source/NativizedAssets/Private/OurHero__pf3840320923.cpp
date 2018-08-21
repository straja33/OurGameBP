#include "NativizedAssets.h"
#include "OurHero__pf3840320923.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
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
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
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
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LocalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#include "Grenade2__pf359902852.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Objectives__pf3966595016.h"
#include "Weapon_HeatWidget__pf1818634969.h"
#include "Uzi_Bullet1__pf359902852.h"
#include "Camera2__pf3840320923.h"
#include "PlayerDamage__pf3966595016.h"
#include "Pistol_Bullet__pf359902852.h"
#include "HeroHealthCrosshair__pf1898636992.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AOurHero_C__pf3840320923::AOurHero_C__pf3840320923(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AOurHero_C__pf3840320923::StaticClass() == GetClass()))
	{
		AOurHero_C__pf3840320923::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 90.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 30.000000f;
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		__Local__0->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
		auto& __Local__5 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
		__Local__5 = ECollisionChannel::ECC_GameTraceChannel5;
		static TWeakObjectPtr<UProperty> __Local__7{};
		const UProperty* __Local__6 = __Local__7.Get();
		if (nullptr == __Local__6)
		{
			__Local__6 = (FBodyInstance::StaticStruct())->FindPropertyByName(FName(TEXT("bOverrideWalkableSlopeOnInstance")));
			check(__Local__6);
			__Local__7 = __Local__6;
		}
		(((UBoolProperty*)__Local__6)->SetPropertyValue_InContainer(&(__Local__0->BodyInstance), true, 0));
		auto& __Local__8 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__9 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__8), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__9 = TArray<FResponseChannel> ();
		__Local__9.AddUninitialized(4);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__9.GetData(), 4);
		auto& __Local__10 = __Local__9[0];
		__Local__10.Channel = FName(TEXT("Visibility"));
		__Local__10.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__11 = __Local__9[1];
		__Local__11.Channel = FName(TEXT("Camera"));
		__Local__11.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__12 = __Local__9[2];
		__Local__12.Channel = FName(TEXT("Vehicle"));
		__Local__12.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__13 = __Local__9[3];
		__Local__13.Channel = FName(TEXT("Bullet"));
		__Local__13.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__14 = (*(AccessPrivateProperty<float >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
		__Local__14 = 1.000000f;
		if(!__Local__0->IsTemplate())
		{
			__Local__0->BodyInstance.FixupData(__Local__0);
		}
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->MaxStepHeight = 80.000000f;
		auto& __Local__15 = (*(AccessPrivateProperty<float >((__Local__1), UCharacterMovementComponent::__PPO__WalkableFloorAngle() )));
		__Local__15 = 45.000000f;
		auto& __Local__16 = (*(AccessPrivateProperty<float >((__Local__1), UCharacterMovementComponent::__PPO__WalkableFloorZ() )));
		__Local__16 = 0.707107f;
		__Local__1->MaxWalkSpeedCrouched = 200.000000f;
		__Local__1->MaxAcceleration = 1000.000000f;
		__Local__1->NavAgentProps.bCanCrouch = true;
		static TWeakObjectPtr<UProperty> __Local__18{};
		const UProperty* __Local__17 = __Local__18.Get();
		if (nullptr == __Local__17)
		{
			__Local__17 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__17);
			__Local__18 = __Local__17;
		}
		(((UBoolProperty*)__Local__17)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->CastShadow = false;
		__Local__2->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
		auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
		__Local__19 = ECollisionChannel::ECC_GameTraceChannel5;
		auto& __Local__20 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__21 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__20), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__21 = TArray<FResponseChannel> ();
		__Local__21.AddUninitialized(3);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__21.GetData(), 3);
		auto& __Local__22 = __Local__21[0];
		__Local__22.Channel = FName(TEXT("Visibility"));
		__Local__22.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__23 = __Local__21[1];
		__Local__23.Channel = FName(TEXT("Vehicle"));
		__Local__23.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__24 = __Local__21[2];
		__Local__24.Channel = FName(TEXT("Camera"));
		__Local__24.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__25 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__25 = __Local__0;
		__Local__2->RelativeLocation = FVector(23.000000, 1.000000, -15.000000);
		__Local__2->RelativeScale3D = FVector(0.625000, 1.000000, 0.875000);
		__Local__2->bVisible = false;
		if(!__Local__2->IsTemplate())
		{
			__Local__2->BodyInstance.FixupData(__Local__2);
		}
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__PointGun__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PointGun"));
	bpv__PistoljGun__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PistoljGun"));
	bpv__PointLight__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	bpv__Muzzle__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Muzzle"));
	bpv__Bullet_Gun__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Bullet_Gun"));
	bpv__Muzzle_Gun__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Muzzle_Gun"));
	bpv__PhysicsHandle__pf = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->FieldOfView = 100.000000f;
	bpv__Camera__pf->bUsePawnControlRotation = true;
	bpv__Camera__pf->RelativeLocation = FVector(-18.999992, 0.000000, 50.999985);
	bpv__Camera__pf->RelativeScale3D = FVector(1.000000, 1.000000, 1.000000);
	bpv__PointGun__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointGun__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointGun__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__PointGun__pf->AnimationData.bSavedLooping = false;
	bpv__PointGun__pf->AnimationData.bSavedPlaying = false;
	auto& __Local__26 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__PointGun__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__26 = EAnimationMode::Type::AnimationSingleNode;
	bpv__PointGun__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__PointGun__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__PointGun__pf->CastShadow = false;
	bpv__PointGun__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__27 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__PointGun__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__27 = ECollisionChannel::ECC_GameTraceChannel5;
	auto& __Local__28 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__PointGun__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__28), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__29 = TArray<FResponseChannel> ();
	__Local__29.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__29.GetData(), 3);
	auto& __Local__30 = __Local__29[0];
	__Local__30.Channel = FName(TEXT("Visibility"));
	__Local__30.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__31 = __Local__29[1];
	__Local__31.Channel = FName(TEXT("Camera"));
	__Local__31.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__32 = __Local__29[2];
	__Local__32.Channel = FName(TEXT("Bullet"));
	__Local__32.Response = ECollisionResponse::ECR_Ignore;
	bpv__PointGun__pf->RelativeLocation = FVector(13.999741, -23.000080, -48.999596);
	bpv__PointGun__pf->RelativeRotation = FRotator(-0.000916, 89.999550, -179.999313);
	bpv__PointGun__pf->RelativeScale3D = FVector(1.000000, 1.000000, 1.000000);
	bpv__PointGun__pf->bHiddenInGame = true;
	if(!bpv__PointGun__pf->IsTemplate())
	{
		bpv__PointGun__pf->BodyInstance.FixupData(bpv__PointGun__pf);
	}
	bpv__PistoljGun__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PistoljGun__pf->AttachToComponent(bpv__PointGun__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("Weapon"));
	bpv__PistoljGun__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__PistoljGun__pf->AnimationData.bSavedLooping = false;
	bpv__PistoljGun__pf->AnimationData.bSavedPlaying = false;
	bpv__PistoljGun__pf->AnimationData.SavedPosition = 0.965774f;
	auto& __Local__33 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__PistoljGun__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__33 = EAnimationMode::Type::AnimationSingleNode;
	bpv__PistoljGun__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__PistoljGun__pf->CastShadow = false;
	bpv__PistoljGun__pf->bRenderCustomDepth = true;
	bpv__PistoljGun__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__34 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__PistoljGun__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__34 = ECollisionChannel::ECC_GameTraceChannel5;
	auto& __Local__35 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__PistoljGun__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__35 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__36 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__PistoljGun__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__36), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__37 = TArray<FResponseChannel> ();
	__Local__37.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__37.GetData(), 3);
	auto& __Local__38 = __Local__37[0];
	__Local__38.Channel = FName(TEXT("Visibility"));
	__Local__38.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__39 = __Local__37[1];
	__Local__39.Channel = FName(TEXT("Camera"));
	__Local__39.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__40 = __Local__37[2];
	__Local__40.Channel = FName(TEXT("Bullet"));
	__Local__40.Response = ECollisionResponse::ECR_Ignore;
	bpv__PistoljGun__pf->RelativeLocation = FVector(34.082939, 24.272249, -22.383099);
	bpv__PistoljGun__pf->RelativeRotation = FRotator(10.645956, 9.325667, 6.331288);
	bpv__PistoljGun__pf->RelativeScale3D = FVector(0.531250, 1.625000, 0.875000);
	if(!bpv__PistoljGun__pf->IsTemplate())
	{
		bpv__PistoljGun__pf->BodyInstance.FixupData(bpv__PistoljGun__pf);
	}
	bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight__pf->AttachToComponent(bpv__PistoljGun__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight__pf->IntensityUnits = ELightUnits::Lumens;
	bpv__PointLight__pf->AttenuationRadius = 120.000000f;
	bpv__PointLight__pf->LightGuid = FGuid(0xA0A514E2, 0x45917D7C, 0x502A7BA2, 0x086304CB);
	bpv__PointLight__pf->Intensity = 100.000000f;
	bpv__PointLight__pf->LightColor = FColor(255, 250, 153, 255);
	bpv__PointLight__pf->RelativeLocation = FVector(14.049485, 14.070504, 0.564686);
	bpv__PointLight__pf->RelativeRotation = FRotator(4.535450, 80.806602, 168.480698);
	bpv__PointLight__pf->RelativeScale3D = FVector(1.882353, 0.615385, 1.142857);
	bpv__PointLight__pf->bVisible = false;
	bpv__Muzzle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Muzzle__pf->AttachToComponent(bpv__PointLight__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__41 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Muzzle__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__41 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Muzzle__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Muzzle__pf->OverrideMaterials.Reserve(1);
	bpv__Muzzle__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__Muzzle__pf->CastShadow = false;
	bpv__Muzzle__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Muzzle__pf->RelativeLocation = FVector(-2.188840, 0.201166, 1.140857);
	bpv__Muzzle__pf->RelativeRotation = FRotator(-0.000031, 0.000000, 10.000158);
	bpv__Muzzle__pf->RelativeScale3D = FVector(0.030000, 0.140000, 0.218750);
	bpv__Muzzle__pf->bVisible = false;
	if(!bpv__Muzzle__pf->IsTemplate())
	{
		bpv__Muzzle__pf->BodyInstance.FixupData(bpv__Muzzle__pf);
	}
	bpv__Bullet_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Bullet_Gun__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Bullet_Gun__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Bullet_Gun__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__42 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__Bullet_Gun__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__42 = ECollisionChannel::ECC_GameTraceChannel1;
	auto& __Local__43 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Bullet_Gun__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__43), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__44 = TArray<FResponseChannel> ();
	__Local__44.AddUninitialized(9);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__44.GetData(), 9);
	auto& __Local__45 = __Local__44[0];
	__Local__45.Channel = FName(TEXT("WorldStatic"));
	__Local__45.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__46 = __Local__44[1];
	__Local__46.Channel = FName(TEXT("WorldDynamic"));
	__Local__46.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__47 = __Local__44[2];
	__Local__47.Channel = FName(TEXT("Pawn"));
	__Local__47.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__48 = __Local__44[3];
	__Local__48.Channel = FName(TEXT("Visibility"));
	__Local__48.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__49 = __Local__44[4];
	__Local__49.Channel = FName(TEXT("Camera"));
	__Local__49.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__50 = __Local__44[5];
	__Local__50.Channel = FName(TEXT("PhysicsBody"));
	__Local__50.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__51 = __Local__44[6];
	__Local__51.Channel = FName(TEXT("Vehicle"));
	__Local__51.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__52 = __Local__44[7];
	__Local__52.Channel = FName(TEXT("Destructible"));
	__Local__52.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__53 = __Local__44[8];
	__Local__53.Channel = FName(TEXT("Bullet"));
	__Local__53.Response = ECollisionResponse::ECR_Ignore;
	bpv__Bullet_Gun__pf->RelativeLocation = FVector(2.132729, 15.998862, -35.102417);
	bpv__Bullet_Gun__pf->RelativeRotation = FRotator(-8.943913, 100.552513, 94.639282);
	bpv__Bullet_Gun__pf->RelativeScale3D = FVector(-0.106445, -0.046875, -0.054688);
	if(!bpv__Bullet_Gun__pf->IsTemplate())
	{
		bpv__Bullet_Gun__pf->BodyInstance.FixupData(bpv__Bullet_Gun__pf);
	}
	bpv__Muzzle_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Muzzle_Gun__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Muzzle_Gun__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Muzzle_Gun__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__54 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__Muzzle_Gun__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__54 = ECollisionChannel::ECC_GameTraceChannel1;
	auto& __Local__55 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Muzzle_Gun__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__55), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__56 = TArray<FResponseChannel> ();
	__Local__56.AddUninitialized(9);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__56.GetData(), 9);
	auto& __Local__57 = __Local__56[0];
	__Local__57.Channel = FName(TEXT("WorldStatic"));
	__Local__57.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__58 = __Local__56[1];
	__Local__58.Channel = FName(TEXT("WorldDynamic"));
	__Local__58.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__59 = __Local__56[2];
	__Local__59.Channel = FName(TEXT("Pawn"));
	__Local__59.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__60 = __Local__56[3];
	__Local__60.Channel = FName(TEXT("Visibility"));
	__Local__60.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__61 = __Local__56[4];
	__Local__61.Channel = FName(TEXT("Camera"));
	__Local__61.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__62 = __Local__56[5];
	__Local__62.Channel = FName(TEXT("PhysicsBody"));
	__Local__62.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__63 = __Local__56[6];
	__Local__63.Channel = FName(TEXT("Vehicle"));
	__Local__63.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__64 = __Local__56[7];
	__Local__64.Channel = FName(TEXT("Destructible"));
	__Local__64.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__65 = __Local__56[8];
	__Local__65.Channel = FName(TEXT("Bullet"));
	__Local__65.Response = ECollisionResponse::ECR_Ignore;
	bpv__Muzzle_Gun__pf->RelativeLocation = FVector(60.248135, 17.972183, -23.129484);
	bpv__Muzzle_Gun__pf->RelativeRotation = FRotator(23.524380, 92.944435, 123.599983);
	bpv__Muzzle_Gun__pf->RelativeScale3D = FVector(-0.106445, -0.046875, -0.054687);
	if(!bpv__Muzzle_Gun__pf->IsTemplate())
	{
		bpv__Muzzle_Gun__pf->BodyInstance.FixupData(bpv__Muzzle_Gun__pf);
	}
	bpv__PhysicsHandle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Scene__pf->RelativeLocation = FVector(102.000000, 0.000000, 66.000000);
	bpv__PistolAcquired__pf = false;
	bpv__PistolFiredx__pfzy = false;
	bpv__SkeletalMeshEquipped__pf = nullptr;
	bpv__Health__pf = 100.000000f;
	bpv__HealthCrossHairClass__pf = UHeroHealthCrosshair_C__pf1898636992::StaticClass();
	bpv__HealthCrossHairWidget__pf = nullptr;
	bpv__UziAcquiredx__pfzy = false;
	bpv__Weapon_HeatFloat__pf = 0.000000f;
	bpv__Weapon_HeatCalculate__pf = 0.000000f;
	bpv__Uzi_Ammo__pf = 0.000000f;
	bpv__WeaponWidget__pf = nullptr;
	bpv__UziFiringx__pfzy = false;
	bpv__Grenade_Number__pf = 0;
	bpv__Grenade_Launched__pf = false;
	bpv__HoldingObjectx__pfzy = false;
	bpv__PlasmaGunAcquiredx__pfzy = false;
	bpv__PlasmaGunAmmo__pf = 0.000000f;
	bpv__ObjectiveText__pf = FText::GetEmpty();
	bpv__Objective_Tab__pf = nullptr;
	auto& __Local__66 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__66 = __Local__2;
	auto& __Local__67 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__67 = __Local__1;
	auto& __Local__68 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__68 = __Local__0;
	PrimaryActorTick.bStartWithTickEnabled = false;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("Heroj")));
}
PRAGMA_ENABLE_OPTIMIZATION
void AOurHero_C__pf3840320923::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointGun__pf)
	{
		bpv__PointGun__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PistoljGun__pf)
	{
		bpv__PistoljGun__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight__pf)
	{
		bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Muzzle__pf)
	{
		bpv__Muzzle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Bullet_Gun__pf)
	{
		bpv__Bullet_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Muzzle_Gun__pf)
	{
		bpv__Muzzle_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PhysicsHandle__pf)
	{
		bpv__PhysicsHandle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AOurHero_C__pf3840320923::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AGrenade2_C__pf359902852::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UObjectives_C__pf3966595016::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWeapon_HeatWidget_C__pf1818634969::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AUzi_Bullet1_C__pf359902852::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ACamera2_C__pf3840320923::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerDamage_C__pf3966595016::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APistol_Bullet_C__pf359902852::StaticClass());
	extern UClass* Z_Construct_UClass_UPauseMenuBP_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPauseMenuBP_C());
	InDynamicClass->ReferencedConvertedFields.Add(UHeroHealthCrosshair_C__pf1898636992::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__69 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__69);
	auto __Local__70 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__70);
	auto __Local__71 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__71);
	__Local__70->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__70->InputActionDelegateBindings.AddUninitialized(12);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__70->InputActionDelegateBindings.GetData(), 12);
	auto& __Local__72 = __Local__70->InputActionDelegateBindings[0];
	__Local__72.InputActionName = FName(TEXT("JumpButton"));
	__Local__72.FunctionNameToBind = FName(TEXT("InpActEvt_JumpButton_K2Node_InputActionEvent_23"));
	auto& __Local__73 = __Local__70->InputActionDelegateBindings[1];
	__Local__73.InputActionName = FName(TEXT("FButton"));
	__Local__73.FunctionNameToBind = FName(TEXT("InpActEvt_FButton_K2Node_InputActionEvent_15"));
	auto& __Local__74 = __Local__70->InputActionDelegateBindings[2];
	__Local__74.InputActionName = FName(TEXT("3Button"));
	__Local__74.FunctionNameToBind = FName(TEXT("InpActEvt_3Button_K2Node_InputActionEvent_14"));
	auto& __Local__75 = __Local__70->InputActionDelegateBindings[3];
	__Local__75.InputActionName = FName(TEXT("TabButton"));
	__Local__75.InputKeyEvent = EInputEvent::IE_Released;
	__Local__75.FunctionNameToBind = FName(TEXT("InpActEvt_TabButton_K2Node_InputActionEvent_13"));
	auto& __Local__76 = __Local__70->InputActionDelegateBindings[4];
	__Local__76.InputActionName = FName(TEXT("FireButton"));
	__Local__76.InputKeyEvent = EInputEvent::IE_Released;
	__Local__76.FunctionNameToBind = FName(TEXT("InpActEvt_FireButton_K2Node_InputActionEvent_22"));
	auto& __Local__77 = __Local__70->InputActionDelegateBindings[5];
	__Local__77.InputActionName = FName(TEXT("FireButton"));
	__Local__77.FunctionNameToBind = FName(TEXT("InpActEvt_FireButton_K2Node_InputActionEvent_21"));
	auto& __Local__78 = __Local__70->InputActionDelegateBindings[6];
	__Local__78.InputActionName = FName(TEXT("1Button"));
	__Local__78.FunctionNameToBind = FName(TEXT("InpActEvt_1Button_K2Node_InputActionEvent_20"));
	auto& __Local__79 = __Local__70->InputActionDelegateBindings[7];
	__Local__79.InputActionName = FName(TEXT("2Button"));
	__Local__79.FunctionNameToBind = FName(TEXT("InpActEvt_2Button_K2Node_InputActionEvent_19"));
	auto& __Local__80 = __Local__70->InputActionDelegateBindings[8];
	__Local__80.InputActionName = FName(TEXT("CButton"));
	__Local__80.InputKeyEvent = EInputEvent::IE_Released;
	__Local__80.FunctionNameToBind = FName(TEXT("InpActEvt_CButton_K2Node_InputActionEvent_18"));
	auto& __Local__81 = __Local__70->InputActionDelegateBindings[9];
	__Local__81.InputActionName = FName(TEXT("CButton"));
	__Local__81.FunctionNameToBind = FName(TEXT("InpActEvt_CButton_K2Node_InputActionEvent_17"));
	auto& __Local__82 = __Local__70->InputActionDelegateBindings[10];
	__Local__82.InputActionName = FName(TEXT("GButton"));
	__Local__82.FunctionNameToBind = FName(TEXT("InpActEvt_GButton_K2Node_InputActionEvent_16"));
	auto& __Local__83 = __Local__70->InputActionDelegateBindings[11];
	__Local__83.InputActionName = FName(TEXT("TabButton"));
	__Local__83.FunctionNameToBind = FName(TEXT("InpActEvt_TabButton_K2Node_InputActionEvent_12"));
	__Local__71->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__71->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__71->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__84 = __Local__71->InputAxisDelegateBindings[0];
	__Local__84.InputAxisName = FName(TEXT("Mouse_UP_DOWN"));
	__Local__84.FunctionNameToBind = FName(TEXT("InpAxisEvt_Mouse_UP_DOWN_K2Node_InputAxisEvent_3"));
	auto& __Local__85 = __Local__71->InputAxisDelegateBindings[1];
	__Local__85.InputAxisName = FName(TEXT("Mouse_LEFT_RIGHT"));
	__Local__85.FunctionNameToBind = FName(TEXT("InpAxisEvt_Mouse_LEFT_RIGHT_K2Node_InputAxisEvent_2"));
	auto& __Local__86 = __Local__71->InputAxisDelegateBindings[2];
	__Local__86.InputAxisName = FName(TEXT("Move_Left_Right"));
	__Local__86.FunctionNameToBind = FName(TEXT("InpAxisEvt_Move_Left_Right_K2Node_InputAxisEvent_1"));
	auto& __Local__87 = __Local__71->InputAxisDelegateBindings[3];
	__Local__87.InputAxisName = FName(TEXT("Move_Forward_Backward"));
	__Local__87.FunctionNameToBind = FName(TEXT("InpAxisEvt_Move_Forward_Backward_K2Node_InputAxisEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key__pf;
	bpf__ObjectiveTabCreate__pf();
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 60);
	// optimized KCST_UnconditionalGoto
	bpf__PlasmaGunEquipFunction__pf();
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 62:
			{
				__CurrentState = 63;
				break;
			}
		case 63:
			{
				if (!bpv__HoldingObjectx__pfzy)
				{
					__CurrentState = 65;
					break;
				}
			}
		case 64:
			{
				bpf__DropObject__pf();
				__CurrentState = -1;
				break;
			}
		case 65:
			{
				bpf__PickUpObject__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	Jump();
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 58);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key1__pf;
	// optimized KCST_UnconditionalGoto
	bpf__ObjectiveTabRemove__pf();
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key10__pf;
	// optimized KCST_UnconditionalGoto
	bpv__UziFiringx__pfzy = false;
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key6__pf;
	UnCrouch(false);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue1__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 21:
			{
				bpf__PistolShoot__pf();
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = 21;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue1__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 24:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Uzi_Ammo__pf, 60.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 25:
			{
				bpv__UziFiringx__pfzy = true;
			}
		case 26:
			{
				bpf__UziFireFunction__pf();
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				__CurrentState = 55;
				break;
			}
		case 55:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key9__pf;
				__CurrentState = 22;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key5__pf;
	Crouch(false);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_9(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UUserWidget* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 48);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = UWidgetBlueprintLibrary::Create(this, bpv__HealthCrossHairClass__pf, bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	bpv__HealthCrossHairWidget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 43);
	// optimized KCST_UnconditionalGoto
	bpf__UziEquipFunction__pf();
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 52);
	// optimized KCST_UnconditionalGoto
	bpf__PistolEquipFunction__pf();
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	bpf__DamageFunction__pf(b0l__K2Node_Event_Damage__pf);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_13(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AGrenade2_C__pf359902852* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpv__Grenade_Launched__pf = false;
			}
		case 4:
			{
				USkeletalMesh*  __Local__88 = ((USkeletalMesh*)nullptr);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ObjectObject(((::IsValid(bpv__PistoljGun__pf)) ? (bpv__PistoljGun__pf->SkeletalMesh) : (__Local__88)), CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__Bullet_Gun__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Bullet_Gun__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AGrenade2_C__pf359902852::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 6:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(::IsValid(bpv__Bullet_Gun__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Bullet_Gun__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AGrenade2_C__pf359902852>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Grenade_Number__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 8:
			{
				bpv__Grenade_Number__pf = b0l__Temp_int_Variable__pf;
			}
		case 9:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetSkeletalMesh(bpv__SkeletalMeshEquipped__pf, true);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), false);
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpv__Grenade_Number__pf, 1);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 16:
			{
				if (!bpv__Grenade_Launched__pf)
				{
					__CurrentState = 17;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpv__Grenade_Launched__pf = true;
			}
		case 18:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetSkeletalMesh(CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), true);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), false);
				}
			}
		case 20:
			{
				UKismetSystemLibrary::Delay(this, 0.400000, FLatentActionInfo(2, 2118362220, TEXT("ExecuteUbergraph_OurHero_13"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue__pf);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue1__pf);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_16(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorRightVector_ReturnValue__pf = AActor::GetActorRightVector();
	AddMovementInput(bpfv__CallFunc_GetActorRightVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue2__pf, false);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_17(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	AddMovementInput(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue3__pf, false);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ExecuteUbergraph_OurHero__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	return; //KCST_EndOfThread
}
void AOurHero_C__pf3840320923::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_OurHero__pf_9(48);
}
void AOurHero_C__pf3840320923::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__90;
	T__Local__90& bpp__DamageType__pf = *const_cast<T__Local__90 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_OurHero__pf_12(46);
}
void AOurHero_C__pf3840320923::bpf__InpAxisEvt_Mouse_UP_DOWN_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_OurHero__pf_14(40);
}
void AOurHero_C__pf3840320923::bpf__InpAxisEvt_Mouse_LEFT_RIGHT_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_OurHero__pf_15(38);
}
void AOurHero_C__pf3840320923::bpf__InpAxisEvt_Move_Left_Right_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_OurHero__pf_16(36);
}
void AOurHero_C__pf3840320923::bpf__InpAxisEvt_Move_Forward_Backward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_OurHero__pf_17(34);
}
void AOurHero_C__pf3840320923::bpf__PauseMenux__pfzy()
{
	bpf__ExecuteUbergraph_OurHero__pf_18(30);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_TabButton_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_0(11);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_TabButton_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_4(58);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_3Button_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_1(60);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_FButton_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_2(62);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_GButton_K2Node_InputActionEvent_16__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_13(14);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_CButton_K2Node_InputActionEvent_17__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_8(27);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_CButton_K2Node_InputActionEvent_18__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_6(31);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_2Button_K2Node_InputActionEvent_19__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_10(43);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_1Button_K2Node_InputActionEvent_20__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_11(52);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_FireButton_K2Node_InputActionEvent_21__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_7(54);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_FireButton_K2Node_InputActionEvent_22__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key10__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_5(56);
}
void AOurHero_C__pf3840320923::bpf__InpActEvt_JumpButton_K2Node_InputActionEvent_23__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key11__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_OurHero__pf_3(66);
}
void AOurHero_C__pf3840320923::bpf__UserConstructionScript__pf()
{
}
void AOurHero_C__pf3840320923::bpf__PistolEquipFunction__pf()
{
	UWeapon_HeatWidget_C__pf1818634969* bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if (!bpv__PistolAcquired__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__SkeletalMeshEquipped__pf = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetSkeletalMesh(bpv__SkeletalMeshEquipped__pf, true);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), false);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetRelativeScale3D(FVector(0.531250,1.625000,0.875000));
				}
			}
		case 7:
			{
				if(::IsValid(bpv__Muzzle__pf))
				{
					bpv__Muzzle__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
				}
			}
		case 8:
			{
				bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf = Cast<UWeapon_HeatWidget_C__pf1818634969>(bpv__WeaponWidget__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf))
				{
					bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf->bpf__Pistol_Widget__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__PistolShoot__pf()
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	APistol_Bullet_C__pf359902852* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__PistolFiredx__pfzy)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpv__PistolFiredx__pfzy = true;
			}
		case 3:
			{
				if(::IsValid(bpv__Bullet_Gun__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Bullet_Gun__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APistol_Bullet_C__pf359902852::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 4:
			{
				if(::IsValid(bpv__Bullet_Gun__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Bullet_Gun__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<APistol_Bullet_C__pf359902852>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf = UGameplayStatics::SpawnSoundAttached(CastChecked<USoundBase>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), bpv__PistoljGun__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, 0.200000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 6:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("PistolCooldown")), 0.180000, false);
			}
		case 7:
			{
				if(::IsValid(bpv__Muzzle__pf))
				{
					bpv__Muzzle__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 8:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("MuzzleFunction")), 0.100000, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__PistolCooldown__pf()
{
	bpv__PistolFiredx__pfzy = false;
}
void AOurHero_C__pf3840320923::bpf__DamageFunction__pf(float bpp__Damage__pf)
{
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ACamera2_C__pf3840320923* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue1__pf{};
	UPlayerDamage_C__pf3966595016* bpfv__CallFunc_Create_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Health__pf, bpp__Damage__pf);
				bpv__Health__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Health__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
			}
		case 4:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ACamera2_C__pf3840320923::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 5:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ACamera2_C__pf3840320923>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->SetViewTargetWithBlend(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf, 0.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
				}
			}
		case 7:
			{
				SetActorHiddenInGame(true);
			}
		case 8:
			{
				AActor::SetActorEnableCollision(false);
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UPlayerDamage_C__pf3966595016>(UWidgetBlueprintLibrary::Create(this, UPlayerDamage_C__pf3966595016::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue1__pf), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 11:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__PlayerHealthRegenerationHandle__pf);
			}
		case 12:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__HealthRegenTimerHandle__pf);
			}
		case 13:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("HealthRegenTimer")), 6.000000, false);
			}
		case 14:
			{
				bpv__HealthRegenTimerHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__PlayerHealthRegeneration__pf()
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__Health__pf, 100.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Health__pf, 1.000000);
				bpv__Health__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__PlayerHealthRegenerationHandle__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__HealthRegenTimer__pf()
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("PlayerHealthRegeneration")), 0.200000, true);
	bpv__PlayerHealthRegenerationHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
}
void AOurHero_C__pf3840320923::bpf__UziEquipFunction__pf()
{
	UWeapon_HeatWidget_C__pf1818634969* bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if (!bpv__UziAcquiredx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__SkeletalMeshEquipped__pf = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetSkeletalMesh(bpv__SkeletalMeshEquipped__pf, true);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetRelativeScale3D(FVector(0.531250,1.625000,1.375000));
				}
			}
		case 6:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), false);
				}
			}
		case 7:
			{
				bpv__Weapon_HeatCalculate__pf = 60.000000;
			}
		case 8:
			{
				if(::IsValid(bpv__Muzzle__pf))
				{
					bpv__Muzzle__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
				}
			}
		case 9:
			{
				bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf = Cast<UWeapon_HeatWidget_C__pf1818634969>(bpv__WeaponWidget__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf))
				{
					bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf->bpf__Uzi_Widget__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__MuzzleFunction__pf()
{
	if(::IsValid(bpv__Muzzle__pf))
	{
		bpv__Muzzle__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__PointLight__pf))
	{
		bpv__PointLight__pf->USceneComponent::SetVisibility(false, false);
	}
}
void AOurHero_C__pf3840320923::bpf__UziFireFunction__pf()
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_IsTimerActiveHandle_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AUzi_Bullet1_C__pf359902852* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Bullet_Gun__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Bullet_Gun__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AUzi_Bullet1_C__pf359902852::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 2:
			{
				if(::IsValid(bpv__Bullet_Gun__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Bullet_Gun__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AUzi_Bullet1_C__pf359902852>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf = UGameplayStatics::SpawnSoundAttached(CastChecked<USoundBase>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), bpv__PistoljGun__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, 0.200000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 4:
			{
				if(::IsValid(bpv__Muzzle__pf))
				{
					bpv__Muzzle__pf->USceneComponent::SetVisibility(true, false);
				}
				if(::IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Uzi_Ammo__pf, 1.000000);
				bpv__Uzi_Ammo__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 6:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue2__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("UziCooldown")), 0.070000, false);
			}
		case 7:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("MuzzleFunction")), 0.050000, false);
			}
		case 8:
			{
				bpfv__CallFunc_K2_IsTimerActiveHandle_ReturnValue__pf = UKismetSystemLibrary::K2_IsTimerActiveHandle(this, bpv__UziTimerHandle__pf);
				if (!bpfv__CallFunc_K2_IsTimerActiveHandle_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("UziCoolingDown")), 0.100000, true);
			}
		case 10:
			{
				bpv__UziTimerHandle__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__UziCooldown__pf()
{
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpv__Weapon_HeatFloat__pf = bpv__Uzi_Ammo__pf;
			}
		case 3:
			{
				if (!bpv__UziFiringx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__Uzi_Ammo__pf, 60.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				bpv__UziFiringx__pfzy = false;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpf__UziFireFunction__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__UziCoolingDown__pf()
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpv__Weapon_HeatFloat__pf = bpv__Uzi_Ammo__pf;
			}
		case 3:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Uzi_Ammo__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 4:
			{
				UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__UziTimerHandle__pf);
			}
		case 5:
			{
				bpv__Uzi_Ammo__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Uzi_Ammo__pf, 0.250000);
				bpv__Uzi_Ammo__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__PickUpObject__pf()
{
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ActorHasTag_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 250.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if (!bpfv__CallFunc_BreakHitResult_bBlockingHit__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(::IsValid(bpfv__CallFunc_BreakHitResult_HitComponent__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue__pf = bpfv__CallFunc_BreakHitResult_HitComponent__pf->UActorComponent::ComponentHasTag(FName(TEXT("pickup")));
				}
				if(::IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue__pf = bpfv__CallFunc_BreakHitResult_HitActor__pf->AActor::ActorHasTag(FName(TEXT("pickup")));
				}
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_ActorHasTag_ReturnValue__pf, bpfv__CallFunc_ComponentHasTag_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpv__HoldingObjectx__pfzy = true;
			}
		case 5:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(::IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_BreakHitResult_HitActor__pf->AActor::K2_GetActorLocation();
				}
				if(::IsValid(bpv__PhysicsHandle__pf))
				{
					bpv__PhysicsHandle__pf->UPhysicsHandleComponent::GrabComponentAtLocation(bpfv__CallFunc_BreakHitResult_HitComponent__pf, FName(TEXT("None")), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("SetPickedUpObjectLocation")), 0.050000, true);
			}
		case 7:
			{
				bpv__ObjectTimer__pf = bpfv__CallFunc_K2_SetTimer_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__DropObject__pf()
{
	bpv__HoldingObjectx__pfzy = false;
	if(::IsValid(bpv__PhysicsHandle__pf))
	{
		bpv__PhysicsHandle__pf->ReleaseComponent();
	}
	UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(this, /*out*/ bpv__ObjectTimer__pf);
}
void AOurHero_C__pf3840320923::bpf__SetPickedUpObjectLocation__pf()
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	if(::IsValid(bpv__Scene__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Scene__pf->USceneComponent::K2_GetComponentLocation();
	}
	if(::IsValid(bpv__PhysicsHandle__pf))
	{
		bpv__PhysicsHandle__pf->UPhysicsHandleComponent::SetTargetLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
	}
}
void AOurHero_C__pf3840320923::bpf__PlasmaGunEquipFunction__pf()
{
	UWeapon_HeatWidget_C__pf1818634969* bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpv__SkeletalMeshEquipped__pf, CastChecked<UObject>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				if (!bpv__PlasmaGunAcquiredx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpv__SkeletalMeshEquipped__pf = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
			}
		case 4:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetSkeletalMesh(bpv__SkeletalMeshEquipped__pf, true);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->SetRelativeScale3D(FVector(0.531250,1.625000,1.375000));
				}
			}
		case 6:
			{
				if(::IsValid(bpv__PistoljGun__pf))
				{
					bpv__PistoljGun__pf->USkeletalMeshComponent::PlayAnimation(CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), false);
				}
			}
		case 7:
			{
				bpv__Weapon_HeatCalculate__pf = 60.000000;
			}
		case 8:
			{
				bpv__Weapon_HeatCalculate__pf = 0.000000;
			}
		case 9:
			{
				if(::IsValid(bpv__Muzzle__pf))
				{
					bpv__Muzzle__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AOurHero_C__pf3840320923::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
				}
			}
		case 10:
			{
				bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf = Cast<UWeapon_HeatWidget_C__pf1818634969>(bpv__WeaponWidget__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf))
				{
					bpfv__K2Node_DynamicCast_AsWeapon_Heat_Widget__pf->bpf__PlasmaGun_Widget__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AOurHero_C__pf3840320923::bpf__ObjectiveTabCreate__pf()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UObjectives_C__pf3966595016* bpfv__CallFunc_Create_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UObjectives_C__pf3966595016>(UWidgetBlueprintLibrary::Create(this, UObjectives_C__pf3966595016::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	bpv__Objective_Tab__pf = bpfv__CallFunc_Create_ReturnValue__pf;
}
void AOurHero_C__pf3840320923::bpf__ObjectiveTabRemove__pf()
{
	if(::IsValid(bpv__Objective_Tab__pf))
	{
		bpv__Objective_Tab__pf->RemoveFromParent();
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AOurHero_C__pf3840320923::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Igra/Oruzje/Weapon_Animation/HeroCube.HeroCube 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Igra/Oruzje/Weapon_Animation/kocka2amin.kocka2amin 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Igra/Lights/GunYellow_Muzzle.GunYellow_Muzzle 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Igra/Oruzje/Weapon_Skelet/Pistol_Skelet.Pistol_Skelet 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Igra/Oruzje/Weapon_Skelet/Uzi_Skelet.Uzi_Skelet 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Igra/Oruzje/Weapon_Skelet/Greande_Skelet.Greande_Skelet 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/Gun_fire.Gun_fire 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Igra/Oruzje/Weapon_Skelet/PlasmaGun_Skelet.PlasmaGun_Skelet 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Igra/Lights/GunPlasma_Muzzle.GunPlasma_Muzzle 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AOurHero_C__pf3840320923::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{12, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Widgets/PauseMenu/PauseMenuBP.PauseMenuBP_C 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicsHandleComponent 
		{21, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkinnedMeshComponent 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMesh 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Oruzje/Ammunition/Grenade2.Grenade2_C 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Igra/Widgets/Objectives.Objectives_C 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Igra/Widgets/WeaponHud/Weapon_HeatWidget.Weapon_HeatWidget_C 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Oruzje/Ammunition/Uzi_Bullet1.Uzi_Bullet1_C 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Hero/Camera2.Camera2_C 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Igra/Widgets/PlayerDamage.PlayerDamage_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Oruzje/Ammunition/Pistol_Bullet.Pistol_Bullet_C 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Igra/Widgets/HealthBar/HeroHealthCrosshair.HeroHealthCrosshair_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AOurHero_C__pf3840320923
{
	FRegisterHelper__AOurHero_C__pf3840320923()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/Hero/OurHero"), &AOurHero_C__pf3840320923::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AOurHero_C__pf3840320923 Instance;
};
FRegisterHelper__AOurHero_C__pf3840320923 FRegisterHelper__AOurHero_C__pf3840320923::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
