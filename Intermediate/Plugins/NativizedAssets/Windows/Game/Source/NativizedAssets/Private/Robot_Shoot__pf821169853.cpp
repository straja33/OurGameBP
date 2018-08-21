#include "NativizedAssets.h"
#include "Robot_Shoot__pf821169853.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
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
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Robot_Laser__pf359902852.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "RobotShootController__pf821169853.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ARobot_Shoot_C__pf821169853::ARobot_Shoot_C__pf821169853(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ARobot_Shoot_C__pf821169853::StaticClass() == GetClass()))
	{
		ARobot_Shoot_C__pf821169853::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		__Local__0->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
		auto& __Local__3 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
		__Local__3 = ECollisionChannel::ECC_GameTraceChannel3;
		auto& __Local__4 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__5 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__4), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__5 = TArray<FResponseChannel> ();
		__Local__5.AddUninitialized(3);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__5.GetData(), 3);
		auto& __Local__6 = __Local__5[0];
		__Local__6.Channel = FName(TEXT("Visibility"));
		__Local__6.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__7 = __Local__5[1];
		__Local__7.Channel = FName(TEXT("Bullet"));
		__Local__7.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__8 = __Local__5[2];
		__Local__8.Channel = FName(TEXT("Enemy_Bullet"));
		__Local__8.Response = ECollisionResponse::ECR_Ignore;
		if(!__Local__0->IsTemplate())
		{
			__Local__0->BodyInstance.FixupData(__Local__0);
		}
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->bOrientRotationToMovement = true;
		static TWeakObjectPtr<UProperty> __Local__10{};
		const UProperty* __Local__9 = __Local__10.Get();
		if (nullptr == __Local__9)
		{
			__Local__9 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__9);
			__Local__10 = __Local__9;
		}
		(((UBoolProperty*)__Local__9)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		auto& __Local__11 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__11 = __Local__0;
		if(!__Local__2->IsTemplate())
		{
			__Local__2->BodyInstance.FixupData(__Local__2);
		}
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__Box1__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box1"));
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->bApplyImpulseOnDamage = false;
	bpv__StaticMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__13 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__StaticMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__13 = ECollisionChannel::ECC_GameTraceChannel3;
	auto& __Local__14 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__StaticMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__14), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__15 = TArray<FResponseChannel> ();
	__Local__15.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__15.GetData(), 3);
	auto& __Local__16 = __Local__15[0];
	__Local__16.Channel = FName(TEXT("NasTrigger"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__15[1];
	__Local__17.Channel = FName(TEXT("Enemy_Trigger"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__15[2];
	__Local__18.Channel = FName(TEXT("Bullet"));
	__Local__18.Response = ECollisionResponse::ECR_Overlap;
	bpv__StaticMesh__pf->RelativeLocation = FVector(2.000000, 0.000000, -2.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.406250, 0.593750, 1.437500);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__19 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__Box__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__19 = ECollisionChannel::ECC_GameTraceChannel3;
	auto& __Local__20 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Box__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__20), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__21 = TArray<FResponseChannel> ();
	__Local__21.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__21.GetData(), 11);
	auto& __Local__22 = __Local__21[0];
	__Local__22.Channel = FName(TEXT("WorldStatic"));
	__Local__22.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__23 = __Local__21[1];
	__Local__23.Channel = FName(TEXT("WorldDynamic"));
	__Local__23.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__24 = __Local__21[2];
	__Local__24.Channel = FName(TEXT("Pawn"));
	__Local__24.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__25 = __Local__21[3];
	__Local__25.Channel = FName(TEXT("PhysicsBody"));
	__Local__25.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__26 = __Local__21[4];
	__Local__26.Channel = FName(TEXT("Vehicle"));
	__Local__26.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__27 = __Local__21[5];
	__Local__27.Channel = FName(TEXT("Destructible"));
	__Local__27.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__28 = __Local__21[6];
	__Local__28.Channel = FName(TEXT("Bullet"));
	__Local__28.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__29 = __Local__21[7];
	__Local__29.Channel = FName(TEXT("Friendly"));
	__Local__29.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__30 = __Local__21[8];
	__Local__30.Channel = FName(TEXT("Enemy_Human"));
	__Local__30.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__31 = __Local__21[9];
	__Local__31.Channel = FName(TEXT("OurHero"));
	__Local__31.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__32 = __Local__21[10];
	__Local__32.Channel = FName(TEXT("Enemy_Bullet"));
	__Local__32.Response = ECollisionResponse::ECR_Ignore;
	bpv__Box__pf->RelativeLocation = FVector(2.461538, 0.000000, 1.391304);
	bpv__Box__pf->RelativeScale3D = FVector(1.692308, 1.684210, 1.543478);
	bpv__Box__pf->ComponentTags = TArray<FName> ();
	bpv__Box__pf->ComponentTags.Reserve(1);
	bpv__Box__pf->ComponentTags.Add(FName(TEXT("enemytag")));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__Box1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box1__pf->AttachToComponent(bpv__Box__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box1__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Box1__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__33 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Box1__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__33), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__34 = TArray<FResponseChannel> ();
	__Local__34.AddUninitialized(9);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__34.GetData(), 9);
	auto& __Local__35 = __Local__34[0];
	__Local__35.Channel = FName(TEXT("WorldStatic"));
	__Local__35.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__36 = __Local__34[1];
	__Local__36.Channel = FName(TEXT("WorldDynamic"));
	__Local__36.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__37 = __Local__34[2];
	__Local__37.Channel = FName(TEXT("Pawn"));
	__Local__37.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__38 = __Local__34[3];
	__Local__38.Channel = FName(TEXT("Visibility"));
	__Local__38.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__39 = __Local__34[4];
	__Local__39.Channel = FName(TEXT("Camera"));
	__Local__39.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__40 = __Local__34[5];
	__Local__40.Channel = FName(TEXT("PhysicsBody"));
	__Local__40.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__41 = __Local__34[6];
	__Local__41.Channel = FName(TEXT("Vehicle"));
	__Local__41.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__42 = __Local__34[7];
	__Local__42.Channel = FName(TEXT("Destructible"));
	__Local__42.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__43 = __Local__34[8];
	__Local__43.Channel = FName(TEXT("Enemy_Bullet"));
	__Local__43.Response = ECollisionResponse::ECR_Ignore;
	bpv__Box1__pf->RelativeLocation = FVector(27.636370, 0.000000, -11.267608);
	bpv__Box1__pf->RelativeScale3D = FVector(0.218750, 0.093750, -0.031250);
	if(!bpv__Box1__pf->IsTemplate())
	{
		bpv__Box1__pf->BodyInstance.FixupData(bpv__Box1__pf);
	}
	bpv__Health__pf = 30.000000f;
	bpv__IsDeadx__pfzy = false;
	bpv__DeathSounds__pf = TArray<USoundBase*> ();
	bpv__DeathSounds__pf.Reserve(6);
	bpv__DeathSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__DeathSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__DeathSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__DeathSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed));
	bpv__DeathSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__DeathSounds__pf.Add(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__BulletLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__BulletVelocity__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__ControllerAI__pf = nullptr;
	bpv__Damage__pf = 0.000000f;
	bpv__CanAttackx__pfzy = true;
	bpv__AttackSound__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__IdleMaterial__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AttackMaterial__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__DeathMaterial__pf = CastChecked<UMaterial>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__44 = __Local__2;
	auto& __Local__45 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__45 = __Local__1;
	auto& __Local__46 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__46 = __Local__0;
	bUseControllerRotationYaw = false;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = ARobotShootController_C__pf821169853::StaticClass();
	PrimaryActorTick.bStartWithTickEnabled = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void ARobot_Shoot_C__pf821169853::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box1__pf)
	{
		bpv__Box1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ARobot_Shoot_C__pf821169853::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ARobot_Laser_C__pf359902852::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARobotShootController_C__pf821169853::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__47 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__47);
}
PRAGMA_ENABLE_OPTIMIZATION
void ARobot_Shoot_C__pf821169853::bpf__ExecuteUbergraph_Robot_Shoot__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(b0l__K2Node_Event_DamageCauser__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = b0l__K2Node_Event_DamageCauser__pf->AActor::K2_GetActorLocation();
	}
	bpv__BulletLocation__pf = bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf;
	if(::IsValid(b0l__K2Node_Event_DamageCauser__pf))
	{
		bpfv__CallFunc_GetVelocity_ReturnValue__pf = b0l__K2Node_Event_DamageCauser__pf->GetVelocity();
	}
	bpv__BulletVelocity__pf = bpfv__CallFunc_GetVelocity_ReturnValue__pf;
	bpv__Damage__pf = b0l__K2Node_Event_Damage__pf;
	// optimized KCST_UnconditionalGoto
	bpf__Damage_Function__pf();
	return; // KCST_GotoReturn
}
void ARobot_Shoot_C__pf821169853::bpf__ExecuteUbergraph_Robot_Shoot__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpv__ControllerAI__pf = b0l__K2Node_Event_NewController__pf;
	return; // KCST_GotoReturn
}
void ARobot_Shoot_C__pf821169853::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__48;
	T__Local__48& bpp__DamageType__pf = *const_cast<T__Local__48 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_Robot_Shoot__pf_0(4);
}
void ARobot_Shoot_C__pf821169853::bpf__ReceivePossessed__pf(AController* bpp__NewController__pf)
{
	b0l__K2Node_Event_NewController__pf = bpp__NewController__pf;
	bpf__ExecuteUbergraph_Robot_Shoot__pf_1(2);
}
void ARobot_Shoot_C__pf821169853::bpf__UserConstructionScript__pf()
{
}
void ARobot_Shoot_C__pf821169853::bpf__Damage_Function__pf()
{
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	USoundBase* bpfv__CallFunc_Array_Get_Item__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ARobot_Shoot_C__pf821169853::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), bpv__BulletLocation__pf, FRotator(0.000000,0.000000,0.000000), FVector(0.400000,0.400000,0.400000), true, EPSCPoolMethod::None);
			}
		case 2:
			{
				if (!bpv__IsDeadx__pfzy)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpf__Impulse_Function__pf();
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Health__pf, bpv__Damage__pf);
				bpv__Health__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Health__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				bpv__IsDeadx__pfzy = true;
			}
		case 7:
			{
				if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
				{
					(*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->SetSimulatePhysics(true);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__ControllerAI__pf))
				{
					bpv__ControllerAI__pf->UnPossess();
				}
			}
		case 11:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->SetMaterial(0, bpv__DeathMaterial__pf);
				}
			}
		case 12:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpv__DeathSounds__pf);
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, bpfv__CallFunc_Array_LastIndex_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__DeathSounds__pf, bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf = UGameplayStatics::SpawnSoundAttached(bpfv__CallFunc_Array_Get_Item__pf, bpv__Box__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 13:
			{
				bpf__Impulse_Function__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ARobot_Shoot_C__pf821169853::bpf__Impulse_Function__pf()
{
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = bpv__StaticMesh__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__BulletVelocity__pf, 3.500000);
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->AddImpulseAtLocation(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpv__BulletLocation__pf, FName(TEXT("None")));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ARobot_Shoot_C__pf821169853::bpf__SetAttackTrue__pf()
{
	bpv__CanAttackx__pfzy = true;
}
void ARobot_Shoot_C__pf821169853::bpf__SetMaterial__pf()
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsDeadx__pfzy)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->SetMaterial(0, bpv__DeathMaterial__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->SetMaterial(0, bpv__IdleMaterial__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ARobot_Shoot_C__pf821169853::bpf__AttackFunction__pf()
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ARobot_Laser_C__pf359902852* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__CanAttackx__pfzy)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__CanAttackx__pfzy = false;
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				if(::IsValid(bpv__Box1__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Box1__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue1__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_BreakRotator_Roll__pf, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue1__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				if(::IsValid(bpv__Box1__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Box1__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ARobot_Laser_C__pf359902852::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, ((AActor*)nullptr));
			}
		case 5:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				if(::IsValid(bpv__Box1__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Box1__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_BreakRotator_Roll__pf, bpfv__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ARobot_Laser_C__pf359902852>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				if(::IsValid(bpv__StaticMesh__pf))
				{
					bpv__StaticMesh__pf->SetMaterial(0, bpv__AttackMaterial__pf);
				}
			}
		case 7:
			{
				bpfv__CallFunc_SpawnSoundAttached_ReturnValue__pf = UGameplayStatics::SpawnSoundAttached(bpv__AttackSound__pf, bpv__StaticMesh__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 8:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue1__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("SetMaterial")), 0.200000, false);
			}
		case 9:
			{
				bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("SetAttackTrue")), 1.000000, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ARobot_Shoot_C__pf821169853::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/StarterContent/Architecture/Cube_2.Cube_2 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Igra/Textures/Pre_Polish/ShootRobotIdle_Mat.ShootRobotIdle_Mat 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Robot_Die_1.Robot_Die_1 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Robot_Die_2.Robot_Die_2 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Robot_Die_3.Robot_Die_3 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Robot_Die_4.Robot_Die_4 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Robot_Die_5.Robot_Die_5 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Robot_Die_6.Robot_Die_6 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Igra/Sounds/NewFolder/Shoot_Robot_Laser.Shoot_Robot_Laser 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Igra/Textures/Pre_Polish/ShootRobotShoot_Mat.ShootRobotShoot_Mat 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Igra/Textures/Pre_Polish/ShootRobotDead_Mat.ShootRobotDead_Mat 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Igra/Particles/P_cube_SPARK_2.P_cube_SPARK_2 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ARobot_Shoot_C__pf821169853::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{21, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Material 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/Oruzje/Ammunition/Robot_Laser.Robot_Laser_C 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Igra/AI/Robot_Shoot/RobotShootController.RobotShootController_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ARobot_Shoot_C__pf821169853
{
	FRegisterHelper__ARobot_Shoot_C__pf821169853()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Igra/AI/Robot_Shoot/Robot_Shoot"), &ARobot_Shoot_C__pf821169853::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ARobot_Shoot_C__pf821169853 Instance;
};
FRegisterHelper__ARobot_Shoot_C__pf821169853 FRegisterHelper__ARobot_Shoot_C__pf821169853::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
