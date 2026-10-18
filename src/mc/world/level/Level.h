#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/GamePublishSetting.h"
#include "mc/platform/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/item/registry/ItemRegistryRef.h"
#include "mc/world/level/ActorValidationError.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockSource.h"
#endif // @header-generator platform
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/ILevel.h"
#include "mc/world/level/IWorldRegistriesProvider.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class Abilities;
class Actor;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorDimensionTransferManager;
class ActorEventBroadcaster;
class ActorEventCoordinator;
class ActorFactory;
class ActorFetcher;
class ActorGarbageCollector;
class ActorInfoRegistry;
class ActorManager;
class ActorRuntimeID;
class ActorRuntimeIDManager;
class ActorSoundIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
class ArmorTrimUnloader;
#else // @header-generator platform
#endif // @header-generator platform
class AutomationBehaviorTreeGroup;
class AutonomousActorManager;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseLightTextureImageBuilder;
#else // @header-generator platform
#endif // @header-generator platform
class BehaviorFactory;
class BiomeComponentFactory;
class BiomeManager;
class BiomeRegistry;
class Block;
class BlockActorLevelListener;
class BlockChangeContext;
class BlockDefinitionGroup;
class BlockEventCoordinator;
class BlockPalette;
class BlockPos;
class BlockReducer;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class BlockType;
class BlockTypeRegistry;
class BossEventSubscriptionManager;
class CameraPresets;
#if defined(LL_PLAT_A) // @header-generator platform
class CameraRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class ChangeDimensionRequest;
class ChunkGenerationManager;
class ChunkPos;
class ChunkSource;
class ChunkTickOffsetManager;
class ChunkTickRangeManager;
class ChunkViewSource;
class ChunkViewTrackerManager;
class ClientPlayerEventCoordinator;
class Command;
class CommandOrigin;
class CompoundTag;
class ContainerRegistry;
class DensityFunctionRegistry;
class Dimension;
class DimensionConversionData;
class DimensionManager;
class DisplayActorManager;
class EducationSettingsManager;
class EntityContext;
class EntityRegistry;
class EntitySystems;
class EntitySystemsManager;
class EventCoordinatorManager;
class Experiments;
class Explosion;
class FeatureRegistry;
class FeatureTypeFactory;
class GameRules;
class GameplayUserManager;
class HashedString;
class HitResult;
class HitResultWrapper;
class IConstBlockSource;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class IEntityRegistryOwner;
#if defined(LL_PLAT_A) // @header-generator platform
class ILevelChunkEventManagerConnector;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelRandom;
class IMinecraftEventing;
#if defined(LL_PLAT_A) // @header-generator platform
class IPlayerDimensionTransferConnector;
#else // @header-generator platform
#endif // @header-generator platform
class IRandom;
class ISubChunkLighter;
class IUnknownBlockTypeRegistry;
class InternalComponentRegistry;
class ItemEventCoordinator;
class JigsawStructureRegistry;
class LayeredAbilities;
class LevelBlockDestroyer;
class LevelChunk;
class LevelChunkEventManager;
class LevelChunkMetaDataManager;
class LevelChunkPerformanceTelemetry;
class LevelChunkSaveManager;
class LevelCrashDumpManager;
class LevelData;
class LevelEventCoordinator;
class LevelEventManager;
class LevelListener;
class LevelSeed64;
class LevelSettings;
class LevelSoundManager;
class LevelStorage;
class LevelStorageManager;
class LinkedAssetValidator;
class LoadingScreenIdManager;
class LootTables;
class MapItemSavedData;
class Mob;
class MolangPackSettingsCache;
class MolangVariableMap;
class NavigationComponent;
class NetEventCallback;
class NetworkIdentifier;
class NpcDialogueStorage;
class NpcEventCoordinator;
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class Particle;
#else // @header-generator platform
#endif // @header-generator platform
class ParticleProvider;
class Path;
class PauseManager;
class PermissionsHandler;
class PhotoItemSavedDataCollection;
class PhotoManager;
class PhotoStorage;
class Player;
class PlayerAbilitiesManager;
class PlayerDeathManager;
class PlayerDimensionTransferManager;
class PlayerEventCoordinator;
#if defined(LL_PLAT_A) // @header-generator platform
class PlayerLimboActorManager;
#else // @header-generator platform
#endif // @header-generator platform
class PlayerListEntry;
class PlayerListManager;
class PlayerLocationReceiver;
class PlayerLocationSender;
class PlayerMovementSettingsManager;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
class PlayerSleepManager;
class PlayerTickManager;
class PortalForcer;
class ProjectileFactory;
class PropertyGroupManager;
class Random;
class Recipes;
class ResourcePackManager;
class SavedDataStorage;
class Scheduler;
class Scoreboard;
class ScriptDeferredEventCoordinator;
class ScriptingEventCoordinator;
class SerializedSkinRef;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerParticleManager;
class ServerPlayerEventCoordinator;
class ServerPlayerSleepManager;
class SoundPlayerInterface;
class Spawner;
class StartGamePacket;
class StrictEntityContext;
class StructureManager;
class StructureSpawnRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class SubChunkManager;
#else // @header-generator platform
#endif // @header-generator platform
class SubChunkPacket;
#if defined(LL_PLAT_A) // @header-generator platform
class SubChunkRequestManager;
#else // @header-generator platform
#endif // @header-generator platform
class SurfaceBuilderRegistry;
class TagCacheManager;
class TaskGroup;
class TempEPtrManager;
class TickDeltaTimeManager;
class TickingAreaList;
class TickingAreasManager;
class TradeTables;
class TrimMaterialRegistry;
class TrimPatternRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class TrustedSkinHelper;
#else // @header-generator platform
#endif // @header-generator platform
class UniqueIDManager;
class UserEntityIdentifierComponent;
class VanillaActorEventListenerManager;
class Vec3;
class VolumeEntityManagerServer;
class WeakEntityRef;
class WeatherManager;
class WorldClockRegistry;
class _TickPtr;
struct ActorUniqueID;
struct AdventureSettings;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct Bounds;
struct BreakingItemParticleData;
struct DerivedDimensionArguments;
struct DimensionFactoryAndManager;
struct DimensionType;
struct LevelArguments;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LevelTagIDType;
struct LevelTagSetIDType;
#endif // @header-generator platform
struct PlaySoundOptions;
struct PlayerMovementSettings;
struct PlayerSleepStatus;
struct PlayerSpawnDimensionResolution;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
struct Tick;
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace cereal { struct ReflectionCtx; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ArmorTrimUnloader;
class BaseLightTextureImageBuilder;
class CameraRegistry;
class Particle;
class SubChunkManager;
class SubChunkRequestManager;
class TrustedSkinHelper;
#endif // @header-generator platform
// clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

class ServerLevel;
#endif // @header-generator platform

class Level : public ::ILevel, public ::BlockSourceListener, public ::IWorldRegistriesProvider {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    [[nodiscard]] ServerLevel& asServer() { return *reinterpret_cast<ServerLevel*>(this); }

public:
#endif // @header-generator platform
    // Level inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using RegionSet = std::unordered_set<BlockSource*>;
#else // @header-generator platform
    using RegionSet = ::std::unordered_set<::BlockSource*>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                              mPacketSender;
    ::ll::UntypedStorage<8, 16>                                              mTagRegistry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorInfoRegistry>>            mActorInfoRegistry;
    ::ll::TypedStorage<8, 24, std::vector<LevelListener*>>                   mListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelStorageManager>>           mLevelStorageManager;
    ::ll::UntypedStorage<8, 24>                                              mLevelData;
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockSource*>>              mRegions;
    ::ll::UntypedStorage<8, 24>                                              mLinkedAssetValidator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDefinitionGroup>>          mEntityDefinitions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorAnimationGroup>>           mActorAnimationGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorAnimationControllerGroup>> mActorAnimationControllerGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockDefinitionGroup>>          mBlockDefinitions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TrimPatternRegistry>>          mTrimPatternRegistry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TrimMaterialRegistry>>         mTrimMaterialRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Spawner>>                       mMobSpawner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProjectileFactory>>             mProjectileFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PropertyGroupManager>>          mActorPropertyGroups;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CameraPresets>>                 mCameraPresets;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BehaviorFactory>>               mBehaviorFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AutomationBehaviorTreeGroup>>   mAutomationBehaviorTreeDefinitions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockPalette>>                  mGlobalBlockPalette;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Recipes>>                       mRecipes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockReducer>>                  mBlockReducer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NpcDialogueStorage>>            mNpcDialogueStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InternalComponentRegistry>>     mInternalComponentRegistry;
    ::ll::UntypedStorage<8, 16>                                              mPortalForcer;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                       mItemRegistry;
    ::ll::UntypedStorage<8, 24>                                              mBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IUnknownBlockTypeRegistry>>     mUnknownBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BossEventSubscriptionManager>>  mBossEventSubscriptionManager;
    ::ll::UntypedStorage<1, 16>                                              mContainerRegistry;
    ::ll::UntypedStorage<8, 16>                                              mHitResultWrapper;
    ::ll::TypedStorage<8, 24, std::string>                                   mImmersiveReaderString;
    ::ll::UntypedStorage<1, 16>                                              mLevelRandom;
    ::ll::UntypedStorage<8, 24>                                              mNetEventCallback;
    ::ll::TypedStorage<1, 1, bool const>                                     mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                  mSubClientId;
    ::ll::TypedStorage<1, 1, bool>                                           mIsExporting;
    ::ll::TypedStorage<1, 1, bool>                                           mDisablePlayerInteractions;
    ::ll::TypedStorage<1, 1, bool>                                           mSimPaused;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                     mMainThreadTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                     mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                   mScheduler;
    ::ll::TypedStorage<8, 24, std::string>                                   mLevelId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TickingAreasManager>>           mTickingAreasMgr;
    ::ll::UntypedStorage<8, 16>                                              mTempEPtrManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PhotoItemSavedDataCollection>>  mPhotoItemSavedDataCollection;
    ::ll::TypedStorage<1, 1, bool>                                           mTearingDown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                          mEventing;
    ::ll::UntypedStorage<8, 16>                                              mEventCoordinatorManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelSoundManager>>             mLevelSoundManager;
    ::ll::UntypedStorage<8, 24>                                              mStructureManager;
    ::ll::UntypedStorage<8, 16>                                              mLevelChunkPerformanceTelemetry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LootTables>>                    mLootTables;
    ::ll::TypedStorage<8, 8, ::BlockType const*>                             mRegisteredBorderBlock;
    ::ll::UntypedStorage<8, 16>                                              mJigsawStructureRegistry;
    ::ll::UntypedStorage<8, 16>                                              mStructureSpawnRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<DimensionFactoryAndManager>>> mDimensionFactoryAndManager;
    ::ll::UntypedStorage<1, 24>                                                            mLevelEntity;
    ::ll::UntypedStorage<8, 24>                                                            mEntityRegistryOwner;
    ::ll::UntypedStorage<1, 16>                                                            mPauseManager;
    ::ll::UntypedStorage<1, 16>                                                            mEntitySystemsManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureRegistry>>                             mFeatureRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureTypeFactory>>                          mFeatureTypeFactory;
    ::ll::UntypedStorage<8, 40>                                                      mLightTextureImageBuilderFactory;
    ::ll::UntypedStorage<8, 16>                                                      mEducationSettingsManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerCapabilities::ISharedController>> mCapabilities;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockActorLevelListener>>               mBlockActorLevelListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaActorEventListenerManager>>      mVanillaActorEventListenerManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PositionTrackingDB::PositionTrackingDBClient>> mPositionTrackerDBClient;
    ::ll::TypedStorage<1, 1, bool>                                                          mClientSideChunkGenEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                          mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeManager>>                                 mBiomeManager;
    ::ll::UntypedStorage<8, 16>                                                             mActorGarbageCollector;
    ::ll::UntypedStorage<8, 16>                                                             mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnRemoveActorEntityReferences;
    ::ll::UntypedStorage<8, 16>                                         mAutonomousActorManager;
    ::ll::UntypedStorage<8, 16>                                         mActorFetcher;
    ::ll::UntypedStorage<8, 16>                                         mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scoreboard>>               mScoreboard;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MolangPackSettingsCache>> mMolangPackSettingsCache;
    ::ll::UntypedStorage<8, 16>                                         mActorRuntimeIDManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerLocationReceiver;
    ::ll::UntypedStorage<8, 16>                                         mPlayerLocationSender;
    ::ll::UntypedStorage<8, 16>                                         mPlayerListManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerTickManager;
    ::ll::UntypedStorage<8, 16>                                         mServerParticleManager;
    ::ll::UntypedStorage<8, 16>                                         mParticleProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnSendServerLegacyParticleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnAddTerrainParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnAddTerrainSlideEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnAddBreakingItemParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnAddBiomeTintedParticleEffectSubscription;
    ::ll::UntypedStorage<8, 16>                                         mChunkTickRangeManager;
    ::ll::UntypedStorage<8, 16>                                         mChunkViewTrackerManager;
    ::ll::UntypedStorage<8, 16>                                         mActorEventBroadcaster;
    ::ll::UntypedStorage<1, 16>                                         mCerealContext;
    ::ll::UntypedStorage<8, 16>                                         mActorFactory;
    ::ll::UntypedStorage<8, 16>                                         mLoadingScreenIdManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerDimensionTransferManager;
    ::ll::UntypedStorage<8, 16>                                         mLevelCrashDumpManager;
    ::ll::UntypedStorage<1, 16>                                         mUniqueIDManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnPictureTakenSubscription;
    ::ll::UntypedStorage<8, 16>                                         mPhotoManager;
    ::ll::UntypedStorage<8, 16>                                         mLevelEventManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mLevelEventDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mLevelEventCompoundTagSubscription;
    ::ll::UntypedStorage<8, 16>                                         mChunkTickOffsetManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerMovementSettingsManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerAbilitiesManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerPermissionsManager;
    ::ll::UntypedStorage<8, 16>                                         mPlayerPermissionsSynchroniser;
    ::ll::UntypedStorage<8, 16>                                         mLevelChunkEventManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnChunkLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnChunkReloadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnChunkDiscardedSubscription;
    ::ll::UntypedStorage<8, 16>                                         mActorDimensionTransferManager;
    ::ll::UntypedStorage<8, 16>                                         mLevelBlockDestroyer;
    ::ll::UntypedStorage<8, 16>                                         mTickDeltaTimeManager;
    ::ll::UntypedStorage<1, 16>                                         mLevelChunkSaveManager;
    ::ll::UntypedStorage<1, 16>                                         mWeatherManager;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                         mHandleLowMemoryOnTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mLowMemorySubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
    ::ll::UntypedStorage<1, 16>                                                 mDensityFunctionRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const> mPacketSender;
    ::ll::TypedStorage<
        8,
        16,
        ::gsl::not_null<
            ::Bedrock::UniqueOwnerPointer<::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>>>>
                                                                                  mTagRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorInfoRegistry>>             mActorInfoRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelListener*>>                    mListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageManager>>            mLevelStorageManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData> const>   mLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockSource*>>               mRegions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>> mLinkedAssetValidator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionGroup>>           mEntityDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationGroup>>            mActorAnimationGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationControllerGroup>>  mActorAnimationControllerGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockDefinitionGroup>>           mBlockDefinitions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TrimPatternRegistry>>           mTrimPatternRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TrimMaterialRegistry>>          mTrimMaterialRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Spawner>>                        mMobSpawner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProjectileFactory>>              mProjectileFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PropertyGroupManager>>           mActorPropertyGroups;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraPresets>>                  mCameraPresets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorFactory>>                mBehaviorFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AutomationBehaviorTreeGroup>>    mAutomationBehaviorTreeDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPalette>>                   mGlobalBlockPalette;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Recipes>>                        mRecipes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockReducer>>                   mBlockReducer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NpcDialogueStorage>>             mNpcDialogueStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InternalComponentRegistry>>      mInternalComponentRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PortalForcer>>> mPortalForcer;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                                        mItemRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>>             mBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IUnknownBlockTypeRegistry>>                  mUnknownBlockTypeRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BossEventSubscriptionManager>>       mBossEventSubscriptionManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::ContainerRegistry>> const> mContainerRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::HitResultWrapper>>> mHitResultWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mImmersiveReaderString;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::ILevelRandom>>>    mLevelRandom;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::NetEventCallback>> mNetEventCallback;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                   mSubClientId;
    ::ll::TypedStorage<1, 1, bool>                                            mIsExporting;
    ::ll::TypedStorage<1, 1, bool>                                            mDisablePlayerInteractions;
    ::ll::TypedStorage<1, 1, bool>                                            mSimPaused;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                  mMainThreadTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                  mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                    mScheduler;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mLevelId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TickingAreasManager>>        mTickingAreasMgr;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TempEPtrManager>>> mTempEPtrManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PhotoItemSavedDataCollection>> mPhotoItemSavedDataCollection;
    ::ll::TypedStorage<1, 1, bool>                                              mTearingDown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                             mEventing;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::EventCoordinatorManager>>>
                                                                                 mEventCoordinatorManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelSoundManager>>             mLevelSoundManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelChunkPerformanceTelemetry>>>
                                                              mLevelChunkPerformanceTelemetry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootTables>> mLootTables;
    ::ll::TypedStorage<8, 8, ::BlockType const*>              mRegisteredBorderBlock;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::JigsawStructureRegistry>>>
        mJigsawStructureRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::StructureSpawnRegistry>>>
        mStructureSpawnRegistry;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DimensionFactoryAndManager>>>
                                                                                     mDimensionFactoryAndManager;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                            mLevelEntity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner>> mEntityRegistryOwner;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::PauseManager>>                            mPauseManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::EntitySystemsManager>>>   mEntitySystemsManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureRegistry>>                   mFeatureRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureTypeFactory>>                mFeatureTypeFactory;
    ::ll::TypedStorage<8, 64, ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>>
        mLightTextureImageBuilderFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::EducationSettingsManager>>>
                                                                                         mEducationSettingsManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerCapabilities::ISharedController>> mCapabilities;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockActorLevelListener>>               mBlockActorLevelListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaActorEventListenerManager>> mVanillaActorEventListenerManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PositionTrackingDB::PositionTrackingDBClient>>
                                                                mPositionTrackerDBClient;
    ::ll::TypedStorage<1, 1, bool>                              mClientSideChunkGenEnabled;
    ::ll::TypedStorage<1, 1, bool>                              mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BiomeManager>> mBiomeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorGarbageCollector>>>
                                                                                              mActorGarbageCollector;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorManager>>> mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::AutonomousActorManager>>>
                                                                                              mAutonomousActorManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorFetcher>>> mActorFetcher;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::GameplayUserManager>>>
                                                                            mGameplayUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scoreboard>>               mScoreboard;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MolangPackSettingsCache>> mMolangPackSettingsCache;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorRuntimeIDManager>>>
                                                                                       mActorRuntimeIDManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::PlayerLocationReceiver>> mPlayerLocationReceiver;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::PlayerLocationSender>>   mPlayerLocationSender;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerListManager>>> mPlayerListManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerTickManager>>> mPlayerTickManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerParticleManager>>>
        mServerParticleManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ParticleProvider>>> mParticleProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSendServerLegacyParticleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddTerrainParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddTerrainSlideEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddBreakingItemParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAddBiomeTintedParticleEffectSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkTickRangeManager>>>
        mChunkTickRangeManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkViewTrackerManager>>>
                                                                                              mChunkViewTrackerManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::ActorEventBroadcaster> const>   mActorEventBroadcaster;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::cereal::ReflectionCtx>>>           mCerealContext;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorFactory>>> mActorFactory;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LoadingScreenIdManager>>        mLoadingScreenIdManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerDimensionTransferManager>>>
        mPlayerDimensionTransferManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelCrashDumpManager>> const>
                                                                              mLevelCrashDumpManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::UniqueIDManager>>> mUniqueIDManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnPictureTakenSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PhotoManager>>>      mPhotoManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelEventManager>>> mLevelEventManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelEventDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelEventCompoundTagSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ChunkTickOffsetManager>>>
        mChunkTickOffsetManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerMovementSettingsManager>>>
        mPlayerMovementSettingsManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerAbilitiesManager>>>
        mPlayerAbilitiesManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerPermissionsManager>>>
        mPlayerPermissionsManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerPermissionsSynchroniser>>>
        mPlayerPermissionsSynchroniser;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelChunkEventManager>>>
                                                               mLevelChunkEventManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkReloadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscardedSubscription;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorDimensionTransferManager>>>
        mActorDimensionTransferManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelBlockDestroyer>>>
        mLevelBlockDestroyer;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::TickDeltaTimeManager>>>
                                                                                      mTickDeltaTimeManager;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::LevelChunkSaveManager>>                    mLevelChunkSaveManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::WeatherManager>>>          mWeatherManager;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                     mHandleLowMemoryOnTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mLowMemorySubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry>>   mShapeRegistry;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::DensityFunctionRegistry>>> mDensityFunctionRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Level& operator=(Level const&);
    Level(Level const&);
    Level();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Level();
#else // @header-generator platform
    virtual ~Level() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);
#else // @header-generator platform
    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startLeaveGame();
#else // @header-generator platform
    virtual void startLeaveGame() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLeaveGameDone();
#else // @header-generator platform
    virtual bool isLeaveGameDone() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDimensionTypeActive(::DimensionType) const;
#else // @header-generator platform
    virtual bool isDimensionTypeActive(::DimensionType dimensionType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<Dimension> getOrCreateDimension(::DimensionType);
#else // @header-generator platform
    virtual ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<Dimension> getDimension(::DimensionType) const;
#else // @header-generator platform
    virtual ::WeakRef<::Dimension> getDimension(::DimensionType id) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const* playerTag) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachDimension(std::function<bool (const Dimension&)>) const;
#else // @header-generator platform
    virtual void forEachDimension(::std::function<bool(::Dimension&)> callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachDimension(std::function<bool (Dimension&)>);
#else // @header-generator platform
    virtual void forEachDimension(::std::function<bool(::Dimension const&)> callback) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DimensionManager const& getDimensionManager() const;
#else // @header-generator platform
    virtual uint getChunkTickRange() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DimensionManager& getDimensionManager();
#else // @header-generator platform
    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>> getDimensionManagerNonOwner() const;
#else // @header-generator platform
    virtual ::PortalForcer& getPortalForcer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>> getDimensionManagerNonOwner();
#else // @header-generator platform
    virtual void requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getChunkTickRange() const;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager>
    getPlayerDimensionTransferManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const;
#else // @header-generator platform
    virtual void
    entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PortalForcer& getPortalForcer();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager>
    getActorDimensionTransferManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&);
#else // @header-generator platform
    virtual ::Spawner& getSpawner() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerDimensionTransferManager>> getPlayerDimensionTransferManager();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager>
    getBossEventSubscriptionManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void entityChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3>);
