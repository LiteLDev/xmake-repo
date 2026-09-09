#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/Factory.h"
#include "mc/util/IDType.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
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
class ActorInfoRegistry;
class ActorRuntimeID;
class ActorRuntimeIDManager;
class ActorSoundIdentifier;
class AutomationBehaviorTreeGroup;
class BaseLightTextureImageBuilder;
class BehaviorFactory;
class BiomeComponentFactory;
class BiomeManager;
class BiomeRegistry;
class Block;
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
class ClientLevel;
class ClientPlayerEventCoordinator;
class Command;
class CommandOrigin;
class CompoundTag;
class Dimension;
class DimensionConversionData;
class DimensionManager;
class DisplayActorManager;
class EducationSettingsManager;
class EntityContext;
class EntityRegistry;
class EntitySystems;
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
class ILevelRandom;
class IMinecraftEventing;
class IRandom;
class ISubChunkLighter;
class IUnknownBlockTypeRegistry;
class IWorldRegistriesProvider;
class InternalComponentRegistry;
class ItemEventCoordinator;
class ItemRegistryRef;
class JigsawStructureRegistry;
class LayeredAbilities;
class Level;
class LevelBlockDestroyer;
class LevelChunk;
class LevelChunkEventManager;
class LevelChunkMetaDataManager;
class LevelChunkPerformanceTelemetry;
class LevelData;
class LevelEventCoordinator;
class LevelEventManager;
class LevelListener;
class LevelSeed64;
class LevelSettings;
class LevelSoundManager;
class LevelStorage;
class LootTables;
class MapDataManager;
class MapItemSavedData;
class Mob;
class MolangPackSettingsCache;
class MolangVariableMap;
class NavigationComponent;
class NetEventCallback;
class NetworkIdentifier;
class PacketSender;
class Particle;
class Path;
class PauseManager;
class PermissionsHandler;
class PhotoManager;
class PhotoStorage;
class Player;
class PlayerAbilitiesManager;
class PlayerDeathManager;
class PlayerDimensionTransferManager;
class PlayerEventCoordinator;
class PlayerListEntry;
class PlayerListManager;
class PlayerLocationReceiver;
class PlayerMovementSettingsManager;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
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
class TickTimeManager;
class TickingAreaList;
class TickingAreasManager;
class TradeTables;
class TrimMaterialRegistry;
class TrimPatternRegistry;
class TrustedSkinHelper;
class UserEntityIdentifierComponent;
class Vec3;
class VolumeEntityManagerServer;
class WeakEntityRef;
class WorldClockRegistry;
class _TickPtr;
struct ActorUniqueID;
struct AdventureSettings;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct Bounds;
struct BreakingItemParticleData;
struct DerivedDimensionArguments;
struct DimensionType;
struct PlaySoundOptions;
struct PlayerMovementSettings;
struct PlayerSleepStatus;
struct PlayerSpawnDimensionResolution;
struct ResolvedItemIconInfo;
struct ScreenshotOptions;
struct Tick;
namespace GameModeExt { struct MessengerFactory; }
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

