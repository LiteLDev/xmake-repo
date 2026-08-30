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
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
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
class AABB;
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
class ArmorTrimUnloader;
class AutomationBehaviorTreeGroup;
class AutonomousActorManager;
class BaseLightTextureImageBuilder;
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
class BlockSource;
class BlockType;
class BlockTypeRegistry;
class BossEventSubscriptionManager;
class CameraPresets;
class CameraRegistry;
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
class ILevelChunkEventManagerConnector;
class ILevelRandom;
class IMinecraftEventing;
class IPlayerDimensionTransferConnector;
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
class Particle;
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
class PlayerLimboActorManager;
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
class SubChunkManager;
class SubChunkPacket;
class SubChunkRequestManager;
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
class TrustedSkinHelper;
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
// clang-format on

class Level : public ::ILevel, public ::BlockSourceListener, public ::IWorldRegistriesProvider {
public:
    // Level inner types define
    using RegionSet = std::unordered_set<BlockSource*>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    Level& operator=(Level const&);
    Level(Level const&);
    Level();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Level();

    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>);

    virtual void startLeaveGame();

    virtual bool isLeaveGameDone();

    virtual bool isDimensionTypeActive(::DimensionType) const;

    virtual ::WeakRef<Dimension> getOrCreateDimension(::DimensionType);

    virtual ::WeakRef<Dimension> getDimension(::DimensionType) const;

    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const*) const;

    virtual void forEachDimension(std::function<bool (const Dimension&)>) const;

    virtual void forEachDimension(std::function<bool (Dimension&)>);

    virtual ::DimensionManager const& getDimensionManager() const;

    virtual ::DimensionManager& getDimensionManager();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>> getDimensionManagerNonOwner() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>> getDimensionManagerNonOwner();

    virtual uint getChunkTickRange() const;

    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const;

    virtual ::PortalForcer& getPortalForcer();

    virtual void requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerDimensionTransferManager>> getPlayerDimensionTransferManager();

    virtual void entityChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3>);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorDimensionTransferManager>> getActorDimensionTransferManager();

    virtual ::Spawner& getSpawner() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BossEventSubscriptionManager>> getBossEventSubscriptionManager();

    virtual ::ProjectileFactory& getProjectileFactory() const;

    virtual ::ActorDefinitionGroup* getEntityDefinitions() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> getActorAnimationGroup() const;

    virtual ::Bedrock::NonOwnerPointer<ActorAnimationControllerGroup> getActorAnimationControllerGroup() const;

    virtual ::BlockDefinitionGroup* getBlockDefinitions() const;

    virtual ::PropertyGroupManager& getActorPropertyGroup() const;

    virtual ::CameraPresets& getCameraPresets();

    virtual ::CameraPresets const& getCameraPresets() const;

    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int) const;

    virtual bool getDisablePlayerInteractions() const;

    virtual void setDisablePlayerInteractions(bool const);

    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const;

    virtual ::BehaviorFactory& getBehaviorFactory() const;

    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const;

    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const;

    virtual ::DimensionConversionData getDimensionConversionData() const;

    virtual float getSpecialMultiplier(::DimensionType) const;

    virtual bool hasCommandsEnabled() const;

    virtual bool useMsaGamertagsOnly() const;

    virtual void setMsaGamertagsOnly(bool);

    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    virtual ::Actor* addGlobalEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    virtual ::Actor* addAutonomousEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    virtual void addUser(::OwnerPtr<EntityContext>);

    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>);

    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::OwnerPtr<EntityContext>);

    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>);

    virtual void removeDisplayEntity(::WeakEntityRef);

    virtual ::Bedrock::NonOwnerPointer<DisplayActorManager> getDisplayActorManager();

    virtual void suspendPlayer(::Player&);

    virtual void resumePlayer(::Player&);

    virtual bool isPlayerSuspended(::Player&) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const GameplayUserManager>> getGameplayUserManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>> getGameplayUserManager();

    virtual ::Bedrock::NonOwnerPointer<PlayerLocationReceiver> getPlayerLocationReceiver();

    virtual ::OwnerPtr<EntityContext> removeActorAndTakeEntity(::WeakEntityRef);

    virtual ::OwnerPtr<EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef);

    virtual ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&);

    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID, bool) const;

    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorFetcher>> getActorFetcher() const;

    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID, bool) const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorRuntimeIDManager>> getActorRuntimeIDManager() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorRuntimeIDManager>> getActorRuntimeIDManager();

    virtual ::Mob* getMob(::ActorUniqueID) const;

    virtual ::Player* getPlayer(::mce::UUID const&) const;

    virtual ::Player* getPlayer(std::string const&) const;

    virtual ::Player* getPlayerByXuid(std::string const&) const;

    virtual ::Player* getPlayer(::ActorUniqueID) const;

    virtual ::Player* getPlatformPlayer(std::string const&) const;

    virtual ::Player* getPlayerFromServerId(std::string const&) const;

    virtual ::Player* getRuntimePlayer(::ActorRuntimeID) const;

    virtual int getNumRemotePlayers() const;

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

    virtual ::ArmorTrimUnloader* getArmorTrimUnloader();

    virtual ::PlayerSleepManager& getPlayerSleepManager() = 0;

    virtual ::PlayerSleepManager const& getPlayerSleepManager() const = 0;

    virtual void onSourceCreated(::BlockSource&);

    virtual void onSourceDestroyed(::BlockSource&);

    virtual void _subTick();

    virtual void _initializeMapDataManager();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Level(::LevelArguments&&);

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
    );

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
    );

    MCNAPI void loadShapeRegistry();

    MCNAPI void setMolangPackSettingsCache(std::shared_ptr<MolangPackSettingsCache>);

    MCNAPI void setPerformanceTelemetryPeriodicCallback(std::function<void()>);

    MCNAPI void transferActorToOwnedEntityLimbo(::Player const&, ::Actor&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LevelStorageManager>
    _createLevelStorageManager(::Bedrock::UniqueOwnerPointer<LevelStorage>, ::Scheduler&, ::IMinecraftEventing&);

    MCNAPI static ::LevelSeed64 createLevelSeed64();

    MCNAPI static uint createRandomSeed();

    MCNAPI static std::string createUniqueLevelID(int);

    MCNAPI static bool isUsableLevel(::ILevel const&);

    MCNAPI static ::LevelSeed64 parseLevelSeed64(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $initialize(
        std::string const&,
        ::LevelSettings const&,
        ::Experiments const&,
        std::string const*,
        std::optional<std::reference_wrapper<
            std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>
    );

    MCNAPI void $startLeaveGame();

    MCNAPI bool $isLeaveGameDone();

    MCNAPI bool $isDimensionTypeActive(::DimensionType) const;

    MCNAPI ::WeakRef<Dimension> $getOrCreateDimension(::DimensionType);

    MCNAPI ::WeakRef<Dimension> $getDimension(::DimensionType) const;

    MCNAPI ::PlayerSpawnDimensionResolution $resolvePlayerSpawnDimension(::CompoundTag const*) const;

    MCNAPI void $forEachDimension(std::function<bool(const Dimension&)>) const;

    MCNAPI void $forEachDimension(std::function<bool(Dimension&)>);

    MCNAPI ::DimensionManager const& $getDimensionManager() const;

    MCNAPI ::DimensionManager& $getDimensionManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>> $getDimensionManagerNonOwner() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>> $getDimensionManagerNonOwner();

    MCNAPI uint $getChunkTickRange() const;

    MCNAPI ::ChunkTickRangeManager const& $getChunkTickRangeManager() const;

    MCNAPI ::PortalForcer& $getPortalForcer();

    MCNAPI void $requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerDimensionTransferManager>>
    $getPlayerDimensionTransferManager();

    MCNAPI void $entityChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3>);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorDimensionTransferManager>> $getActorDimensionTransferManager();

    MCNAPI ::Spawner& $getSpawner() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<BossEventSubscriptionManager>> $getBossEventSubscriptionManager();

    MCNAPI ::ProjectileFactory& $getProjectileFactory() const;

    MCNAPI ::ActorDefinitionGroup* $getEntityDefinitions() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> $getActorAnimationGroup() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ActorAnimationControllerGroup> $getActorAnimationControllerGroup() const;

    MCNAPI ::BlockDefinitionGroup* $getBlockDefinitions() const;

    MCNAPI ::PropertyGroupManager& $getActorPropertyGroup() const;

    MCNAPI ::CameraPresets& $getCameraPresets();

    MCNAPI ::CameraPresets const& $getCameraPresets() const;

    MCNAPI ::SharedTypes::v1_21_90::CameraPreset const* $getCameraPreset(int) const;

    MCNAPI bool $getDisablePlayerInteractions() const;

    MCNAPI void $setDisablePlayerInteractions(bool const);

    MCNAPI ::AutomationBehaviorTreeGroup& $getAutomationBehaviorTreeGroup() const;

    MCNAPI ::BehaviorFactory& $getBehaviorFactory() const;

    MCNAPI ::SharedTypes::Legacy::Difficulty $getDifficulty() const;

    MCNAPI ::InternalComponentRegistry& $getInternalComponentRegistry() const;

    MCNAPI ::DimensionConversionData $getDimensionConversionData() const;

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
    );

    MCNAPI void $playSound(
        ::IConstBlockSource const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool
    );

    MCNAPI void $playSound(::PlaySoundOptions const&);

    MCNAPI void $playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const);

    MCNAPI void
    $playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool);

    MCNAPI ::PlayerEventCoordinator& $getRemotePlayerEventCoordinator();

    MCNAPI ::ServerPlayerEventCoordinator& $getServerPlayerEventCoordinator();

    MCNAPI ::ClientPlayerEventCoordinator& $getClientPlayerEventCoordinator();

    MCNAPI ::ActorEventCoordinator& $getActorEventCoordinator();

    MCNAPI ::BlockEventCoordinator& $getBlockEventCoordinator();

    MCNAPI ::ItemEventCoordinator& $getItemEventCoordinator();

    MCNAPI ::ServerNetworkEventCoordinator& $getServerNetworkEventCoordinator();

    MCNAPI ::ScriptingEventCoordinator& $getScriptingEventCoordinator();

    MCNAPI ::ScriptDeferredEventCoordinator& $getScriptDeferredEventCoordinator();

    MCNAPI ::LevelEventCoordinator& $getLevelEventCoordinator();

    MCNAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&);

    MCNAPI void $handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>> $getLevelEventManager();

    MCNAPI void $handleStopSoundEvent(std::string const&);

    MCNAPI void $handleStopAllSounds();

    MCNAPI void $handleStopMusicEvent();

    MCNAPI void $broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::CompoundTag const&,
        ::UserEntityIdentifierComponent const*
    );

    MCNAPI void
    $broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*);

    MCNAPI void $broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&);

    MCNAPI void $broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);

    MCNAPI void $broadcastSoundEvent(
        ::Dimension&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI void $broadcastSoundEvent(
        ::BlockSource&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        ::Block const&,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

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
    );

    MCNAPI ::LevelSoundManager& $getLevelSoundManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> $getSoundPlayer() const;

    MCNAPI void $setSimPaused(bool);

    MCNAPI bool $getSimPaused() const;

    MCNAPI void $setFinishedInitializing();

    MCNAPI ::LootTables& $getLootTables();

    MCNAPI void $updateWeather(float, int, float, int);

    MCNAPI int $getNetherScale() const;

    MCNAPI ::Scoreboard const& $getScoreboard() const;

    MCNAPI ::Scoreboard& $getScoreboard();

    MCNAPI ::Scoreboard* $tryGetScoreboard();

    MCNAPI ::LayeredAbilities* $getPlayerAbilities(::ActorUniqueID const&);

    MCNAPI void $setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&);

    MCNAPI void $sendAllPlayerAbilities(::Player const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerAbilitiesManager>> $getPlayerAbilitiesManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsManager>> $getPlayerPermissionsManager();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsSynchroniser>> $getPlayerPermissionsSynchroniser();

    MCNAPI ::MolangPackSettingsCache const* $getMolangPackSettingsCache() const;

    MCNAPI ::Recipes& $getRecipes() const;

    MCNAPI ::BlockReducer* $getBlockReducer() const;

    MCNAPI std::weak_ptr<TrimPatternRegistry> $getTrimPatternRegistry();

    MCNAPI std::weak_ptr<const TrimPatternRegistry> $getTrimPatternRegistry() const;

    MCNAPI std::weak_ptr<TrimMaterialRegistry> $getTrimMaterialRegistry();

    MCNAPI std::weak_ptr<const TrimMaterialRegistry> $getTrimMaterialRegistry() const;

    MCNAPI ::BlockType const& $getRegisteredBorderBlock() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkPerformanceTelemetry>>
    $getLevelChunkPerformanceTelemetry();

    MCNAPI bool $use3DBiomeMaps() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> $getChunkGenerationManager() const;

    MCNAPI ::Bedrock::NonOwnerPointer<ChunkGenerationManager> $getChunkGenerationManager();

    MCNAPI void $clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId);

    MCNAPI ::Level* $asLevel();

    MCNAPI ::Bedrock::NonOwnerPointer<CameraRegistry> $getCameraRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<const CameraRegistry> $getCameraRegistry() const;

    MCNAPI ::Bedrock::NonOwnerPointer<EntitySystems> $getCameraSystems();

    MCNAPI bool $isClientSideGenerationEnabled();

    MCNAPI bool $blockNetworkIdsAreHashes();

    MCNAPI ::ItemRegistryRef $getItemRegistry() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> $getBlockTypeRegistry() const;

    MCNAPI void $pauseAndFlushTaskGroups();

    MCNAPI ::cereal::ReflectionCtx const& $cerealContext() const;

    MCNAPI ::cereal::ReflectionCtx& $cerealContext();

    MCNAPI void $subChunkTickAndSendRequests();

    MCNAPI void $digestServerBlockProperties(::StartGamePacket const&);

    MCNAPI ::PlayerDeathManager* $_getPlayerDeathManager();

    MCNAPI ::cereal::ReflectionCtx& $_cerealContext();

    MCNAPI void $_onLowMemory();

    MCNAPI ::ArmorTrimUnloader* $getArmorTrimUnloader();

    MCNAPI void $onSourceCreated(::BlockSource&);

    MCNAPI void $onSourceDestroyed(::BlockSource&);

    MCNAPI void $_subTick();

    MCNAPI void $_initializeMapDataManager();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