#else // @header-generator platform
    virtual ::ProjectileFactory& getProjectileFactory() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorDimensionTransferManager>> getActorDimensionTransferManager();
#else // @header-generator platform
    virtual ::ActorDefinitionGroup* getEntityDefinitions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Spawner& getSpawner() const;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> getActorAnimationGroup() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BossEventSubscriptionManager>> getBossEventSubscriptionManager();
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ProjectileFactory& getProjectileFactory() const;
#else // @header-generator platform
    virtual ::BlockDefinitionGroup* getBlockDefinitions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorDefinitionGroup* getEntityDefinitions() const;
#else // @header-generator platform
    virtual ::PropertyGroupManager& getActorPropertyGroup() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> getActorAnimationGroup() const;
#else // @header-generator platform
    virtual ::CameraPresets const& getCameraPresets() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<ActorAnimationControllerGroup> getActorAnimationControllerGroup() const;
#else // @header-generator platform
    virtual ::CameraPresets& getCameraPresets() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockDefinitionGroup* getBlockDefinitions() const;
#else // @header-generator platform
    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int presetIndex) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PropertyGroupManager& getActorPropertyGroup() const;
#else // @header-generator platform
    virtual bool getDisablePlayerInteractions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CameraPresets& getCameraPresets();
#else // @header-generator platform
    virtual void setDisablePlayerInteractions(bool const disable) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CameraPresets const& getCameraPresets() const;
#else // @header-generator platform
    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int) const;
#else // @header-generator platform
    virtual ::BehaviorFactory& getBehaviorFactory() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getDisablePlayerInteractions() const;
#else // @header-generator platform
    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDisablePlayerInteractions(bool const);
#else // @header-generator platform
    virtual ::DimensionConversionData getDimensionConversionData() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const;