class ILevel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ILevel() = default;

    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>) = 0;

    virtual void startLeaveGame() = 0;

    virtual bool isLeaveGameDone() = 0;

    virtual bool isDimensionTypeActive(::DimensionType) const = 0;

    virtual ::WeakRef<Dimension> getOrCreateDimension(::DimensionType) = 0;

    virtual ::WeakRef<Dimension> getDimension(::DimensionType) const = 0;

    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const*) const = 0;

    virtual void forEachDimension(std::function<bool (const Dimension&)>) const = 0;

    virtual void forEachDimension(std::function<bool (Dimension&)>) = 0;

    virtual ::DimensionManager const& getDimensionManager() const = 0;

    virtual ::DimensionManager& getDimensionManager() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>> getDimensionManagerNonOwner() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>> getDimensionManagerNonOwner() = 0;

    virtual uint getChunkTickRange() const = 0;

    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const = 0;

    virtual ::PortalForcer& getPortalForcer() = 0;

    virtual void requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerDimensionTransferManager>> getPlayerDimensionTransferManager() = 0;

    virtual void entityChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3>) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorDimensionTransferManager>> getActorDimensionTransferManager() = 0;

    virtual ::Spawner& getSpawner() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BossEventSubscriptionManager>> getBossEventSubscriptionManager() = 0;

    virtual ::ProjectileFactory& getProjectileFactory() const = 0;

    virtual ::ActorDefinitionGroup* getEntityDefinitions() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> getActorAnimationGroup() const = 0;

    virtual ::Bedrock::NonOwnerPointer<ActorAnimationControllerGroup> getActorAnimationControllerGroup() const = 0;

    virtual ::BlockDefinitionGroup* getBlockDefinitions() const = 0;

    virtual ::PropertyGroupManager& getActorPropertyGroup() const = 0;

    virtual ::CameraPresets& getCameraPresets() = 0;

    virtual ::CameraPresets const& getCameraPresets() const = 0;

    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int) const = 0;

    virtual bool getDisablePlayerInteractions() const = 0;

    virtual void setDisablePlayerInteractions(bool const) = 0;

    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const = 0;

    virtual ::BehaviorFactory& getBehaviorFactory() const = 0;

    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const = 0;

    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const = 0;

    virtual ::DimensionConversionData getDimensionConversionData() const = 0;

    virtual float getSpecialMultiplier(::DimensionType) const = 0;

    virtual bool hasCommandsEnabled() const = 0;

    virtual bool useMsaGamertagsOnly() const = 0;

    virtual void setMsaGamertagsOnly(bool) = 0;

    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;

    virtual ::Actor* addGlobalEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;

    virtual ::Actor* addAutonomousEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;

    virtual void addUser(::OwnerPtr<EntityContext>) = 0;

    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;

    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::OwnerPtr<EntityContext>) = 0;

    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>) = 0;

    virtual void removeDisplayEntity(::WeakEntityRef) = 0;

    virtual ::Bedrock::NonOwnerPointer<DisplayActorManager> getDisplayActorManager() = 0;

    virtual void suspendPlayer(::Player&) = 0;

    virtual void resumePlayer(::Player&) = 0;

    virtual bool isPlayerSuspended(::Player&) const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const GameplayUserManager>> getGameplayUserManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>> getGameplayUserManager() = 0;

    virtual ::Bedrock::NonOwnerPointer<PlayerLocationReceiver> getPlayerLocationReceiver() = 0;

    virtual ::OwnerPtr<EntityContext> removeActorAndTakeEntity(::WeakEntityRef) = 0;

    virtual ::OwnerPtr<EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef) = 0;

    virtual ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&) = 0;

    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID, bool) const = 0;

    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorFetcher>> getActorFetcher() const = 0;

    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID, bool) const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorRuntimeIDManager>> getActorRuntimeIDManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorRuntimeIDManager>> getActorRuntimeIDManager() = 0;

    virtual ::Mob* getMob(::ActorUniqueID) const = 0;

    virtual ::Player* getPlayer(::mce::UUID const&) const = 0;

    virtual ::Player* getPlayer(std::string const&) const = 0;

    virtual ::Player* getPlayerByXuid(std::string const&) const = 0;

    virtual ::Player* getPlayer(::ActorUniqueID) const = 0;

    virtual ::Player* getPlatformPlayer(std::string const&) const = 0;

    virtual ::Player* getPlayerFromServerId(std::string const&) const = 0;

    virtual ::Player* getRuntimePlayer(::ActorRuntimeID) const = 0;

    virtual int getNumRemotePlayers() const = 0;

    virtual ::Player* getPrimaryLocalPlayer() const = 0;

    virtual ::IMinecraftEventing& getEventing() = 0;

    virtual ::mce::Color getPlayerColor(::Player const&) const = 0;

    virtual ::Tick const& getCurrentTick() const = 0;

    virtual ::Tick const getCurrentServerTick() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const TickDeltaTimeManager>> getTickDeltaTimeManager() const = 0;

    virtual std::shared_ptr<const VoxelShapes::VoxelShapeRegistry> getShapeRegistry() const = 0;

    virtual std::shared_ptr<VoxelShapes::VoxelShapeRegistry> getMutableShapeRegistry() const = 0;

    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    virtual ::BlockPalette& getBlockPalette() = 0;

    virtual ::BlockPalette const& getBlockPalette() const = 0;

    virtual ::FeatureRegistry& getFeatureRegistry() = 0;

    virtual ::FeatureRegistry const& getFeatureRegistry() const = 0;

    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const = 0;

    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const = 0;

    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> getStructureManager() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> const getStructureManager() const = 0;

    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const = 0;

    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const = 0;

    virtual ::BiomeManager& getBiomeManager() = 0;

    virtual ::BiomeManager const& getBiomeManager() const = 0;

    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& getDimensionFactory() = 0;

    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&> const& getDimensionFactory() const = 0;

    virtual ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&>& getLightTextureImageBuilderFactory() = 0;

    virtual ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&> const& getLightTextureImageBuilderFactory() const = 0;

    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() = 0;

    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> getWorldClockRegistry() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const = 0;

    virtual void addListener(::LevelListener&) = 0;

    virtual void removeListener(::LevelListener&) = 0;

    virtual void tickEntities() = 0;

    virtual void tickEntitySystems() = 0;

    virtual ::StackRefResult<const PauseManager> getPauseManager() const = 0;

    virtual ::StackRefResult<PauseManager> getPauseManager() = 0;

    virtual void onPlayerDeath(::Player&, ::ActorDamageSource const&) = 0;

    virtual void tick() = 0;

    virtual bool explode(::Explosion&) = 0;

    virtual bool explode(::BlockSource&, ::Actor*, ::Vec3 const&, float, bool, bool, float, bool) = 0;

    virtual void spawnParticleEffect(std::string const&, ::Vec3 const&, ::Dimension*) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ServerParticleManager>> getServerParticleManager() = 0;

    virtual void denyEffect(::BlockSource&, ::Vec3 const&) = 0;

    virtual void potionSplash(::Vec3 const&, ::mce::Color const&, bool) = 0;

    virtual bool extinguishFire(::BlockSource&, ::BlockPos const&, uchar, ::Actor*) = 0;

    virtual std::unique_ptr<Path> findPath(::Actor&, ::Actor const&, ::NavigationComponent&) = 0;

    virtual std::unique_ptr<Path> findPath(::Actor&, int, int, int, ::NavigationComponent&) = 0;

    virtual void updateSleepingPlayerList() = 0;

    virtual void setSleepStatus(::PlayerSleepStatus const&) = 0;

    virtual ::PlayerSleepStatus getSleepStatus() const = 0;

    virtual int getTime() const = 0;

    virtual void setTime(int) = 0;

    virtual uint getSeed() = 0;

    virtual ::LevelSeed64 getLevelSeed64() const = 0;

    virtual ::BlockPos const& getSharedSpawnPos() const = 0;

    virtual void setDefaultSpawn(::BlockPos const&) = 0;

    virtual ::BlockPos const& getDefaultSpawn() const = 0;

    virtual void setDefaultGameType(::GameType) = 0;

    virtual ::GameType getDefaultGameType() const = 0;

    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty) = 0;

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const = 0;

    virtual void setMultiplayerGameIntent(bool) = 0;

    virtual bool getMultiplayerGameIntent() const = 0;

    virtual void setMultiplayerGame(bool) = 0;

    virtual bool isMultiplayerGame() const = 0;

    virtual void setLANBroadcastIntent(bool) = 0;

    virtual bool getLANBroadcastIntent() const = 0;

    virtual void setLANBroadcast(bool) = 0;

    virtual bool getLANBroadcast() const = 0;

    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting) = 0;

    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const = 0;

    virtual bool hasXBLBroadcastIntent() const = 0;

    virtual void setXBLBroadcastMode(::Social::GamePublishSetting) = 0;

    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const = 0;

    virtual bool hasXBLBroadcast() const = 0;

    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting) = 0;

    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const = 0;

    virtual bool hasPlatformBroadcastIntent() const = 0;

    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting) = 0;

    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const = 0;

    virtual bool hasPlatformBroadcast() const = 0;

    virtual void setHasLockedBehaviorPack(bool) = 0;

    virtual void setHasLockedResourcePack(bool) = 0;

    virtual ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> getServerPlayerSleepManager() const = 0;

    virtual ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> getServerPlayerSleepManager() = 0;

    virtual void setCommandsEnabled(bool) = 0;

    virtual void setWorldTemplateOptionsUnlocked() = 0;

    virtual bool hasLevelStorage() const = 0;

    virtual ::LevelStorage const& getLevelStorage() const = 0;

    virtual ::LevelStorage& getLevelStorage() = 0;

    virtual ::LevelData const& getLevelData() const = 0;

    virtual ::LevelData& getLevelData() = 0;

    virtual ::PhotoStorage& getPhotoStorage() const = 0;

    virtual void createPhotoStorage() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PhotoManager>> getPhotoManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PhotoManager>> getPhotoManager() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const EducationSettingsManager>> getEducationSettingsManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<EducationSettingsManager>> getEducationSettingsManager() = 0;

    virtual void save() = 0;

    virtual void saveLevelData() = 0;

    virtual void saveGameData() = 0;

    virtual std::shared_ptr<void*> requestTimedStorageDeferment() = 0;

    virtual ::TickingAreasManager& getTickingAreasMgr() = 0;

    virtual void addTickingAreaList(::DimensionType, std::shared_ptr<TickingAreaList> const&) = 0;

    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int) = 0;

    virtual void playSound(::DimensionType, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;

    virtual void playSound(::IConstBlockSource const&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;

    virtual void playSound(::PlaySoundOptions const&) = 0;

    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const) = 0;

    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;

    virtual ::PlayerEventCoordinator& getRemotePlayerEventCoordinator() = 0;

    virtual ::ServerPlayerEventCoordinator& getServerPlayerEventCoordinator() = 0;

    virtual ::ClientPlayerEventCoordinator& getClientPlayerEventCoordinator() = 0;

    virtual ::ActorEventCoordinator& getActorEventCoordinator() = 0;

    virtual ::BlockEventCoordinator& getBlockEventCoordinator() = 0;

    virtual ::ItemEventCoordinator& getItemEventCoordinator() = 0;

    virtual ::ServerNetworkEventCoordinator& getServerNetworkEventCoordinator() = 0;

    virtual ::ScriptingEventCoordinator& getScriptingEventCoordinator() = 0;

    virtual ::ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator() = 0;

    virtual ::LevelEventCoordinator& getLevelEventCoordinator() = 0;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&) = 0;

    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>> getLevelEventManager() = 0;

    virtual void handleStopSoundEvent(std::string const&) = 0;

    virtual void handleStopAllSounds() = 0;

    virtual void handleStopMusicEvent() = 0;

    virtual void broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&, ::UserEntityIdentifierComponent const*) = 0;

    virtual void broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*) = 0;

    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&) = 0;

    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) = 0;

    virtual void broadcastSoundEvent(::Dimension&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&) = 0;

    virtual void broadcastSoundEvent(::BlockSource&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&) = 0;

    virtual void broadcastSoundEvent(::BlockSource&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, ::Block const&, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&) = 0;

    virtual void broadcastActorEvent(::Actor&, ::ActorEvent, int, std::optional<Vec3> const&) const = 0;

    virtual ::Bedrock::NonOwnerPointer<const ActorEventBroadcaster> getActorEventBroadcaster() const = 0;

    virtual void addChunkViewTracker(std::weak_ptr<ChunkViewSource>) = 0;

    virtual void onChunkReload(::Bounds const&) = 0;

    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&) = 0;

    virtual int getActivePlayerCount() const = 0;

    virtual int getActiveUsersCount() const = 0;

    virtual void forEachPlayer(std::function<bool (const Player&)>) const = 0;

    virtual void forEachPlayer(std::function<bool (Player&)>) = 0;

    virtual void forEachUser(std::function<bool (const EntityContext&)>) const = 0;

    virtual void forEachUser(std::function<bool (EntityContext&)>) = 0;

    virtual ::Player* findPlayer(std::function<bool (const WeakEntityRef&)>) const = 0;

    virtual ::Player* findPlayer(std::function<bool (const Player&)>) const = 0;

    virtual int getUserCount() const = 0;

    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const&) const = 0;

    virtual std::vector<OwnerPtr<EntityContext>> const& getUsers() const = 0;

    virtual std::vector<OwnerPtr<EntityContext>> const& getEntities() const = 0;

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool) = 0;

    virtual ::Bedrock::NonOwnerPointer<SubChunkManager> getSubChunkManager() = 0;

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&) = 0;

    virtual void onChunkDiscarded(::LevelChunk&) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkEventManager>> getLevelChunkEventManager() = 0;

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() = 0;

    virtual void queueEntityDestruction(::OwnerPtr<EntityContext>) = 0;

    virtual ::OwnerPtr<EntityContext> removeEntity(::WeakEntityRef) = 0;

    virtual ::OwnerPtr<EntityContext> removeEntity(::Actor&) = 0;

    virtual void forceRemoveEntity(::Actor&) = 0;

    virtual void forceRemoveEntityfromWorld(::Actor&) = 0;

    virtual void forceFlushRemovedPlayers() = 0;

    virtual void loadFunctionManager() = 0;

    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<EntityContext>) = 0;

    virtual void registerTemporaryPointer(::_TickPtr&) = 0;

    virtual void unregisterTemporaryPointer(::_TickPtr&) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TempEPtrManager>> getTempEPtrManager() = 0;

    virtual bool destroyBlock(::BlockSource&, ::BlockPos const&, bool, ::BlockChangeContext const&) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelBlockDestroyer>> getLevelBlockDestroyer() = 0;

    virtual void upgradeStorageVersion(::StorageVersion) = 0;

    virtual void suspendAndSave() = 0;

    virtual ::Particle* addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool) = 0;

    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&) = 0;

    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) = 0;

    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) = 0;

    virtual void addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&) = 0;

    virtual void addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>) = 0;

    virtual ::ActorUniqueID getNewUniqueID() = 0;

    virtual ::ActorRuntimeID getNextRuntimeID() = 0;

    virtual std::vector<ChunkPos> const& getTickingOffsets() const = 0;

    virtual std::vector<ChunkPos> const& getClientTickingOffsets() const = 0;

    virtual std::vector<ChunkPos> getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&) const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ChunkTickOffsetManager>> getChunkTickOffsetManager() const = 0;

    virtual bool isExporting() const = 0;

    virtual void setIsExporting(bool) = 0;

    virtual ::SavedDataStorage& getSavedData() = 0;

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const*) = 0;

    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const&) = 0;

    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const) = 0;

    virtual void requestMapInfo(::ActorUniqueID const, bool) = 0;

    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const, bool) = 0;

    virtual bool copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const) = 0;

    virtual ::MapItemSavedData& createMapSavedData(std::vector<ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int) = 0;

    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int) = 0;

    virtual ::Core::PathBuffer<std::string> getScreenshotsFolder() const = 0;

    virtual std::string getLevelId() const = 0;

    virtual void setLevelId(std::string) = 0;

    virtual ::TaskGroup& getSyncTasksGroup() = 0;

    virtual ::TaskGroup& getIOTasksGroup() = 0;

    virtual ::ResourcePackManager* getClientResourcePackManager() const = 0;

    virtual ::ResourcePackManager* getServerResourcePackManager() const = 0;

    virtual ::TradeTables* getTradeTables();

    virtual void decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&) = 0;

    virtual void incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&) = 0;

    virtual ::Bedrock::NonOwnerPointer<TagCacheManager> getTagCacheManager() = 0;

    virtual bool isEdu() const = 0;

    virtual ::ActorFactory const& getActorFactory() const = 0;

    virtual ::ActorFactory& getActorFactory() = 0;

    virtual ::ActorInfoRegistry* getActorInfoRegistry() = 0;

    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const = 0;

    virtual ::StackRefResult<EntityRegistry> getEntityRegistry() = 0;

    virtual ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> getContainerRegistryAccess() const = 0;

    virtual ::gsl::not_null<StackRefResult<IContainerRegistryTracker>> getContainerRegistryTracker() const = 0;

    virtual ::gsl::not_null<StackRefResult<IDynamicContainerSerialization>> getDynamicContainerSerialization() const = 0;

    virtual ::EntitySystems& getEntitySystems() = 0;

    virtual ::WeakRef<const EntityContext> getLevelEntity() const = 0;

    virtual ::WeakRef<EntityContext> getLevelEntity() = 0;

    virtual ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const = 0;

    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem) = 0;

    virtual void runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const) = 0;

    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const = 0;

    virtual ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>& getTagRegistry() = 0;

    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const = 0;

    virtual void setPlayerMovementSettings(::PlayerMovementSettings const&) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerMovementSettingsManager>> getPlayerMovementSettingsManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerMovementSettingsManager>> getPlayerMovementSettingsManager() = 0;

    virtual bool canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const = 0;

    virtual ::Bedrock::NonOwnerPointer<const TrustedSkinHelper> getTrustedSkinHelper() const = 0;

    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const = 0;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const = 0;

    virtual void flushRunTimeLighting() = 0;

    virtual std::weak_ptr<ISubChunkLighter> getSubChunkLighter() const = 0;

    virtual void loadBlockDefinitionGroup(::Experiments const&) = 0;

    virtual void initializeBlockDefinitionGroup() = 0;

    virtual ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() = 0;

    virtual bool isClientSide() const = 0;

    virtual ::SubClientId getSubClientId() const = 0;

    virtual std::unordered_map<mce::UUID, PlayerListEntry> const& getPlayerList() const = 0;

    virtual std::string const& getPlayerXUID(::mce::UUID const&) const = 0;

    virtual std::string const& getPlayerPlatformOnlineId(::mce::UUID const&) const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerListManager>> getPlayerListManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerListManager>> getPlayerListManager() = 0;

    virtual std::vector<WeakEntityRef> const& getActiveUsers() const = 0;

    virtual std::vector<Actor*> getRuntimeActorList() const = 0;

    virtual void notifySubChunkRequestManager(::SubChunkPacket const&) = 0;

    virtual ::SubChunkRequestManager* getSubChunkRequestManager() = 0;

    virtual ::PacketSender* getPacketSender() const = 0;

    virtual ::Bedrock::NonOwnerPointer<NetEventCallback> getNetEventCallback() const = 0;

    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<NetEventCallback>) = 0;

    virtual ::gsl::not_null<StackRefResult<ILevelRandom>> getILevelRandom() = 0;

    virtual ::IRandom& getIRandom() const = 0;

    virtual ::Random& getRandom() const = 0;

    virtual ::Random& getThreadRandom() const = 0;

    virtual ::HitResult& getHitResult() = 0;

    virtual ::HitResult& getLiquidHitResult() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<HitResultWrapper>> getHitResultWrapper() = 0;

    virtual std::string const& getImmersiveReaderString() const = 0;

    virtual void setImmersiveReaderString(std::string) = 0;

    virtual ::AdventureSettings const& getAdventureSettings() const = 0;

    virtual ::AdventureSettings& getAdventureSettings() = 0;

    virtual ::GameRules& getGameRules() = 0;

    virtual ::GameRules const& getGameRules() const = 0;

    virtual bool hasStartWithMapEnabled() const = 0;

    virtual bool isEditorWorld() const = 0;

    virtual bool getAllowAnonymousBlockDropsInEditorWorlds() const = 0;

    virtual bool isHardcore() const = 0;

    virtual ::Abilities& getDefaultAbilities() = 0;

    virtual ::PermissionsHandler const& getDefaultPermissions() const = 0;

    virtual ::PermissionsHandler& getDefaultPermissions() = 0;

    virtual bool getTearingDown() const = 0;

    virtual void takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>) = 0;

    virtual ::LevelSoundManager& getLevelSoundManager() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> getSoundPlayer() const = 0;

    virtual void setSimPaused(bool) = 0;

    virtual bool getSimPaused() const = 0;

    virtual void setFinishedInitializing() = 0;

    virtual ::LootTables& getLootTables() = 0;

    virtual void updateWeather(float, int, float, int) = 0;

    virtual int getNetherScale() const = 0;

    virtual ::Scoreboard const& getScoreboard() const = 0;

    virtual ::Scoreboard& getScoreboard() = 0;

    virtual ::Scoreboard* tryGetScoreboard() = 0;

    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const&) = 0;

    virtual void setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&) = 0;

    virtual void sendAllPlayerAbilities(::Player const&) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerAbilitiesManager>> getPlayerAbilitiesManager() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsManager>> getPlayerPermissionsManager() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsSynchroniser>> getPlayerPermissionsSynchroniser() = 0;

    virtual ::MolangPackSettingsCache const* getMolangPackSettingsCache() const = 0;

    virtual ::Recipes& getRecipes() const = 0;

    virtual ::BlockReducer* getBlockReducer() const = 0;

    virtual std::weak_ptr<TrimPatternRegistry> getTrimPatternRegistry() = 0;

    virtual std::weak_ptr<const TrimPatternRegistry> getTrimPatternRegistry() const = 0;

    virtual std::weak_ptr<TrimMaterialRegistry> getTrimMaterialRegistry() = 0;

    virtual std::weak_ptr<const TrimMaterialRegistry> getTrimMaterialRegistry() const = 0;

    virtual ::BlockType const& getRegisteredBorderBlock() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkPerformanceTelemetry>> getLevelChunkPerformanceTelemetry() = 0;

    virtual bool use3DBiomeMaps() const = 0;

    virtual ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> getChunkGenerationManager() const = 0;

    virtual ::Bedrock::NonOwnerPointer<ChunkGenerationManager> getChunkGenerationManager() = 0;

    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> getMapDataManager() = 0;

    virtual ::Level* asLevel();

    virtual ::ClientLevel* asClientLevel();

    virtual ::Bedrock::NonOwnerPointer<CameraRegistry> getCameraRegistry() = 0;

    virtual ::Bedrock::NonOwnerPointer<const CameraRegistry> getCameraRegistry() const = 0;

    virtual ::Bedrock::NonOwnerPointer<EntitySystems> getCameraSystems() = 0;

    virtual bool isClientSideGenerationEnabled() = 0;

    virtual bool blockNetworkIdsAreHashes() = 0;

    virtual ::ItemRegistryRef getItemRegistry() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> getBlockTypeRegistry() const = 0;

    virtual void pauseAndFlushTaskGroups() = 0;

    virtual ::cereal::ReflectionCtx const& cerealContext() const = 0;

    virtual ::cereal::ReflectionCtx& cerealContext() = 0;

    virtual void subChunkTickAndSendRequests() = 0;

    virtual void digestServerBlockProperties(::StartGamePacket const&) = 0;

    virtual ::PlayerDeathManager* _getPlayerDeathManager() = 0;

    virtual ::MapDataManager& _getMapDataManager() = 0;

    virtual ::TickTimeManager& _getTickTimeManager() = 0;

    virtual ::TickTimeManager const& _getTickTimeManager() const = 0;

    virtual ::cereal::ReflectionCtx& _cerealContext() = 0;

    virtual void _onLowMemory() = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addParticleEffect(::HashedString const&, ::Vec3 const&);

    MCNAPI ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientLevel* $asClientLevel();
    // NOLINTEND
};