#else // @header-generator platform
    virtual float getSpecialMultiplier(::DimensionType dimensionType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BehaviorFactory& getBehaviorFactory() const;
#else // @header-generator platform
    virtual bool hasCommandsEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const;
#else // @header-generator platform
    virtual bool useMsaGamertagsOnly() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const;
#else // @header-generator platform
    virtual void setMsaGamertagsOnly(bool msaGamertagsOnly) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DimensionConversionData getDimensionConversionData() const;
#else // @header-generator platform
    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getSpecialMultiplier(::DimensionType) const;
#else // @header-generator platform
    virtual ::Actor* putEntity(
        ::BlockSource&              region,
        ::ActorUniqueID             id,
        ::ActorRuntimeID            runtimeId,
        ::OwnerPtr<::EntityContext> entity
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasCommandsEnabled() const;
#else // @header-generator platform
    virtual ::Actor*
    putEntity(::BlockSource& region, ::ActorUniqueID id, ::OwnerPtr<::EntityContext> entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useMsaGamertagsOnly() const;
#else // @header-generator platform
    virtual ::Actor* addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setMsaGamertagsOnly(bool);
#else // @header-generator platform
    virtual ::Actor* addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    virtual void addUser(::OwnerPtr<::EntityContext> userEntity) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addGlobalEntity(::BlockSource&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>) /*override*/;
#else // LL_PLAT_C
    virtual ::Actor* addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addAutonomousEntity(::BlockSource&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void removeDisplayEntity(::WeakEntityRef) /*override*/;
#else // LL_PLAT_C
    virtual void removeDisplayEntity(::WeakEntityRef entity) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addUser(::OwnerPtr<EntityContext>);
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    virtual void suspendPlayer(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    virtual void resumePlayer(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>);
#else // @header-generator platform
    virtual bool isPlayerSuspended(::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeDisplayEntity(::WeakEntityRef);
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> getGameplayUserManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<DisplayActorManager> getDisplayActorManager();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> getGameplayUserManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void suspendPlayer(::Player&);
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> getPlayerLocationReceiver() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resumePlayer(::Player&);
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> removeActorAndTakeEntity(::WeakEntityRef entityRef) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayerSuspended(::Player&) const;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const GameplayUserManager>> getGameplayUserManager() const;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>> getGameplayUserManager();
#else // @header-generator platform
    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<PlayerLocationReceiver> getPlayerLocationReceiver();
#else // @header-generator platform
    virtual ::Actor* fetchEntity(::ActorUniqueID actorId, bool getRemoved) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> removeActorAndTakeEntity(::WeakEntityRef);
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> getActorFetcher() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef);
#else // @header-generator platform
    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&);
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> getActorRuntimeIDManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID, bool) const;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> getActorRuntimeIDManager() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const;
#else // @header-generator platform
    virtual ::Mob* getMob(::ActorUniqueID mobId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorFetcher>> getActorFetcher() const;
#else // @header-generator platform
    virtual ::Player* getPlayer(::std::string const& name) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID, bool) const;
#else // @header-generator platform
    virtual ::Player* getPlayer(::mce::UUID const& uuid) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorRuntimeIDManager>> getActorRuntimeIDManager() const;
#else // @header-generator platform
    virtual ::Player* getPlayer(::ActorUniqueID entityID) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorRuntimeIDManager>> getActorRuntimeIDManager();
#else // @header-generator platform
    virtual ::Player* getPlayerByXuid(::std::string const& xuid) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Mob* getMob(::ActorUniqueID) const;
#else // @header-generator platform
    virtual ::Player* getPlatformPlayer(::std::string const& platformOnlineId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayer(::mce::UUID const&) const;
#else // @header-generator platform
    virtual ::Player* getPlayerFromServerId(::std::string const& serverId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayer(std::string const&) const;
#else // @header-generator platform
    virtual ::Player* getRuntimePlayer(::ActorRuntimeID runtimeId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayerByXuid(std::string const&) const;
#else // @header-generator platform
    virtual int getNumRemotePlayers() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayer(::ActorUniqueID) const;
#else // @header-generator platform
    virtual ::Player* getPrimaryLocalPlayer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlatformPlayer(std::string const&) const;
#else // @header-generator platform
    virtual ::IMinecraftEventing& getEventing() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayerFromServerId(std::string const&) const;
#else // @header-generator platform
    virtual ::mce::Color getPlayerColor(::Player const& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getRuntimePlayer(::ActorRuntimeID) const;
#else // @header-generator platform
    virtual ::Tick const& getCurrentTick() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getNumRemotePlayers() const;
#else // @header-generator platform
    virtual ::Tick const getCurrentServerTick() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPrimaryLocalPlayer() const;

    virtual ::IMinecraftEventing& getEventing();

    virtual ::mce::Color getPlayerColor(::Player const&) const;

    virtual ::Tick const& getCurrentTick() const;

    virtual ::Tick const getCurrentServerTick() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const TickDeltaTimeManager>> getTickDeltaTimeManager() const;

    virtual std::shared_ptr<const VoxelShapes::VoxelShapeRegistry> getShapeRegistry() const;

    virtual std::shared_ptr<VoxelShapes::VoxelShapeRegistry> getMutableShapeRegistry() const;

    virtual ::BiomeRegistry& getBiomeRegistry();

    virtual ::BiomeRegistry const& getBiomeRegistry() const;

    virtual ::BlockPalette& getBlockPalette();

    virtual ::BlockPalette const& getBlockPalette() const;

    virtual ::FeatureRegistry& getFeatureRegistry();

    virtual ::FeatureRegistry const& getFeatureRegistry() const;

    virtual ::FeatureTypeFactory& getFeatureTypeFactory();

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const;

    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry();

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const;

    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry();

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> getStructureManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> const getStructureManager() const;

    virtual ::BiomeComponentFactory& getBiomeComponentFactory();

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const;

    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const;

    virtual ::BiomeManager& getBiomeManager();

    virtual ::BiomeManager const& getBiomeManager() const;

    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& getDimensionFactory();

    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&> const& getDimensionFactory() const;

    virtual ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&>& getLightTextureImageBuilderFactory();

    virtual ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&> const& getLightTextureImageBuilderFactory() const;

    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider();

    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> getWorldClockRegistry();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const;

    virtual void addListener(::LevelListener&);

    virtual void removeListener(::LevelListener&);

    virtual void tickEntities();

    virtual void tickEntitySystems();

    virtual ::StackRefResult<const PauseManager> getPauseManager() const;

    virtual ::StackRefResult<PauseManager> getPauseManager();

    virtual void onPlayerDeath(::Player&, ::ActorDamageSource const&);

    virtual void tick();

    virtual bool explode(::Explosion&);

    virtual bool explode(::BlockSource&, ::Actor*, ::Vec3 const&, float, bool, bool, float, bool);

    virtual void spawnParticleEffect(std::string const&, ::Vec3 const&, ::Dimension*);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ServerParticleManager>> getServerParticleManager();

    virtual void denyEffect(::BlockSource&, ::Vec3 const&);

    virtual void potionSplash(::Vec3 const&, ::mce::Color const&, bool);

    virtual bool extinguishFire(::BlockSource&, ::BlockPos const&, uchar, ::Actor*);

    virtual std::unique_ptr<Path> findPath(::Actor&, ::Actor const&, ::NavigationComponent&);

    virtual std::unique_ptr<Path> findPath(::Actor&, int, int, int, ::NavigationComponent&);

    virtual void updateSleepingPlayerList();

    virtual void setSleepStatus(::PlayerSleepStatus const&);

    virtual ::PlayerSleepStatus getSleepStatus() const;

    virtual int getTime() const;

    virtual void setTime(int);

    virtual uint getSeed();

    virtual ::LevelSeed64 getLevelSeed64() const;

    virtual ::BlockPos const& getSharedSpawnPos() const;

    virtual void setDefaultSpawn(::BlockPos const&);

    virtual ::BlockPos const& getDefaultSpawn() const;

    virtual void setDefaultGameType(::GameType);

    virtual ::GameType getDefaultGameType() const;

    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty);

    virtual void setMultiplayerGameIntent(bool);

    virtual bool getMultiplayerGameIntent() const;

    virtual void setMultiplayerGame(bool);

    virtual bool isMultiplayerGame() const;

    virtual void setLANBroadcastIntent(bool);

    virtual bool getLANBroadcastIntent() const;

    virtual void setLANBroadcast(bool);

    virtual bool getLANBroadcast() const;

    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting);

    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    virtual bool hasXBLBroadcastIntent() const;

    virtual void setXBLBroadcastMode(::Social::GamePublishSetting);

    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const;

    virtual bool hasXBLBroadcast() const;

    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting);

    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    virtual bool hasPlatformBroadcastIntent() const;

    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting);

    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    virtual bool hasPlatformBroadcast() const;

    virtual void setHasLockedBehaviorPack(bool);

    virtual void setHasLockedResourcePack(bool);

    virtual ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> getServerPlayerSleepManager() const;

    virtual ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> getServerPlayerSleepManager();

    virtual void setCommandsEnabled(bool);

    virtual void setWorldTemplateOptionsUnlocked();

    virtual bool hasLevelStorage() const;

    virtual ::LevelStorage const& getLevelStorage() const;

    virtual ::LevelStorage& getLevelStorage();

    virtual ::LevelData const& getLevelData() const;

    virtual ::LevelData& getLevelData();

    virtual ::PhotoStorage& getPhotoStorage() const;

    virtual void createPhotoStorage();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PhotoManager>> getPhotoManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PhotoManager>> getPhotoManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const EducationSettingsManager>> getEducationSettingsManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<EducationSettingsManager>> getEducationSettingsManager();

    virtual void save();

    virtual void saveLevelData();

    virtual void saveGameData();

    virtual std::shared_ptr<void*> requestTimedStorageDeferment();

    virtual ::TickingAreasManager& getTickingAreasMgr();

    virtual void addTickingAreaList(::DimensionType, std::shared_ptr<TickingAreaList> const&);

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    virtual void playSound(::DimensionType, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool);

    virtual void playSound(::IConstBlockSource const&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool);

    virtual void playSound(::PlaySoundOptions const&);

    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const);

    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool);

    virtual ::PlayerEventCoordinator& getRemotePlayerEventCoordinator();

    virtual ::ServerPlayerEventCoordinator& getServerPlayerEventCoordinator();

    virtual ::ClientPlayerEventCoordinator& getClientPlayerEventCoordinator();

    virtual ::ActorEventCoordinator& getActorEventCoordinator();

    virtual ::BlockEventCoordinator& getBlockEventCoordinator();

    virtual ::ItemEventCoordinator& getItemEventCoordinator();

    virtual ::ServerNetworkEventCoordinator& getServerNetworkEventCoordinator();

    virtual ::ScriptingEventCoordinator& getScriptingEventCoordinator();

    virtual ::ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator();

    virtual ::LevelEventCoordinator& getLevelEventCoordinator();

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>> getLevelEventManager();

    virtual void handleStopSoundEvent(std::string const&);

    virtual void handleStopAllSounds();

    virtual void handleStopMusicEvent();

    virtual void broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&, ::UserEntityIdentifierComponent const*);

    virtual void broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*);

    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&);

    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    virtual void broadcastSoundEvent(::Dimension&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&);

    virtual void broadcastSoundEvent(::BlockSource&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&);

    virtual void broadcastSoundEvent(::BlockSource&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, ::Block const&, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&);

    virtual void broadcastActorEvent(::Actor&, ::ActorEvent, int, std::optional<Vec3> const&) const;

    virtual ::Bedrock::NonOwnerPointer<const ActorEventBroadcaster> getActorEventBroadcaster() const;

    virtual void addChunkViewTracker(std::weak_ptr<ChunkViewSource>);

    virtual void onChunkReload(::Bounds const&);

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    virtual int getActivePlayerCount() const;

    virtual int getActiveUsersCount() const;

    virtual void forEachPlayer(std::function<bool (const Player&)>) const;

    virtual void forEachPlayer(std::function<bool (Player&)>);

    virtual void forEachUser(std::function<bool (const EntityContext&)>) const;

    virtual void forEachUser(std::function<bool (EntityContext&)>);

    virtual ::Player* findPlayer(std::function<bool (const WeakEntityRef&)>) const;

    virtual ::Player* findPlayer(std::function<bool (const Player&)>) const;

    virtual int getUserCount() const;

    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const&) const;

    virtual std::vector<OwnerPtr<EntityContext>> const& getUsers() const;

    virtual std::vector<OwnerPtr<EntityContext>> const& getEntities() const;

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    virtual ::Bedrock::NonOwnerPointer<SubChunkManager> getSubChunkManager();

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    virtual void onChunkDiscarded(::LevelChunk&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkEventManager>> getLevelChunkEventManager();

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    virtual void queueEntityDestruction(::OwnerPtr<EntityContext>);

    virtual ::OwnerPtr<EntityContext> removeEntity(::WeakEntityRef);

    virtual ::OwnerPtr<EntityContext> removeEntity(::Actor&);

    virtual void forceRemoveEntity(::Actor&);

    virtual void forceRemoveEntityfromWorld(::Actor&);

    virtual void forceFlushRemovedPlayers();

    virtual void loadFunctionManager();

    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<EntityContext>);

    virtual void registerTemporaryPointer(::_TickPtr&);

    virtual void unregisterTemporaryPointer(::_TickPtr&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TempEPtrManager>> getTempEPtrManager();

    virtual bool destroyBlock(::BlockSource&, ::BlockPos const&, bool, ::BlockChangeContext const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelBlockDestroyer>> getLevelBlockDestroyer();

    virtual void upgradeStorageVersion(::StorageVersion);

    virtual void suspendAndSave();

    virtual ::Particle* addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool);

    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    virtual void addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    virtual void addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    virtual ::ActorUniqueID getNewUniqueID();

    virtual ::ActorRuntimeID getNextRuntimeID();

    virtual std::vector<ChunkPos> const& getTickingOffsets() const;

    virtual std::vector<ChunkPos> const& getClientTickingOffsets() const;

    virtual std::vector<ChunkPos> getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ChunkTickOffsetManager>> getChunkTickOffsetManager() const;

    virtual bool isExporting() const;

    virtual void setIsExporting(bool);

    virtual ::SavedDataStorage& getSavedData();

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const*);

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const&);

    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const);

    virtual void requestMapInfo(::ActorUniqueID const, bool);

    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const, bool);

    virtual bool copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);

    virtual ::MapItemSavedData& createMapSavedData(std::vector<ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int);

    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int);

    virtual ::Core::PathBuffer<std::string> getScreenshotsFolder() const;

    virtual std::string getLevelId() const;

    virtual void setLevelId(std::string);

    virtual ::TaskGroup& getSyncTasksGroup();

    virtual ::TaskGroup& getIOTasksGroup();

    virtual ::ResourcePackManager* getClientResourcePackManager() const;

    virtual ::ResourcePackManager* getServerResourcePackManager() const;

    virtual ::TradeTables* getTradeTables();

    virtual void decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    virtual void incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    virtual ::Bedrock::NonOwnerPointer<TagCacheManager> getTagCacheManager();

    virtual bool isEdu() const;

    virtual ::ActorFactory const& getActorFactory() const;

    virtual ::ActorFactory& getActorFactory();

    virtual ::ActorInfoRegistry* getActorInfoRegistry();

    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const;

    virtual ::StackRefResult<EntityRegistry> getEntityRegistry();

    virtual ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> getContainerRegistryAccess() const;

    virtual ::gsl::not_null<StackRefResult<IContainerRegistryTracker>> getContainerRegistryTracker() const;

    virtual ::gsl::not_null<StackRefResult<IDynamicContainerSerialization>> getDynamicContainerSerialization() const;

    virtual ::EntitySystems& getEntitySystems();

    virtual ::WeakRef<const EntityContext> getLevelEntity() const;

    virtual ::WeakRef<EntityContext> getLevelEntity();

    virtual ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const;

    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);

    virtual void runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);

    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const;

    virtual ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>& getTagRegistry();

    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const;

    virtual void setPlayerMovementSettings(::PlayerMovementSettings const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerMovementSettingsManager>> getPlayerMovementSettingsManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerMovementSettingsManager>> getPlayerMovementSettingsManager();

    virtual bool canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const;

    virtual ::Bedrock::NonOwnerPointer<const TrustedSkinHelper> getTrustedSkinHelper() const;

    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;

    virtual void flushRunTimeLighting();

    virtual std::weak_ptr<ISubChunkLighter> getSubChunkLighter() const;

    virtual void loadBlockDefinitionGroup(::Experiments const&);

    virtual void initializeBlockDefinitionGroup();

    virtual ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry();

    virtual bool isClientSide() const;

    virtual ::SubClientId getSubClientId() const;

    virtual std::unordered_map<mce::UUID, PlayerListEntry> const& getPlayerList() const;

    virtual std::string const& getPlayerXUID(::mce::UUID const&) const;

    virtual std::string const& getPlayerPlatformOnlineId(::mce::UUID const&) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerListManager>> getPlayerListManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerListManager>> getPlayerListManager();

    virtual std::vector<WeakEntityRef> const& getActiveUsers() const;

    virtual std::vector<Actor*> getRuntimeActorList() const;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const&);

    virtual ::SubChunkRequestManager* getSubChunkRequestManager();

    virtual ::PacketSender* getPacketSender() const;

    virtual ::Bedrock::NonOwnerPointer<NetEventCallback> getNetEventCallback() const;

    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<NetEventCallback>);

    virtual ::gsl::not_null<StackRefResult<ILevelRandom>> getILevelRandom();

    virtual ::IRandom& getIRandom() const;

    virtual ::Random& getRandom() const;

    virtual ::Random& getThreadRandom() const;

    virtual ::HitResult& getHitResult();

    virtual ::HitResult& getLiquidHitResult();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<HitResultWrapper>> getHitResultWrapper();

    virtual std::string const& getImmersiveReaderString() const;

    virtual void setImmersiveReaderString(std::string);

    virtual ::AdventureSettings const& getAdventureSettings() const;

    virtual ::AdventureSettings& getAdventureSettings();

    virtual ::GameRules& getGameRules();

    virtual ::GameRules const& getGameRules() const;

    virtual bool hasStartWithMapEnabled() const;

    virtual bool isEditorWorld() const;

    virtual bool getAllowAnonymousBlockDropsInEditorWorlds() const;

    virtual bool isHardcore() const;

    virtual ::Abilities& getDefaultAbilities();

    virtual ::PermissionsHandler const& getDefaultPermissions() const;

    virtual ::PermissionsHandler& getDefaultPermissions();

    virtual bool getTearingDown() const;

    virtual void takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>);

    virtual ::LevelSoundManager& getLevelSoundManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> getSoundPlayer() const;

    virtual void setSimPaused(bool);

    virtual bool getSimPaused() const;

    virtual void setFinishedInitializing();

    virtual ::LootTables& getLootTables();

    virtual void updateWeather(float, int, float, int);

    virtual int getNetherScale() const;

    virtual ::Scoreboard const& getScoreboard() const;

    virtual ::Scoreboard& getScoreboard();

    virtual ::Scoreboard* tryGetScoreboard();

    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const&);

    virtual void setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&);

    virtual void sendAllPlayerAbilities(::Player const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerAbilitiesManager>> getPlayerAbilitiesManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsManager>> getPlayerPermissionsManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsSynchroniser>> getPlayerPermissionsSynchroniser();

    virtual ::MolangPackSettingsCache const* getMolangPackSettingsCache() const;

    virtual ::Recipes& getRecipes() const;

    virtual ::BlockReducer* getBlockReducer() const;

    virtual std::weak_ptr<TrimPatternRegistry> getTrimPatternRegistry();

    virtual std::weak_ptr<const TrimPatternRegistry> getTrimPatternRegistry() const;

    virtual std::weak_ptr<TrimMaterialRegistry> getTrimMaterialRegistry();

    virtual std::weak_ptr<const TrimMaterialRegistry> getTrimMaterialRegistry() const;

    virtual ::BlockType const& getRegisteredBorderBlock() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkPerformanceTelemetry>> getLevelChunkPerformanceTelemetry();

    virtual bool use3DBiomeMaps() const;

    virtual ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> getChunkGenerationManager() const;

    virtual ::Bedrock::NonOwnerPointer<ChunkGenerationManager> getChunkGenerationManager();

    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    virtual ::Level* asLevel();

    virtual ::Bedrock::NonOwnerPointer<CameraRegistry> getCameraRegistry();

    virtual ::Bedrock::NonOwnerPointer<const CameraRegistry> getCameraRegistry() const;

    virtual ::Bedrock::NonOwnerPointer<EntitySystems> getCameraSystems();

    virtual bool isClientSideGenerationEnabled();

    virtual bool blockNetworkIdsAreHashes();

    virtual ::ItemRegistryRef getItemRegistry() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> getBlockTypeRegistry() const;

    virtual void pauseAndFlushTaskGroups();

    virtual ::cereal::ReflectionCtx const& cerealContext() const;

    virtual ::cereal::ReflectionCtx& cerealContext();

    virtual void subChunkTickAndSendRequests();

    virtual void digestServerBlockProperties(::StartGamePacket const&);

    virtual ::PlayerDeathManager* _getPlayerDeathManager();

    virtual ::cereal::ReflectionCtx& _cerealContext();

    virtual void _onLowMemory();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> getTickDeltaTimeManager() const /*override*/;
#endif // @header-generator platform

    virtual ::ArmorTrimUnloader* getArmorTrimUnloader();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerSleepManager& getPlayerSleepManager() = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> getContainerRegistryAccess() const
        /*override*/;

    virtual ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> getContainerRegistryTracker() const
        /*override*/;

    virtual ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>> getDynamicContainerSerialization() const
        /*override*/;

    virtual ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry const> getShapeRegistry() const /*override*/;

    virtual ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> getMutableShapeRegistry() const /*override*/;

    virtual ::BiomeRegistry const& getBiomeRegistry() const /*override*/;

    virtual ::BiomeRegistry& getBiomeRegistry() /*override*/;

    virtual ::BlockPalette const& getBlockPalette() const /*override*/;

    virtual ::BlockPalette& getBlockPalette() /*override*/;

    virtual ::FeatureRegistry const& getFeatureRegistry() const /*override*/;

    virtual ::FeatureRegistry& getFeatureRegistry() /*override*/;

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const /*override*/;

    virtual ::FeatureTypeFactory& getFeatureTypeFactory() /*override*/;

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const /*override*/;

    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() /*override*/;

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const /*override*/;

    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() /*override*/;

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const /*override*/;

    virtual ::BiomeComponentFactory& getBiomeComponentFactory() /*override*/;

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const /*override*/;

    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() /*override*/;

    virtual ::BiomeManager const& getBiomeManager() const /*override*/;

    virtual ::BiomeManager& getBiomeManager() /*override*/;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& getDimensionFactory() const
        /*override*/;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionFactory() /*override*/;

    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    getLightTextureImageBuilderFactory() const /*override*/;

    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>&
    getLightTextureImageBuilderFactory() /*override*/;

    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const /*override*/;

    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const /*override*/;

    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> getWorldClockRegistry() /*override*/;

    virtual void addListener(::LevelListener& listener) /*override*/;

    virtual void removeListener(::LevelListener& listener) /*override*/;

    virtual void tickEntities() /*override*/;

    virtual void tickEntitySystems() /*override*/;

    virtual void onPlayerDeath(::Player& player, ::ActorDamageSource const& source) /*override*/;

    virtual void tick() /*override*/;

    virtual bool explode(
        ::BlockSource& region,
        ::Actor*       source,
        ::Vec3 const&  pos,
        float          explosionRadius,
        bool           fire,
        bool           breaksBlocks,
        float          maxResistance,
        bool           allowUnderwater
    ) /*override*/;

    virtual bool explode(::Explosion& explosion) /*override*/;

    virtual void denyEffect(::BlockSource& region, ::Vec3 const& pos) /*override*/;

    virtual void potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect) /*override*/;

    virtual bool extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source) /*override*/;

    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation) /*override*/;

    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation) /*override*/;

    virtual void setSleepStatus(::PlayerSleepStatus const& status) /*override*/;

    virtual ::PlayerSleepStatus getSleepStatus() const /*override*/;

    virtual void updateSleepingPlayerList() /*override*/;
#endif // @header-generator platform

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSourceCreated(::BlockSource&);
#else // @header-generator platform
    virtual ::PlayerSleepManager& getPlayerSleepManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSourceDestroyed(::BlockSource&);
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const
        /*override*/;

    virtual int getTime() const /*override*/;

    virtual void setTime(int time) /*override*/;

    virtual uint getSeed() /*override*/;

    virtual ::LevelSeed64 getLevelSeed64() const /*override*/;

    virtual ::BlockPos const& getSharedSpawnPos() const /*override*/;

    virtual void setDefaultSpawn(::BlockPos const& spawnPos) /*override*/;

    virtual ::BlockPos const& getDefaultSpawn() const /*override*/;

    virtual void setDefaultGameType(::GameType gameType) /*override*/;

    virtual ::GameType getDefaultGameType() const /*override*/;

    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty difficulty) /*override*/;

    virtual void setMultiplayerGameIntent(bool multiplayerGame) /*override*/;

    virtual bool getMultiplayerGameIntent() const /*override*/;

    virtual void setMultiplayerGame(bool multiplayerGame) /*override*/;

    virtual bool isMultiplayerGame() const /*override*/;

    virtual void setLANBroadcastIntent(bool broadcast) /*override*/;

    virtual bool getLANBroadcastIntent() const /*override*/;

    virtual void setLANBroadcast(bool broadcast) /*override*/;

    virtual bool getLANBroadcast() const /*override*/;

    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const /*override*/;

    virtual bool hasXBLBroadcastIntent() const /*override*/;

    virtual void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const /*override*/;

    virtual bool hasXBLBroadcast() const /*override*/;

    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const /*override*/;

    virtual bool hasPlatformBroadcastIntent() const /*override*/;

    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode) /*override*/;

    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const /*override*/;

    virtual bool hasPlatformBroadcast() const /*override*/;

    virtual void setHasLockedBehaviorPack(bool hasLocked) /*override*/;

    virtual void setHasLockedResourcePack(bool hasLocked) /*override*/;

    virtual void setCommandsEnabled(bool commandsEnabled) /*override*/;

    virtual void setWorldTemplateOptionsUnlocked() /*override*/;

    virtual bool hasLevelStorage() const /*override*/;

    virtual ::LevelStorage& getLevelStorage() /*override*/;

    virtual ::LevelStorage const& getLevelStorage() const /*override*/;

    virtual ::LevelData& getLevelData() /*override*/;

    virtual ::LevelData const& getLevelData() const /*override*/;

    virtual ::PhotoStorage& getPhotoStorage() const /*override*/;

    virtual void createPhotoStorage() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> getPhotoManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> getPhotoManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> getEducationSettingsManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> getEducationSettingsManager() const
        /*override*/;

    virtual void save() /*override*/;

    virtual void saveLevelData() /*override*/;

    virtual void saveGameData() /*override*/;

    virtual ::std::shared_ptr<void*> requestTimedStorageDeferment() /*override*/;

    virtual ::TickingAreasManager& getTickingAreasMgr() /*override*/;

    virtual void addTickingAreaList(
        ::DimensionType                             dimensionId,
        ::std::shared_ptr<::TickingAreaList> const& tickingAreas
    ) /*override*/;

    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        float const                            volume,
        float const                            pitch
    ) /*override*/;

    virtual void playSound(::PlaySoundOptions const& options) /*override*/;

    virtual void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual void playSound(
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) /*override*/;

    virtual ::PlayerEventCoordinator& getRemotePlayerEventCoordinator() /*override*/;

    virtual ::ServerPlayerEventCoordinator& getServerPlayerEventCoordinator() /*override*/;

    virtual ::ClientPlayerEventCoordinator& getClientPlayerEventCoordinator() /*override*/;

    virtual ::ActorEventCoordinator& getActorEventCoordinator() /*override*/;

    virtual ::BlockEventCoordinator& getBlockEventCoordinator() /*override*/;

    virtual ::ItemEventCoordinator& getItemEventCoordinator() /*override*/;

    virtual ::ServerNetworkEventCoordinator& getServerNetworkEventCoordinator() /*override*/;

    virtual ::ScriptingEventCoordinator& getScriptingEventCoordinator() /*override*/;

    virtual ::ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator() /*override*/;

    virtual ::LevelEventCoordinator& getLevelEventCoordinator() /*override*/;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data) /*override*/;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> getLevelEventManager() /*override*/;

    virtual void handleStopSoundEvent(::std::string const& name) /*override*/;

    virtual void handleStopAllSounds() /*override*/;

    virtual void handleStopMusicEvent() /*override*/;

    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) /*override*/;

    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) /*override*/;

    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        int                               data
    ) /*override*/;

    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        ::Block const&                    block
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) /*override*/;

    virtual void broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) /*override*/;

    virtual void broadcastActorEvent(
        ::Actor&                       actor,
        ::ActorEvent                   eventId,
        int                            data,
        ::std::optional<::Vec3> const& fireAtPosition
    ) const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> getActorEventBroadcaster() const /*override*/;

    virtual void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource) /*override*/;

    virtual void onChunkReload(::Bounds const& bound) /*override*/;

    virtual int getActivePlayerCount() const /*override*/;

    virtual int getActiveUsersCount() const /*override*/;

    virtual void forEachPlayer(::std::function<bool(::Player&)> callback) /*override*/;

    virtual void forEachPlayer(::std::function<bool(::Player const&)> callback) const /*override*/;

    virtual void forEachUser(::std::function<bool(::EntityContext&)> callback) /*override*/;

    virtual void forEachUser(::std::function<bool(::EntityContext const&)> callback) const /*override*/;

    virtual ::Player* findPlayer(::std::function<bool(::Player const&)> pred) const /*override*/;

    virtual ::Player* findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const /*override*/;

    virtual int getUserCount() const /*override*/;

    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const /*override*/;

    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getUsers() const /*override*/;

    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getEntities() const /*override*/;

    virtual void onSourceCreated(::BlockSource& source) /*override*/;

    virtual void onSourceDestroyed(::BlockSource& source) /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() /*override*/;

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() /*override*/;

    virtual void onChunkDiscarded(::LevelChunk& lc) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> getLevelChunkEventManager() /*override*/;

    virtual void queueEntityDestruction(::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeEntity(::Actor& actor) /*override*/;

    virtual ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef) /*override*/;

    virtual void forceRemoveEntity(::Actor& actor) /*override*/;

    virtual void forceRemoveEntityfromWorld(::Actor& actor) /*override*/;

    virtual void forceFlushRemovedPlayers() /*override*/;

    virtual void loadFunctionManager() /*override*/;

    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity) /*override*/;

    virtual void registerTemporaryPointer(::_TickPtr& ptr) /*override*/;

    virtual void unregisterTemporaryPointer(::_TickPtr& ptr) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> getTempEPtrManager() /*override*/;

    virtual bool destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext
    ) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> getLevelBlockDestroyer() /*override*/;

    virtual void upgradeStorageVersion(::StorageVersion v) /*override*/;

    virtual void suspendAndSave() /*override*/;

    virtual void
    sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data) /*override*/;

    virtual ::Particle* addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    ) /*override*/;

    virtual void spawnParticleEffect(
        ::std::string const& effectName,
        ::Vec3 const&        spawnLocation,
        ::Dimension*         dimension
    ) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> getServerParticleManager() /*override*/;

    virtual void addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    ) /*override*/;

    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) /*override*/;

    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    ) /*override*/;

    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    ) /*override*/;

    virtual ::ActorUniqueID getNewUniqueID() /*override*/;

    virtual ::ActorRuntimeID getNextRuntimeID() /*override*/;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    virtual ::std::vector<::ChunkPos> const& getClientTickingOffsets() const /*override*/;

    virtual ::std::vector<::ChunkPos>
    getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> getChunkTickOffsetManager() const
        /*override*/;

    virtual bool isExporting() const /*override*/;

    virtual void setIsExporting(bool IsExporting) /*override*/;

    virtual ::SavedDataStorage& getSavedData() /*override*/;

    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const uuid) /*override*/;

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const& instance) /*override*/;

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const* instance) /*override*/;

    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate) /*override*/;

    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const uuid, bool wasInit) /*override*/;

    virtual bool copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid) /*override*/;

    virtual ::MapItemSavedData& createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    ) /*override*/;

    virtual ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    ) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getScreenshotsFolder() const /*override*/;

    virtual ::std::string getLevelId() const /*override*/;

    virtual void setLevelId(::std::string LevelId) /*override*/;

    virtual ::TaskGroup& getSyncTasksGroup() /*override*/;

    virtual ::TaskGroup& getIOTasksGroup() /*override*/;

    virtual ::ResourcePackManager* getClientResourcePackManager() const /*override*/;

    virtual ::ResourcePackManager* getServerResourcePackManager() const /*override*/;

    virtual ::TradeTables* getTradeTables() /*override*/;

    virtual void decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    virtual void incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() /*override*/;

    virtual bool isEdu() const /*override*/;

    virtual ::ActorFactory& getActorFactory() /*override*/;

    virtual ::ActorFactory const& getActorFactory() const /*override*/;

    virtual ::ActorInfoRegistry* getActorInfoRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() /*override*/;

    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const /*override*/;

    virtual ::EntitySystems& getEntitySystems() /*override*/;

    virtual ::WeakRef<::EntityContext> getLevelEntity() /*override*/;

    virtual ::WeakRef<::EntityContext const> getLevelEntity() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const
        /*override*/;

    virtual void runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    ) /*override*/;

    virtual void
    runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem) /*override*/;

    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const /*override*/;

    virtual ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& getTagRegistry() /*override*/;

    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const /*override*/;

    virtual void setPlayerMovementSettings(::PlayerMovementSettings const& settings) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager>
    getPlayerMovementSettingsManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    getPlayerMovementSettingsManager() const /*override*/;

    virtual bool canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const /*override*/;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const /*override*/;

    virtual void flushRunTimeLighting() /*override*/;

    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const /*override*/;

    virtual void loadBlockDefinitionGroup(::Experiments const& experiments) /*override*/;

    virtual void initializeBlockDefinitionGroup() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() /*override*/;

    virtual bool isClientSideGenerationEnabled() /*override*/;

    virtual bool blockNetworkIdsAreHashes() /*override*/;

    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> getBlockTypeRegistry() const /*override*/;

    virtual ::Level* asLevel() /*override*/;

    virtual bool use3DBiomeMaps() const /*override*/;

    virtual void pauseAndFlushTaskGroups() /*override*/;

    virtual ::DimensionManager& getDimensionManager() /*override*/;

    virtual ::DimensionManager const& getDimensionManager() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> getDimensionManagerNonOwner() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> getDimensionManagerNonOwner() const /*override*/;

    virtual void subChunkTickAndSendRequests() /*override*/;
#endif // @header-generator platform

    virtual void _subTick();

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual ::StackRefResult<::PauseManager> getPauseManager() /*override*/;

    virtual ::StackRefResult<::PauseManager const> getPauseManager() const /*override*/;

    virtual bool isClientSide() const /*override*/;

    virtual ::SubClientId getSubClientId() const /*override*/;

    virtual ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& getPlayerList() const /*override*/;

    virtual ::std::string const& getPlayerXUID(::mce::UUID const& uuid) const /*override*/;

    virtual ::std::string const& getPlayerPlatformOnlineId(::mce::UUID const& uuid) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> getPlayerListManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> getPlayerListManager() const /*override*/;

    virtual ::std::vector<::WeakEntityRef> const& getActiveUsers() const /*override*/;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const& packet) /*override*/;

    virtual ::SubChunkRequestManager* getSubChunkRequestManager() /*override*/;

    virtual ::std::vector<::Actor*> getRuntimeActorList() const /*override*/;

    virtual ::PacketSender* getPacketSender() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback() const /*override*/;

    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val) /*override*/;

    virtual ::gsl::not_null<::StackRefResult<::ILevelRandom>> getILevelRandom() /*override*/;

    virtual ::IRandom& getIRandom() const /*override*/;

    virtual ::Random& getRandom() const /*override*/;

    virtual ::Random& getThreadRandom() const /*override*/;

    virtual ::HitResult& getHitResult() /*override*/;

    virtual ::HitResult& getLiquidHitResult() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> getHitResultWrapper() /*override*/;

    virtual ::std::string const& getImmersiveReaderString() const /*override*/;

    virtual void setImmersiveReaderString(::std::string newString) /*override*/;

    virtual ::AdventureSettings& getAdventureSettings() /*override*/;

    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;

    virtual ::GameRules const& getGameRules() const /*override*/;

    virtual ::GameRules& getGameRules() /*override*/;

    virtual bool hasStartWithMapEnabled() const /*override*/;

    virtual bool isEditorWorld() const /*override*/;

    virtual bool getAllowAnonymousBlockDropsInEditorWorlds() const /*override*/;

    virtual bool isHardcore() const /*override*/;

    virtual ::Abilities& getDefaultAbilities() /*override*/;

    virtual ::PermissionsHandler& getDefaultPermissions() /*override*/;

    virtual ::PermissionsHandler const& getDefaultPermissions() const /*override*/;

    virtual bool getTearingDown() const /*override*/;

    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    ) /*override*/;

    virtual ::LevelSoundManager& getLevelSoundManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> getSoundPlayer() const /*override*/;

    virtual void setSimPaused(bool value) /*override*/;

    virtual bool getSimPaused() const /*override*/;

    virtual void setFinishedInitializing() /*override*/;

    virtual ::LootTables& getLootTables() /*override*/;

    virtual void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime) /*override*/;

    virtual int getNetherScale() const /*override*/;

    virtual ::Scoreboard& getScoreboard() /*override*/;

    virtual ::Scoreboard const& getScoreboard() const /*override*/;

    virtual ::Scoreboard* tryGetScoreboard() /*override*/;

    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const& playerId) /*override*/;

    virtual void setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities) /*override*/;

    virtual void sendAllPlayerAbilities(::Player const& playerReference) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> getPlayerAbilitiesManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> getPlayerPermissionsManager() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser>
    getPlayerPermissionsSynchroniser() /*override*/;

    virtual ::Recipes& getRecipes() const /*override*/;

    virtual ::BlockReducer* getBlockReducer() const /*override*/;

    virtual ::std::weak_ptr<::TrimPatternRegistry const> getTrimPatternRegistry() const /*override*/;

    virtual ::std::weak_ptr<::TrimPatternRegistry> getTrimPatternRegistry() /*override*/;

    virtual ::std::weak_ptr<::TrimMaterialRegistry const> getTrimMaterialRegistry() const /*override*/;

    virtual ::std::weak_ptr<::TrimMaterialRegistry> getTrimMaterialRegistry() /*override*/;

    virtual ::BlockType const& getRegisteredBorderBlock() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry>
    getLevelChunkPerformanceTelemetry() /*override*/;

    virtual ::cereal::ReflectionCtx& cerealContext() /*override*/;

    virtual ::cereal::ReflectionCtx const& cerealContext() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const /*override*/;

    virtual void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId) /*override*/;

    virtual void digestServerBlockProperties(::StartGamePacket const& packet) /*override*/;

    virtual ::MolangPackSettingsCache const* getMolangPackSettingsCache() const /*override*/;

    virtual ::PlayerDeathManager* _getPlayerDeathManager() /*override*/;

#endif // @header-generator platform
    virtual void _initializeMapDataManager();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ::cereal::ReflectionCtx& _cerealContext() /*override*/;

    virtual void _onLowMemory() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Level(::LevelArguments&&);
#else // @header-generator platform
    MCAPI explicit Level(::LevelArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorGarbageCollector>> _getActorGarbageCollector();

    MCNAPI ::GameplayUserManager& _getGameplayUserManager();

    MCNAPI ::ILevelChunkEventManagerConnector& _getLevelChunkEventManagerConnector();

    MCNAPI ::LevelStorageManager* _getLevelStorageManager();

    MCNAPI ::IPlayerDimensionTransferConnector& _getPlayerDimensionTransferConnector();

    MCNAPI ::PlayerListManager& _getPlayerListManager();

    MCNAPI void
    _onAddBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCNAPI void _onAddTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void _onAddTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void _onAnyGameplayUsersRemoved();

    MCNAPI void _onChunkDiscarded(::LevelChunk&);

    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk&, int);

    MCNAPI void _onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void _onGameplayUserAdded(::EntityContext&);

    MCNAPI void _onGameplayUserRemoved(::EntityContext&);

    MCNAPI void _onLevelEventCompoundTag(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    MCNAPI void _onLevelEventData(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCNAPI void _onPictureTaken(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
#else // @header-generator platform
    MCAPI void _onAddBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onRemoveActorEntityReferences(::Actor&);

    MCNAPI void _onSendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCNAPI ::Bedrock::Result<Actor*, ActorValidationError>
    addEntityWithError(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI bool canChangeDimension(::Actor&, ::DimensionType);

    MCNAPI void earlyShutdownMainthread();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>> getActorManager();

    MCNAPI ::AutonomousActorManager const& getAutonomousActorManager() const;

    MCNAPI ::LinkedAssetValidator& getLinkedAssetValidator();

    MCNAPI ::NpcDialogueStorage* getNpcDialogueStorage();

    MCNAPI ::NpcEventCoordinator& getNpcEventCoordinator();

    MCNAPI ::ParticleProvider& getParticleProvider();

    MCNAPI ::PhotoItemSavedDataCollection& getPhotoItemSavedDataCollection();

    MCNAPI ::ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    MCNAPI double getTickDeltaTime() const;

    MCNAPI ::NodeType isFree(
        ::NavigationComponent&,
        ::Actor&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::CanJumpIntoNode
#else // @header-generator platform
    MCAPI void _onAddTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadShapeRegistry();
#else // @header-generator platform
    MCAPI void _onAddTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             particleCount,
        float             velocityScalar,
        float             emitterRadius
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMolangPackSettingsCache(std::shared_ptr<MolangPackSettingsCache>);
#else // @header-generator platform
    MCAPI void _onAnyGameplayUsersRemoved();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPerformanceTelemetryPeriodicCallback(std::function<void()>);
#else // @header-generator platform
    MCAPI void _onChunkDiscarded(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void transferActorToOwnedEntityLimbo(::Player const&, ::Actor&);
#else // @header-generator platform
    MCAPI void _onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk, int);

    MCAPI void _onChunkReloaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI void _onLevelEventCompoundTag(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCAPI void _onLevelEventData(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCAPI void _onPictureTaken(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void _onSendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addEntityWithError(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI void earlyShutdownMainthread();

    MCAPI ::LinkedAssetValidator& getLinkedAssetValidator();

#ifdef LL_PLAT_C
    MCAPI ::NpcEventCoordinator& getNpcEventCoordinator();
#endif

    MCAPI ::ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    MCAPI ::NodeType isFree(
        ::NavigationComponent& navigation,
        ::Actor&               entity,
        ::BlockPos const&      lastPathPos,
        ::BlockPos const&      testPos,
        ::BlockPos const&      size,
        ::CanJumpIntoNode      jumpIntoNode
    );

    MCAPI void loadShapeRegistry();

    MCAPI void setPerformanceTelemetryPeriodicCallback(::std::function<void()> callback);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LevelStorageManager>
    _createLevelStorageManager(::Bedrock::UniqueOwnerPointer<LevelStorage>, ::Scheduler&, ::IMinecraftEventing&);

    MCNAPI static ::LevelSeed64 createLevelSeed64();

    MCNAPI static uint createRandomSeed();

    MCNAPI static std::string createUniqueLevelID(int);

    MCNAPI static bool isUsableLevel(::ILevel const&);

    MCNAPI static ::LevelSeed64 parseLevelSeed64(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::LevelStorageManager> _createLevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::Scheduler&                                  scheduler,
        ::IMinecraftEventing&                         eventing
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LevelArguments&&);
#else // @header-generator platform
    MCAPI void* $ctor(::LevelArguments&& args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $initialize(
        std::string const&,
        ::LevelSettings const&,
        ::Experiments const&,
        std::string const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
#else // @header-generator platform
    MCAPI bool $initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startLeaveGame();
#else // @header-generator platform
    MCAPI void $startLeaveGame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLeaveGameDone();
#else // @header-generator platform
    MCAPI bool $isLeaveGameDone();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDimensionTypeActive(::DimensionType) const;
#else // @header-generator platform
    MCAPI bool $isDimensionTypeActive(::DimensionType dimensionType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<Dimension> $getOrCreateDimension(::DimensionType);
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> $getOrCreateDimension(::DimensionType dimensionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<Dimension> $getDimension(::DimensionType) const;
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> $getDimension(::DimensionType id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerSpawnDimensionResolution $resolvePlayerSpawnDimension(::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::PlayerSpawnDimensionResolution $resolvePlayerSpawnDimension(::CompoundTag const* playerTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachDimension(std::function<bool(const Dimension&)>) const;
#else // @header-generator platform
    MCFOLD void $forEachDimension(::std::function<bool(::Dimension&)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachDimension(std::function<bool(Dimension&)>);
#else // @header-generator platform
    MCFOLD void $forEachDimension(::std::function<bool(::Dimension const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionManager const& $getDimensionManager() const;
#else // @header-generator platform
    MCAPI uint $getChunkTickRange() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionManager& $getDimensionManager();
#else // @header-generator platform
    MCAPI ::ChunkTickRangeManager const& $getChunkTickRangeManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>> $getDimensionManagerNonOwner() const;
#else // @header-generator platform
    MCAPI ::PortalForcer& $getPortalForcer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>> $getDimensionManagerNonOwner();
#else // @header-generator platform
    MCAPI void $requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getChunkTickRange() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager> $getPlayerDimensionTransferManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunkTickRangeManager const& $getChunkTickRangeManager() const;
#else // @header-generator platform
    MCAPI void $entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PortalForcer& $getPortalForcer();
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager> $getActorDimensionTransferManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::Spawner& $getSpawner() const;
#else // LL_PLAT_C
    MCAPI ::Spawner& $getSpawner() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerDimensionTransferManager>>
    $getPlayerDimensionTransferManager();
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager> $getBossEventSubscriptionManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $entityChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3>);
#else // @header-generator platform
    MCAPI ::ProjectileFactory& $getProjectileFactory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorDimensionTransferManager>> $getActorDimensionTransferManager();
#else // @header-generator platform
    MCFOLD ::ActorDefinitionGroup* $getEntityDefinitions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Spawner& $getSpawner() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> $getActorAnimationGroup() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<BossEventSubscriptionManager>> $getBossEventSubscriptionManager();
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ProjectileFactory& $getProjectileFactory() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::BlockDefinitionGroup* $getBlockDefinitions() const;
#else // LL_PLAT_C
    MCFOLD ::BlockDefinitionGroup* $getBlockDefinitions() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionGroup* $getEntityDefinitions() const;
#else // @header-generator platform
    MCFOLD ::PropertyGroupManager& $getActorPropertyGroup() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> $getActorAnimationGroup() const;
#else // @header-generator platform
    MCFOLD ::CameraPresets const& $getCameraPresets() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;
#else // @header-generator platform
    MCFOLD ::CameraPresets& $getCameraPresets();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockDefinitionGroup* $getBlockDefinitions() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_90::CameraPreset const* $getCameraPreset(int presetIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PropertyGroupManager& $getActorPropertyGroup() const;
#else // @header-generator platform
    MCAPI bool $getDisablePlayerInteractions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CameraPresets& $getCameraPresets();
#else // @header-generator platform
    MCAPI void $setDisablePlayerInteractions(bool const disable);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CameraPresets const& $getCameraPresets() const;
#else // @header-generator platform
    MCAPI ::AutomationBehaviorTreeGroup& $getAutomationBehaviorTreeGroup() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_90::CameraPreset const* $getCameraPreset(int) const;
#else // @header-generator platform
    MCAPI ::BehaviorFactory& $getBehaviorFactory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getDisablePlayerInteractions() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::Difficulty $getDifficulty() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDisablePlayerInteractions(bool const);
#else // @header-generator platform
    MCAPI ::DimensionConversionData $getDimensionConversionData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AutomationBehaviorTreeGroup& $getAutomationBehaviorTreeGroup() const;
#else // @header-generator platform
    MCAPI float $getSpecialMultiplier(::DimensionType dimensionType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BehaviorFactory& $getBehaviorFactory() const;
#else // @header-generator platform
    MCAPI bool $hasCommandsEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::Difficulty $getDifficulty() const;
#else // @header-generator platform
    MCAPI bool $useMsaGamertagsOnly() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InternalComponentRegistry& $getInternalComponentRegistry() const;
#else // @header-generator platform
    MCAPI void $setMsaGamertagsOnly(bool msaGamertagsOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionConversionData $getDimensionConversionData() const;
#else // @header-generator platform
    MCAPI ::Actor* $addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getSpecialMultiplier(::DimensionType) const;

    MCNAPI bool $hasCommandsEnabled() const;

    MCNAPI bool $useMsaGamertagsOnly() const;

    MCNAPI void $setMsaGamertagsOnly(bool);

    MCNAPI ::Actor* $addEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* $addGlobalEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* $addAutonomousEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI void $addUser(::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* $addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* $putEntity(::BlockSource&, ::ActorUniqueID, ::OwnerPtr<EntityContext>);

    MCNAPI ::Actor* $putEntity(::BlockSource&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>);

    MCNAPI void $removeDisplayEntity(::WeakEntityRef);

    MCNAPI ::Bedrock::NonOwnerPointer<DisplayActorManager> $getDisplayActorManager();

    MCNAPI void $suspendPlayer(::Player&);

    MCNAPI void $resumePlayer(::Player&);

    MCNAPI bool $isPlayerSuspended(::Player&) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const GameplayUserManager>> $getGameplayUserManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>> $getGameplayUserManager();

    MCNAPI ::Bedrock::NonOwnerPointer<PlayerLocationReceiver> $getPlayerLocationReceiver();

    MCNAPI ::OwnerPtr<EntityContext> $removeActorAndTakeEntity(::WeakEntityRef);

    MCNAPI ::OwnerPtr<EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef);

    MCNAPI ::OwnerPtr<EntityContext> $takeEntity(::WeakEntityRef, ::LevelChunk&);

    MCNAPI ::StrictEntityContext $fetchStrictEntity(::ActorUniqueID, bool) const;

    MCNAPI ::Actor* $fetchEntity(::ActorUniqueID, bool) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorFetcher>> $getActorFetcher() const;

    MCNAPI ::Actor* $getRuntimeEntity(::ActorRuntimeID, bool) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorRuntimeIDManager>> $getActorRuntimeIDManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorRuntimeIDManager>> $getActorRuntimeIDManager();

    MCNAPI ::Mob* $getMob(::ActorUniqueID) const;

    MCNAPI ::Player* $getPlayer(::mce::UUID const&) const;

    MCNAPI ::Player* $getPlayer(std::string const&) const;

    MCNAPI ::Player* $getPlayerByXuid(std::string const&) const;

    MCNAPI ::Player* $getPlayer(::ActorUniqueID) const;

    MCNAPI ::Player* $getPlatformPlayer(std::string const&) const;

    MCNAPI ::Player* $getPlayerFromServerId(std::string const&) const;

    MCNAPI ::Player* $getRuntimePlayer(::ActorRuntimeID) const;

    MCNAPI int $getNumRemotePlayers() const;

    MCNAPI ::Player* $getPrimaryLocalPlayer() const;

    MCNAPI ::IMinecraftEventing& $getEventing();

    MCNAPI ::mce::Color $getPlayerColor(::Player const&) const;

    MCNAPI ::Tick const& $getCurrentTick() const;

    MCNAPI ::Tick const $getCurrentServerTick() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const TickDeltaTimeManager>> $getTickDeltaTimeManager() const;

    MCNAPI std::shared_ptr<const VoxelShapes::VoxelShapeRegistry> $getShapeRegistry() const;

    MCNAPI std::shared_ptr<VoxelShapes::VoxelShapeRegistry> $getMutableShapeRegistry() const;

    MCNAPI ::BiomeRegistry& $getBiomeRegistry();

    MCNAPI ::BiomeRegistry const& $getBiomeRegistry() const;

    MCNAPI ::BlockPalette& $getBlockPalette();

    MCNAPI ::BlockPalette const& $getBlockPalette() const;

    MCNAPI ::FeatureRegistry& $getFeatureRegistry();

    MCNAPI ::FeatureRegistry const& $getFeatureRegistry() const;

    MCNAPI ::FeatureTypeFactory& $getFeatureTypeFactory();

    MCNAPI ::FeatureTypeFactory const& $getFeatureTypeFactory() const;

    MCNAPI ::JigsawStructureRegistry& $getJigsawStructureRegistry();

    MCNAPI ::JigsawStructureRegistry const& $getJigsawStructureRegistry() const;

    MCNAPI ::StructureSpawnRegistry& $getStructureSpawnRegistry();

    MCNAPI ::StructureSpawnRegistry const& $getStructureSpawnRegistry() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> $getStructureManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> const $getStructureManager() const;

    MCNAPI ::BiomeComponentFactory& $getBiomeComponentFactory();

    MCNAPI ::BiomeComponentFactory const& $getBiomeComponentFactory() const;

    MCNAPI ::SurfaceBuilderRegistry& $getSurfaceBuilderRegistry();

    MCNAPI ::SurfaceBuilderRegistry const& $getSurfaceBuilderRegistry() const;

    MCNAPI ::BiomeManager& $getBiomeManager();

    MCNAPI ::BiomeManager const& $getBiomeManager() const;

    MCNAPI ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& $getDimensionFactory();

    MCNAPI ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&> const& $getDimensionFactory() const;

    MCNAPI ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&>& $getLightTextureImageBuilderFactory();

    MCNAPI ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&> const&
    $getLightTextureImageBuilderFactory() const;

    MCNAPI ::IWorldRegistriesProvider& $getWorldRegistriesProvider();

    MCNAPI ::IWorldRegistriesProvider const& $getWorldRegistriesProvider() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> $getWorldClockRegistry();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const $getWorldClockRegistry() const;

    MCNAPI void $addListener(::LevelListener&);

    MCNAPI void $removeListener(::LevelListener&);

    MCNAPI void $tickEntities();

    MCNAPI void $tickEntitySystems();

    MCNAPI ::StackRefResult<const PauseManager> $getPauseManager() const;

    MCNAPI ::StackRefResult<PauseManager> $getPauseManager();

    MCNAPI void $onPlayerDeath(::Player&, ::ActorDamageSource const&);

    MCNAPI void $tick();

    MCNAPI bool $explode(::Explosion&);

    MCNAPI bool $explode(::BlockSource&, ::Actor*, ::Vec3 const&, float, bool, bool, float, bool);

    MCNAPI void $spawnParticleEffect(std::string const&, ::Vec3 const&, ::Dimension*);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ServerParticleManager>> $getServerParticleManager();

    MCNAPI void $denyEffect(::BlockSource&, ::Vec3 const&);

    MCNAPI void $potionSplash(::Vec3 const&, ::mce::Color const&, bool);

    MCNAPI bool $extinguishFire(::BlockSource&, ::BlockPos const&, uchar, ::Actor*);

    MCNAPI std::unique_ptr<Path> $findPath(::Actor&, ::Actor const&, ::NavigationComponent&);

    MCNAPI std::unique_ptr<Path> $findPath(::Actor&, int, int, int, ::NavigationComponent&);

    MCNAPI void $updateSleepingPlayerList();

    MCNAPI void $setSleepStatus(::PlayerSleepStatus const&);

    MCNAPI ::PlayerSleepStatus $getSleepStatus() const;

    MCNAPI int $getTime() const;

    MCNAPI void $setTime(int);

    MCNAPI uint $getSeed();

    MCNAPI ::LevelSeed64 $getLevelSeed64() const;

    MCNAPI ::BlockPos const& $getSharedSpawnPos() const;

    MCNAPI void $setDefaultSpawn(::BlockPos const&);

    MCNAPI ::BlockPos const& $getDefaultSpawn() const;

    MCNAPI void $setDefaultGameType(::GameType);

    MCNAPI ::GameType $getDefaultGameType() const;

    MCNAPI void $setDifficulty(::SharedTypes::Legacy::Difficulty);

    MCNAPI void $setMultiplayerGameIntent(bool);

    MCNAPI bool $getMultiplayerGameIntent() const;

    MCNAPI void $setMultiplayerGame(bool);

    MCNAPI bool $isMultiplayerGame() const;

    MCNAPI void $setLANBroadcastIntent(bool);

    MCNAPI bool $getLANBroadcastIntent() const;

    MCNAPI void $setLANBroadcast(bool);

    MCNAPI bool $getLANBroadcast() const;

    MCNAPI void $setXBLBroadcastIntent(::Social::GamePublishSetting);

    MCNAPI ::Social::GamePublishSetting $getXBLBroadcastIntent() const;

    MCNAPI bool $hasXBLBroadcastIntent() const;

    MCNAPI void $setXBLBroadcastMode(::Social::GamePublishSetting);

    MCNAPI ::Social::GamePublishSetting $getXBLBroadcastMode() const;

    MCNAPI bool $hasXBLBroadcast() const;

    MCNAPI void $setPlatformBroadcastIntent(::Social::GamePublishSetting);

    MCNAPI ::Social::GamePublishSetting $getPlatformBroadcastIntent() const;

    MCNAPI bool $hasPlatformBroadcastIntent() const;

    MCNAPI void $setPlatformBroadcastMode(::Social::GamePublishSetting);

    MCNAPI ::Social::GamePublishSetting $getPlatformBroadcastMode() const;

    MCNAPI bool $hasPlatformBroadcast() const;

    MCNAPI void $setHasLockedBehaviorPack(bool);

    MCNAPI void $setHasLockedResourcePack(bool);

    MCNAPI ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> $getServerPlayerSleepManager() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> $getServerPlayerSleepManager();

    MCNAPI void $setCommandsEnabled(bool);

    MCNAPI void $setWorldTemplateOptionsUnlocked();

    MCNAPI bool $hasLevelStorage() const;

    MCNAPI ::LevelStorage const& $getLevelStorage() const;

    MCNAPI ::LevelStorage& $getLevelStorage();

    MCNAPI ::LevelData const& $getLevelData() const;

    MCNAPI ::LevelData& $getLevelData();

    MCNAPI ::PhotoStorage& $getPhotoStorage() const;

    MCNAPI void $createPhotoStorage();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const PhotoManager>> $getPhotoManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PhotoManager>> $getPhotoManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const EducationSettingsManager>>
    $getEducationSettingsManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<EducationSettingsManager>> $getEducationSettingsManager();

    MCNAPI void $save();

    MCNAPI void $saveLevelData();

    MCNAPI void $saveGameData();

    MCNAPI std::shared_ptr<void*> $requestTimedStorageDeferment();

    MCNAPI ::TickingAreasManager& $getTickingAreasMgr();

    MCNAPI void $addTickingAreaList(::DimensionType, std::shared_ptr<TickingAreaList> const&);

    MCNAPI void $sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    MCNAPI void $playSound(
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
#else // @header-generator platform
    MCAPI ::Actor* $putEntity(
        ::BlockSource&              region,
        ::ActorUniqueID             id,
        ::ActorRuntimeID            runtimeId,
        ::OwnerPtr<::EntityContext> entity
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playSound(
        ::IConstBlockSource const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
#else // @header-generator platform
    MCAPI ::Actor* $putEntity(::BlockSource& region, ::ActorUniqueID id, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* $addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* $addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);

    MCAPI void $addUser(::OwnerPtr<::EntityContext> userEntity);

#ifdef LL_PLAT_S
    MCAPI ::Actor* $addDisplayEntity(::BlockSource&, ::OwnerPtr<::EntityContext>);
#else // LL_PLAT_C
    MCAPI ::Actor* $addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity);
#endif

#ifdef LL_PLAT_S
    MCFOLD void $removeDisplayEntity(::WeakEntityRef);
#else // LL_PLAT_C
    MCFOLD void $removeDisplayEntity(::WeakEntityRef entity);
#endif

    MCFOLD ::Bedrock::NonOwnerPointer<::DisplayActorManager> $getDisplayActorManager();

    MCAPI void $suspendPlayer(::Player& player);

    MCAPI void $resumePlayer(::Player& player);

    MCAPI bool $isPlayerSuspended(::Player& player) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> $getGameplayUserManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> $getGameplayUserManager() const;

    MCAPI ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> $getPlayerLocationReceiver();

    MCAPI ::OwnerPtr<::EntityContext> $removeActorAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI ::OwnerPtr<::EntityContext> $removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI ::OwnerPtr<::EntityContext> $takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc);

    MCAPI ::StrictEntityContext $fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const;

    MCAPI ::Actor* $fetchEntity(::ActorUniqueID actorId, bool getRemoved) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> $getActorFetcher() const;

    MCAPI ::Actor* $getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> $getActorRuntimeIDManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> $getActorRuntimeIDManager() const;

    MCAPI ::Mob* $getMob(::ActorUniqueID mobId) const;

    MCAPI ::Player* $getPlayer(::std::string const& name) const;

    MCAPI ::Player* $getPlayer(::mce::UUID const& uuid) const;

    MCAPI ::Player* $getPlayer(::ActorUniqueID entityID) const;

    MCAPI ::Player* $getPlayerByXuid(::std::string const& xuid) const;

    MCAPI ::Player* $getPlatformPlayer(::std::string const& platformOnlineId) const;

    MCAPI ::Player* $getPlayerFromServerId(::std::string const& serverId) const;

    MCAPI ::Player* $getRuntimePlayer(::ActorRuntimeID runtimeId) const;

    MCAPI int $getNumRemotePlayers() const;

    MCAPI ::Player* $getPrimaryLocalPlayer() const;

    MCAPI ::IMinecraftEventing& $getEventing();

    MCAPI ::mce::Color $getPlayerColor(::Player const& player) const;

    MCAPI ::Tick const& $getCurrentTick() const;

    MCAPI ::Tick const $getCurrentServerTick() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> $getTickDeltaTimeManager() const;

    MCFOLD ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> $getContainerRegistryAccess() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> $getContainerRegistryTracker() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>> $getDynamicContainerSerialization() const;

    MCFOLD ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry const> $getShapeRegistry() const;

    MCFOLD ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> $getMutableShapeRegistry() const;

    MCFOLD ::BiomeRegistry const& $getBiomeRegistry() const;

    MCFOLD ::BiomeRegistry& $getBiomeRegistry();

    MCFOLD ::BlockPalette const& $getBlockPalette() const;

    MCFOLD ::BlockPalette& $getBlockPalette();

    MCFOLD ::FeatureRegistry const& $getFeatureRegistry() const;

    MCFOLD ::FeatureRegistry& $getFeatureRegistry();

    MCFOLD ::FeatureTypeFactory const& $getFeatureTypeFactory() const;

    MCFOLD ::FeatureTypeFactory& $getFeatureTypeFactory();

    MCFOLD ::JigsawStructureRegistry const& $getJigsawStructureRegistry() const;

    MCFOLD ::JigsawStructureRegistry& $getJigsawStructureRegistry();

    MCFOLD ::StructureSpawnRegistry const& $getStructureSpawnRegistry() const;

    MCFOLD ::StructureSpawnRegistry& $getStructureSpawnRegistry();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const $getStructureManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StructureManager> $getStructureManager();

    MCFOLD ::BiomeComponentFactory const& $getBiomeComponentFactory() const;

    MCFOLD ::BiomeComponentFactory& $getBiomeComponentFactory();

    MCFOLD ::SurfaceBuilderRegistry const& $getSurfaceBuilderRegistry() const;

    MCFOLD ::SurfaceBuilderRegistry& $getSurfaceBuilderRegistry();

    MCAPI ::BiomeManager const& $getBiomeManager() const;

    MCAPI ::BiomeManager& $getBiomeManager();

    MCFOLD ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& $getDimensionFactory() const;

    MCFOLD ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& $getDimensionFactory();

    MCFOLD ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    $getLightTextureImageBuilderFactory() const;

    MCFOLD ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& $getLightTextureImageBuilderFactory();

    MCAPI ::InternalComponentRegistry& $getInternalComponentRegistry() const;

    MCFOLD ::IWorldRegistriesProvider const& $getWorldRegistriesProvider() const;

    MCFOLD ::IWorldRegistriesProvider& $getWorldRegistriesProvider();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> $getWorldClockRegistry();

    MCAPI void $addListener(::LevelListener& listener);

    MCAPI void $removeListener(::LevelListener& listener);

    MCAPI void $tickEntities();

    MCAPI void $tickEntitySystems();

    MCAPI void $onPlayerDeath(::Player& player, ::ActorDamageSource const& source);

    MCAPI void $tick();

    MCAPI bool $explode(
        ::BlockSource& region,
        ::Actor*       source,
        ::Vec3 const&  pos,
        float          explosionRadius,
        bool           fire,
        bool           breaksBlocks,
        float          maxResistance,
        bool           allowUnderwater
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playSound(::PlaySoundOptions const&);
#else // @header-generator platform
    MCAPI bool $explode(::Explosion& explosion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const);
#else // @header-generator platform
    MCAPI void $denyEffect(::BlockSource& region, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool);
#else // @header-generator platform
    MCAPI void $potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerEventCoordinator& $getRemotePlayerEventCoordinator();
#else // @header-generator platform
    MCAPI bool $extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerPlayerEventCoordinator& $getServerPlayerEventCoordinator();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Path>
    $findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientPlayerEventCoordinator& $getClientPlayerEventCoordinator();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Path> $findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorEventCoordinator& $getActorEventCoordinator();
#else // @header-generator platform
    MCAPI void $setSleepStatus(::PlayerSleepStatus const& status);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockEventCoordinator& $getBlockEventCoordinator();
#else // @header-generator platform
    MCAPI ::PlayerSleepStatus $getSleepStatus() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemEventCoordinator& $getItemEventCoordinator();
#else // @header-generator platform
    MCAPI void $updateSleepingPlayerList();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerNetworkEventCoordinator& $getServerNetworkEventCoordinator();
#else // @header-generator platform
    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> $getServerPlayerSleepManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptingEventCoordinator& $getScriptingEventCoordinator();
#else // @header-generator platform
    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> $getServerPlayerSleepManager() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptDeferredEventCoordinator& $getScriptDeferredEventCoordinator();
#else // @header-generator platform
    MCAPI int $getTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelEventCoordinator& $getLevelEventCoordinator();
#else // @header-generator platform
    MCAPI void $setTime(int time);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI uint $getSeed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // @header-generator platform
    MCAPI ::LevelSeed64 $getLevelSeed64() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>> $getLevelEventManager();
#else // @header-generator platform
    MCFOLD ::BlockPos const& $getSharedSpawnPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleStopSoundEvent(std::string const&);
#else // @header-generator platform
    MCAPI void $setDefaultSpawn(::BlockPos const& spawnPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleStopAllSounds();
#else // @header-generator platform
    MCFOLD ::BlockPos const& $getDefaultSpawn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleStopMusicEvent();
#else // @header-generator platform
    MCAPI void $setDefaultGameType(::GameType gameType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::CompoundTag const&,
        ::UserEntityIdentifierComponent const*
#else // @header-generator platform
    MCAPI ::GameType $getDefaultGameType() const;

    MCAPI void $setDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCAPI void $setMultiplayerGameIntent(bool multiplayerGame);

    MCAPI bool $getMultiplayerGameIntent() const;

    MCAPI void $setMultiplayerGame(bool multiplayerGame);

    MCAPI bool $isMultiplayerGame() const;

    MCAPI void $setLANBroadcastIntent(bool broadcast);

    MCAPI bool $getLANBroadcastIntent() const;

    MCAPI void $setLANBroadcast(bool broadcast);

    MCAPI bool $getLANBroadcast() const;

    MCAPI void $setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getXBLBroadcastIntent() const;

    MCAPI bool $hasXBLBroadcastIntent() const;

    MCAPI void $setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getXBLBroadcastMode() const;

    MCAPI bool $hasXBLBroadcast() const;

    MCAPI void $setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getPlatformBroadcastIntent() const;

    MCAPI bool $hasPlatformBroadcastIntent() const;

    MCAPI void $setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI ::Social::GamePublishSetting $getPlatformBroadcastMode() const;

    MCAPI bool $hasPlatformBroadcast() const;

    MCAPI void $setHasLockedBehaviorPack(bool hasLocked);

    MCAPI void $setHasLockedResourcePack(bool hasLocked);

    MCAPI void $setCommandsEnabled(bool commandsEnabled);

    MCAPI void $setWorldTemplateOptionsUnlocked();

    MCAPI bool $hasLevelStorage() const;

    MCFOLD ::LevelStorage& $getLevelStorage();

    MCFOLD ::LevelStorage const& $getLevelStorage() const;

    MCFOLD ::LevelData& $getLevelData();

    MCFOLD ::LevelData const& $getLevelData() const;

    MCAPI ::PhotoStorage& $getPhotoStorage() const;

    MCAPI void $createPhotoStorage();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> $getPhotoManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> $getPhotoManager() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> $getEducationSettingsManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> $getEducationSettingsManager() const;

    MCAPI void $save();

    MCAPI void $saveLevelData();

    MCAPI void $saveGameData();

    MCAPI ::std::shared_ptr<void*> $requestTimedStorageDeferment();

    MCAPI ::TickingAreasManager& $getTickingAreasMgr();

    MCAPI void
    $addTickingAreaList(::DimensionType dimensionId, ::std::shared_ptr<::TickingAreaList> const& tickingAreas);

    MCAPI void $playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*);
#else // @header-generator platform
    MCAPI void
    $playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, float const volume, float const pitch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&);
#else // @header-generator platform
    MCAPI void $playSound(::PlaySoundOptions const& options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCNAPI void $broadcastSoundEvent(
        ::Dimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI void $playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI void $playSound(
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Block const&,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI ::PlayerEventCoordinator& $getRemotePlayerEventCoordinator();

    MCAPI ::ServerPlayerEventCoordinator& $getServerPlayerEventCoordinator();

    MCAPI ::ClientPlayerEventCoordinator& $getClientPlayerEventCoordinator();

    MCAPI ::ActorEventCoordinator& $getActorEventCoordinator();

    MCAPI ::BlockEventCoordinator& $getBlockEventCoordinator();

    MCAPI ::ItemEventCoordinator& $getItemEventCoordinator();

    MCAPI ::ServerNetworkEventCoordinator& $getServerNetworkEventCoordinator();

    MCAPI ::ScriptingEventCoordinator& $getScriptingEventCoordinator();

    MCAPI ::ScriptDeferredEventCoordinator& $getScriptDeferredEventCoordinator();

    MCAPI ::LevelEventCoordinator& $getLevelEventCoordinator();

    MCAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);

    MCAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> $getLevelEventManager();

    MCAPI void $handleStopSoundEvent(::std::string const& name);

    MCAPI void $handleStopAllSounds();

    MCAPI void $handleStopMusicEvent();

    MCAPI void $broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastActorEvent(::Actor&, ::ActorEvent, int, std::optional<Vec3> const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<const ActorEventBroadcaster> $getActorEventBroadcaster() const;

    MCNAPI void $addChunkViewTracker(std::weak_ptr<ChunkViewSource>);

    MCNAPI void $onChunkReload(::Bounds const&);

    MCNAPI void $onChunkReloaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI int $getActivePlayerCount() const;

    MCNAPI int $getActiveUsersCount() const;

    MCNAPI void $forEachPlayer(std::function<bool(const Player&)>) const;

    MCNAPI void $forEachPlayer(std::function<bool(Player&)>);

    MCNAPI void $forEachUser(std::function<bool(const EntityContext&)>) const;

    MCNAPI void $forEachUser(std::function<bool(EntityContext&)>);

    MCNAPI ::Player* $findPlayer(std::function<bool(const WeakEntityRef&)>) const;

    MCNAPI ::Player* $findPlayer(std::function<bool(const Player&)>) const;

    MCNAPI int $getUserCount() const;

    MCNAPI int $countUsersWithMatchingNetworkId(::NetworkIdentifier const&) const;

    MCNAPI std::vector<OwnerPtr<EntityContext>> const& $getUsers() const;

    MCNAPI std::vector<OwnerPtr<EntityContext>> const& $getEntities() const;

    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCNAPI ::Bedrock::NonOwnerPointer<SubChunkManager> $getSubChunkManager();

    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $onChunkDiscarded(::LevelChunk&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkEventManager>> $getLevelChunkEventManager();

    MCNAPI ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();

    MCNAPI void $queueEntityDestruction(::OwnerPtr<EntityContext>);

    MCNAPI ::OwnerPtr<EntityContext> $removeEntity(::WeakEntityRef);

    MCNAPI ::OwnerPtr<EntityContext> $removeEntity(::Actor&);

    MCNAPI void $forceRemoveEntity(::Actor&);

    MCNAPI void $forceRemoveEntityfromWorld(::Actor&);

    MCNAPI void $forceFlushRemovedPlayers();

    MCNAPI void $loadFunctionManager();

    MCNAPI void $levelCleanupQueueEntityRemoval(::OwnerPtr<EntityContext>);

    MCNAPI void $registerTemporaryPointer(::_TickPtr&);

    MCNAPI void $unregisterTemporaryPointer(::_TickPtr&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<TempEPtrManager>> $getTempEPtrManager();

    MCNAPI bool $destroyBlock(::BlockSource&, ::BlockPos const&, bool, ::BlockChangeContext const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelBlockDestroyer>> $getLevelBlockDestroyer();

    MCNAPI void $upgradeStorageVersion(::StorageVersion);

    MCNAPI void $suspendAndSave();

    MCNAPI ::Particle* $addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool);

    MCNAPI void $addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    MCNAPI void $addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void $addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void
    $addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCNAPI void
    $addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    MCNAPI ::ActorUniqueID $getNewUniqueID();

    MCNAPI ::ActorRuntimeID $getNextRuntimeID();

    MCNAPI std::vector<ChunkPos> const& $getTickingOffsets() const;

    MCNAPI std::vector<ChunkPos> const& $getClientTickingOffsets() const;

    MCNAPI std::vector<ChunkPos> $getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const ChunkTickOffsetManager>> $getChunkTickOffsetManager() const;

    MCNAPI bool $isExporting() const;

    MCNAPI void $setIsExporting(bool);

    MCNAPI ::SavedDataStorage& $getSavedData();

    MCNAPI ::MapItemSavedData* $getMapSavedData(::CompoundTag const*);

    MCNAPI ::MapItemSavedData* $getMapSavedData(::CompoundTag const&);

    MCNAPI ::MapItemSavedData* $getMapSavedData(::ActorUniqueID const);

    MCNAPI void $requestMapInfo(::ActorUniqueID const, bool);

    MCNAPI ::ActorUniqueID $expandMapByID(::ActorUniqueID const, bool);

    MCNAPI bool $copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);

    MCNAPI ::MapItemSavedData&
    $createMapSavedData(std::vector<ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int);

    MCNAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int);

    MCNAPI ::Core::PathBuffer<std::string> $getScreenshotsFolder() const;

    MCNAPI std::string $getLevelId() const;

    MCNAPI void $setLevelId(std::string);

    MCNAPI ::TaskGroup& $getSyncTasksGroup();

    MCNAPI ::TaskGroup& $getIOTasksGroup();

    MCNAPI ::ResourcePackManager* $getClientResourcePackManager() const;

    MCNAPI ::ResourcePackManager* $getServerResourcePackManager() const;

    MCNAPI ::TradeTables* $getTradeTables();

    MCNAPI void
    $decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    MCNAPI void
    $incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&);

    MCNAPI ::Bedrock::NonOwnerPointer<TagCacheManager> $getTagCacheManager();

    MCNAPI bool $isEdu() const;

    MCNAPI ::ActorFactory const& $getActorFactory() const;

    MCNAPI ::ActorFactory& $getActorFactory();

    MCNAPI ::ActorInfoRegistry* $getActorInfoRegistry();

    MCNAPI ::StackRefResult<const EntityRegistry> $getEntityRegistry() const;

    MCNAPI ::StackRefResult<EntityRegistry> $getEntityRegistry();

    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> $getContainerRegistryAccess() const;

    MCNAPI ::gsl::not_null<StackRefResult<IContainerRegistryTracker>> $getContainerRegistryTracker() const;

    MCNAPI ::gsl::not_null<StackRefResult<IDynamicContainerSerialization>> $getDynamicContainerSerialization() const;

    MCNAPI ::EntitySystems& $getEntitySystems();

    MCNAPI ::WeakRef<const EntityContext> $getLevelEntity() const;

    MCNAPI ::WeakRef<EntityContext> $getLevelEntity();

    MCNAPI ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;

    MCNAPI void $runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);

    MCNAPI void $runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);

    MCNAPI ::PlayerCapabilities::ISharedController const& $getCapabilities() const;

    MCNAPI ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>& $getTagRegistry();

    MCNAPI ::PlayerMovementSettings const& $getPlayerMovementSettings() const;

    MCNAPI void $setPlayerMovementSettings(::PlayerMovementSettings const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerMovementSettingsManager>>
    $getPlayerMovementSettingsManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerMovementSettingsManager>> $getPlayerMovementSettingsManager();

    MCNAPI bool $canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<const TrustedSkinHelper> $getTrustedSkinHelper() const;

    MCNAPI ::PositionTrackingDB::PositionTrackingDBClient* $getPositionTrackerDBClient() const;

    MCNAPI ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCNAPI void $flushRunTimeLighting();

    MCNAPI std::weak_ptr<ISubChunkLighter> $getSubChunkLighter() const;

    MCNAPI void $loadBlockDefinitionGroup(::Experiments const&);

    MCNAPI void $initializeBlockDefinitionGroup();

    MCNAPI ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> $getUnknownBlockTypeRegistry();

    MCNAPI bool $isClientSide() const;

    MCNAPI ::SubClientId $getSubClientId() const;

    MCNAPI std::unordered_map<mce::UUID, PlayerListEntry> const& $getPlayerList() const;

    MCNAPI std::string const& $getPlayerXUID(::mce::UUID const&) const;

    MCNAPI std::string const& $getPlayerPlatformOnlineId(::mce::UUID const&) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerListManager>> $getPlayerListManager() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerListManager>> $getPlayerListManager();

    MCNAPI std::vector<WeakEntityRef> const& $getActiveUsers() const;

    MCNAPI std::vector<Actor*> $getRuntimeActorList() const;

    MCNAPI void $notifySubChunkRequestManager(::SubChunkPacket const&);

    MCNAPI ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCNAPI ::PacketSender* $getPacketSender() const;

    MCNAPI ::Bedrock::NonOwnerPointer<NetEventCallback> $getNetEventCallback() const;

    MCNAPI void $setNetEventCallback(::Bedrock::NonOwnerPointer<NetEventCallback>);

    MCNAPI ::gsl::not_null<StackRefResult<ILevelRandom>> $getILevelRandom();

    MCNAPI ::IRandom& $getIRandom() const;

    MCNAPI ::Random& $getRandom() const;

    MCNAPI ::Random& $getThreadRandom() const;

    MCNAPI ::HitResult& $getHitResult();

    MCNAPI ::HitResult& $getLiquidHitResult();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<HitResultWrapper>> $getHitResultWrapper();

    MCNAPI std::string const& $getImmersiveReaderString() const;

    MCNAPI void $setImmersiveReaderString(std::string);

    MCNAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCNAPI ::AdventureSettings& $getAdventureSettings();

    MCNAPI ::GameRules& $getGameRules();

    MCNAPI ::GameRules const& $getGameRules() const;

    MCNAPI bool $hasStartWithMapEnabled() const;

    MCNAPI bool $isEditorWorld() const;

    MCNAPI bool $getAllowAnonymousBlockDropsInEditorWorlds() const;

    MCNAPI bool $isHardcore() const;

    MCNAPI ::Abilities& $getDefaultAbilities();

    MCNAPI ::PermissionsHandler const& $getDefaultPermissions() const;

    MCNAPI ::PermissionsHandler& $getDefaultPermissions();

    MCNAPI bool $getTearingDown() const;

    MCNAPI void $takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
#else // @header-generator platform
    MCAPI void $broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelSoundManager& $getLevelSoundManager();
#else // @header-generator platform
    MCAPI void
    $broadcastLocalEvent(::BlockSource& region, ::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> $getSoundPlayer() const;
#else // @header-generator platform
    MCAPI void $broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        ::Block const&                    block
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSimPaused(bool);
#else // @header-generator platform
    MCAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getSimPaused() const;
#else // @header-generator platform
    MCAPI void $broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setFinishedInitializing();
#else // @header-generator platform
    MCAPI void $broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootTables& $getLootTables();
#else // @header-generator platform
    MCAPI void $broadcastActorEvent(
        ::Actor&                       actor,
        ::ActorEvent                   eventId,
        int                            data,
        ::std::optional<::Vec3> const& fireAtPosition
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateWeather(float, int, float, int);
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> $getActorEventBroadcaster() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getNetherScale() const;
#else // @header-generator platform
    MCAPI void $addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scoreboard const& $getScoreboard() const;
#else // @header-generator platform
    MCAPI void $onChunkReload(::Bounds const& bound);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scoreboard& $getScoreboard();
#else // @header-generator platform
    MCAPI int $getActivePlayerCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scoreboard* $tryGetScoreboard();
#else // @header-generator platform
    MCAPI int $getActiveUsersCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LayeredAbilities* $getPlayerAbilities(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI void $forEachPlayer(::std::function<bool(::Player&)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&);
#else // @header-generator platform
    MCAPI void $forEachPlayer(::std::function<bool(::Player const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendAllPlayerAbilities(::Player const&);
#else // @header-generator platform
    MCAPI void $forEachUser(::std::function<bool(::EntityContext&)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerAbilitiesManager>> $getPlayerAbilitiesManager();
#else // @header-generator platform
    MCAPI void $forEachUser(::std::function<bool(::EntityContext const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsManager>> $getPlayerPermissionsManager();
#else // @header-generator platform
    MCAPI ::Player* $findPlayer(::std::function<bool(::Player const&)> pred) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsSynchroniser>> $getPlayerPermissionsSynchroniser();
#else // @header-generator platform
    MCAPI ::Player* $findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangPackSettingsCache const* $getMolangPackSettingsCache() const;
#else // @header-generator platform
    MCAPI int $getUserCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Recipes& $getRecipes() const;
#else // @header-generator platform
    MCAPI int $countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockReducer* $getBlockReducer() const;
#else // @header-generator platform
    MCAPI ::std::vector<::OwnerPtr<::EntityContext>> const& $getUsers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<TrimPatternRegistry> $getTrimPatternRegistry();
#else // @header-generator platform
    MCAPI ::std::vector<::OwnerPtr<::EntityContext>> const& $getEntities() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<const TrimPatternRegistry> $getTrimPatternRegistry() const;
#else // @header-generator platform
    MCAPI void $onSourceCreated(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<TrimMaterialRegistry> $getTrimMaterialRegistry();
#else // @header-generator platform
    MCAPI void $onSourceDestroyed(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<const TrimMaterialRegistry> $getTrimMaterialRegistry() const;
#else // @header-generator platform
    MCFOLD void $onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockType const& $getRegisteredBorderBlock() const;
#else // @header-generator platform
    MCFOLD ::Bedrock::NonOwnerPointer<::SubChunkManager> $getSubChunkManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkPerformanceTelemetry>>
    $getLevelChunkPerformanceTelemetry();
#else // @header-generator platform
    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $use3DBiomeMaps() const;
#else // @header-generator platform
    MCAPI void $onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> $getChunkGenerationManager() const;
#else // @header-generator platform
    MCFOLD ::LevelChunkMetaDataManager* $getLevelChunkMetaDataManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<ChunkGenerationManager> $getChunkGenerationManager();
#else // @header-generator platform
    MCAPI void $onChunkDiscarded(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> $getLevelChunkEventManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Level* $asLevel();
#else // @header-generator platform
    MCAPI void $queueEntityDestruction(::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<CameraRegistry> $getCameraRegistry();
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> $removeEntity(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const CameraRegistry> $getCameraRegistry() const;
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> $removeEntity(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<EntitySystems> $getCameraSystems();
#else // @header-generator platform
    MCAPI void $forceRemoveEntity(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isClientSideGenerationEnabled();
#else // @header-generator platform
    MCAPI void $forceRemoveEntityfromWorld(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $blockNetworkIdsAreHashes();
#else // @header-generator platform
    MCAPI void $forceFlushRemovedPlayers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemRegistryRef $getItemRegistry() const;
#else // @header-generator platform
    MCFOLD void $loadFunctionManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> $getBlockTypeRegistry() const;
#else // @header-generator platform
    MCAPI void $levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $pauseAndFlushTaskGroups();
#else // @header-generator platform
    MCAPI void $registerTemporaryPointer(::_TickPtr& ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ReflectionCtx const& $cerealContext() const;
#else // @header-generator platform
    MCAPI void $unregisterTemporaryPointer(::_TickPtr& ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ReflectionCtx& $cerealContext();
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> $getTempEPtrManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $subChunkTickAndSendRequests();
#else // @header-generator platform
    MCAPI bool $destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $digestServerBlockProperties(::StartGamePacket const&);
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> $getLevelBlockDestroyer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerDeathManager* $_getPlayerDeathManager();
#else // @header-generator platform
    MCAPI void $upgradeStorageVersion(::StorageVersion v);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ReflectionCtx& $_cerealContext();
#else // @header-generator platform
    MCAPI void $suspendAndSave();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onLowMemory();
#else // @header-generator platform
    MCAPI void $sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();
#else // @header-generator platform
    MCAPI ::Particle* $addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSourceCreated(::BlockSource&);
#else // @header-generator platform
    MCAPI void
    $spawnParticleEffect(::std::string const& effectName, ::Vec3 const& spawnLocation, ::Dimension* dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSourceDestroyed(::BlockSource&);
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> $getServerParticleManager();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_subTick();
#else // @header-generator platform
    MCAPI void $addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeMapDataManager();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void $addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCAPI void $addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

    MCAPI ::ActorUniqueID $getNewUniqueID();

    MCAPI ::ActorRuntimeID $getNextRuntimeID();

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI ::std::vector<::ChunkPos> const& $getClientTickingOffsets() const;

    MCAPI ::std::vector<::ChunkPos>
    $getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> $getChunkTickOffsetManager() const;

    MCAPI bool $isExporting() const;

    MCAPI void $setIsExporting(bool IsExporting);

    MCAPI ::SavedDataStorage& $getSavedData();

    MCAPI ::MapItemSavedData* $getMapSavedData(::ActorUniqueID const uuid);

    MCAPI ::MapItemSavedData* $getMapSavedData(::CompoundTag const& instance);

    MCAPI ::MapItemSavedData* $getMapSavedData(::CompoundTag const* instance);

    MCAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCAPI ::ActorUniqueID $expandMapByID(::ActorUniqueID const uuid, bool wasInit);

    MCAPI bool $copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);

    MCAPI ::MapItemSavedData& $createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    );

    MCAPI ::MapItemSavedData& $createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    );

    MCAPI ::Core::PathBuffer<::std::string> $getScreenshotsFolder() const;

    MCAPI ::std::string $getLevelId() const;

    MCAPI void $setLevelId(::std::string LevelId);

    MCFOLD ::TaskGroup& $getSyncTasksGroup();

    MCAPI ::TaskGroup& $getIOTasksGroup();

    MCFOLD ::ResourcePackManager* $getClientResourcePackManager() const;

    MCFOLD ::ResourcePackManager* $getServerResourcePackManager() const;

    MCFOLD ::TradeTables* $getTradeTables();

    MCFOLD void $decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );

    MCFOLD void $incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    );

    MCFOLD ::Bedrock::NonOwnerPointer<::TagCacheManager> $getTagCacheManager();

    MCAPI bool $isEdu() const;

    MCFOLD ::ActorFactory& $getActorFactory();

    MCFOLD ::ActorFactory const& $getActorFactory() const;

    MCFOLD ::ActorInfoRegistry* $getActorInfoRegistry();

    MCAPI ::StackRefResult<::EntityRegistry> $getEntityRegistry();

    MCAPI ::StackRefResult<::EntityRegistry const> $getEntityRegistry() const;

    MCAPI ::EntitySystems& $getEntitySystems();

    MCFOLD ::WeakRef<::EntityContext> $getLevelEntity();

    MCFOLD ::WeakRef<::EntityContext const> $getLevelEntity() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> $tryGetVolumeEntityManagerServer() const;

    MCFOLD void $runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    );

    MCFOLD void $runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCAPI ::PlayerCapabilities::ISharedController const& $getCapabilities() const;

    MCFOLD ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& $getTagRegistry();

    MCAPI ::PlayerMovementSettings const& $getPlayerMovementSettings() const;

    MCAPI void $setPlayerMovementSettings(::PlayerMovementSettings const& settings);

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager> $getPlayerMovementSettingsManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    $getPlayerMovementSettingsManager() const;

    MCFOLD bool $canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const;

    MCFOLD ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> $getTrustedSkinHelper() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCFOLD ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCAPI ::PositionTrackingDB::PositionTrackingDBClient* $getPositionTrackerDBClient() const;

    MCFOLD ::PositionTrackingDB::PositionTrackingDBServer* $getPositionTrackerDBServer() const;

    MCAPI void $flushRunTimeLighting();

    MCFOLD ::std::weak_ptr<::ISubChunkLighter> $getSubChunkLighter() const;

    MCAPI void $loadBlockDefinitionGroup(::Experiments const& experiments);

    MCAPI void $initializeBlockDefinitionGroup();

    MCAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> $getUnknownBlockTypeRegistry();

    MCAPI bool $isClientSideGenerationEnabled();

    MCAPI bool $blockNetworkIdsAreHashes();

    MCAPI ::ItemRegistryRef $getItemRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> $getBlockTypeRegistry() const;

    MCFOLD ::Level* $asLevel();

    MCAPI bool $use3DBiomeMaps() const;

    MCAPI void $pauseAndFlushTaskGroups();

    MCFOLD ::DimensionManager& $getDimensionManager();

    MCFOLD ::DimensionManager const& $getDimensionManager() const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> $getDimensionManagerNonOwner();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> $getDimensionManagerNonOwner() const;

    MCFOLD void $subChunkTickAndSendRequests();

    MCAPI void $_subTick();

    MCFOLD ::StackRefResult<::PauseManager> $getPauseManager();

    MCFOLD ::StackRefResult<::PauseManager const> $getPauseManager() const;

#ifdef LL_PLAT_S
    MCFOLD bool $isClientSide() const;
#else // LL_PLAT_C
    MCAPI bool $isClientSide() const;
#endif

#ifdef LL_PLAT_S
    MCFOLD ::SubClientId $getSubClientId() const;
#else // LL_PLAT_C
    MCAPI ::SubClientId $getSubClientId() const;
#endif

    MCAPI ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& $getPlayerList() const;

    MCAPI ::std::string const& $getPlayerXUID(::mce::UUID const& uuid) const;

    MCAPI ::std::string const& $getPlayerPlatformOnlineId(::mce::UUID const& uuid) const;

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> $getPlayerListManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> $getPlayerListManager() const;

    MCAPI ::std::vector<::WeakEntityRef> const& $getActiveUsers() const;

    MCFOLD void $notifySubChunkRequestManager(::SubChunkPacket const& packet);

    MCFOLD ::SubChunkRequestManager* $getSubChunkRequestManager();

    MCAPI ::std::vector<::Actor*> $getRuntimeActorList() const;

    MCAPI ::PacketSender* $getPacketSender() const;

    MCAPI ::Bedrock::NonOwnerPointer<::NetEventCallback> $getNetEventCallback() const;

    MCAPI void $setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val);

    MCAPI ::gsl::not_null<::StackRefResult<::ILevelRandom>> $getILevelRandom();

    MCAPI ::IRandom& $getIRandom() const;

    MCAPI ::Random& $getRandom() const;

    MCAPI ::Random& $getThreadRandom() const;

    MCAPI ::HitResult& $getHitResult();

    MCAPI ::HitResult& $getLiquidHitResult();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> $getHitResultWrapper();

    MCAPI ::std::string const& $getImmersiveReaderString() const;

    MCAPI void $setImmersiveReaderString(::std::string newString);

    MCAPI ::AdventureSettings& $getAdventureSettings();

    MCAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCAPI ::GameRules const& $getGameRules() const;

    MCAPI ::GameRules& $getGameRules();

    MCAPI bool $hasStartWithMapEnabled() const;

    MCAPI bool $isEditorWorld() const;

    MCAPI bool $getAllowAnonymousBlockDropsInEditorWorlds() const;

    MCAPI bool $isHardcore() const;

    MCAPI ::Abilities& $getDefaultAbilities();

    MCAPI ::PermissionsHandler& $getDefaultPermissions();

    MCAPI ::PermissionsHandler const& $getDefaultPermissions() const;

    MCAPI bool $getTearingDown() const;

    MCAPI void $takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    );

    MCAPI ::LevelSoundManager& $getLevelSoundManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> $getSoundPlayer() const;

    MCAPI void $setSimPaused(bool value);

    MCAPI bool $getSimPaused() const;

    MCAPI void $setFinishedInitializing();

    MCAPI ::LootTables& $getLootTables();

    MCAPI void $updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    MCAPI int $getNetherScale() const;

    MCFOLD ::Scoreboard& $getScoreboard();

    MCFOLD ::Scoreboard const& $getScoreboard() const;

    MCFOLD ::Scoreboard* $tryGetScoreboard();

    MCAPI ::LayeredAbilities* $getPlayerAbilities(::ActorUniqueID const& playerId);

    MCAPI void $setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities);

    MCAPI void $sendAllPlayerAbilities(::Player const& playerReference);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> $getPlayerAbilitiesManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> $getPlayerPermissionsManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser> $getPlayerPermissionsSynchroniser();

    MCAPI ::Recipes& $getRecipes() const;

    MCAPI ::BlockReducer* $getBlockReducer() const;

    MCFOLD ::std::weak_ptr<::TrimPatternRegistry const> $getTrimPatternRegistry() const;

    MCFOLD ::std::weak_ptr<::TrimPatternRegistry> $getTrimPatternRegistry();

    MCFOLD ::std::weak_ptr<::TrimMaterialRegistry const> $getTrimMaterialRegistry() const;

    MCFOLD ::std::weak_ptr<::TrimMaterialRegistry> $getTrimMaterialRegistry();

    MCAPI ::BlockType const& $getRegisteredBorderBlock() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry> $getLevelChunkPerformanceTelemetry();

    MCFOLD ::cereal::ReflectionCtx& $cerealContext();

    MCFOLD ::cereal::ReflectionCtx const& $cerealContext() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> $getChunkGenerationManager();

    MCFOLD ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> $getChunkGenerationManager() const;

    MCFOLD void $clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId);

    MCAPI void $digestServerBlockProperties(::StartGamePacket const& packet);

    MCAPI ::MolangPackSettingsCache const* $getMolangPackSettingsCache() const;

    MCFOLD ::PlayerDeathManager* $_getPlayerDeathManager();

    MCAPI void $_initializeMapDataManager();

    MCFOLD ::cereal::ReflectionCtx& $_cerealContext();

    MCAPI void $_onLowMemory();


#endif // @header-generator platform
    // NOLINTEND
};
