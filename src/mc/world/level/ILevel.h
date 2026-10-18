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
#if defined(LL_PLAT_A) // @header-generator platform
class BaseLightTextureImageBuilder;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class ClientLevel;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class Particle;
#else // @header-generator platform
#endif // @header-generator platform
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
class TickTimeManager;
class TickingAreaList;
class TickingAreasManager;
class TradeTables;
class TrimMaterialRegistry;
class TrimPatternRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class TrustedSkinHelper;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BaseLightTextureImageBuilder;
class CameraRegistry;
class ClientLevel;
class Particle;
class SubChunkManager;
class SubChunkRequestManager;
class TrustedSkinHelper;
#endif // @header-generator platform
// clang-format on

class ILevel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ILevel() = default;
#else // @header-generator platform
    virtual ~ILevel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool initialize(std::string const&, ::LevelSettings const&, ::Experiments const&, std::string const*, std::optional<std::reference_wrapper<std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>>>) = 0;
#else // @header-generator platform
    virtual bool initialize(
        ::std::string const&   levelName,
        ::LevelSettings const& levelSettings,
        ::Experiments const&   experiments,
        ::std::string const*   levelId,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) = 0;
#endif // @header-generator platform

    virtual void startLeaveGame() = 0;

    virtual bool isLeaveGameDone() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDimensionTypeActive(::DimensionType) const = 0;
#else // @header-generator platform
    virtual bool isDimensionTypeActive(::DimensionType dimensionType) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<Dimension> getOrCreateDimension(::DimensionType) = 0;
#else // @header-generator platform
    virtual ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<Dimension> getDimension(::DimensionType) const = 0;
#else // @header-generator platform
    virtual ::WeakRef<::Dimension> getDimension(::DimensionType id) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const*) const = 0;
#else // @header-generator platform
    virtual ::PlayerSpawnDimensionResolution resolvePlayerSpawnDimension(::CompoundTag const* playerTag) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachDimension(std::function<bool (const Dimension&)>) const = 0;
#else // @header-generator platform
    virtual void forEachDimension(::std::function<bool(::Dimension&)> callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachDimension(std::function<bool (Dimension&)>) = 0;

    virtual ::DimensionManager const& getDimensionManager() const = 0;
#else // @header-generator platform
    virtual void forEachDimension(::std::function<bool(::Dimension const&)> callback) const = 0;
#endif // @header-generator platform

    virtual ::DimensionManager& getDimensionManager() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>> getDimensionManagerNonOwner() const = 0;
#else // @header-generator platform
    virtual ::DimensionManager const& getDimensionManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>> getDimensionManagerNonOwner() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> getDimensionManagerNonOwner() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> getDimensionManagerNonOwner() const = 0;
#endif // @header-generator platform

    virtual uint getChunkTickRange() const = 0;

    virtual ::ChunkTickRangeManager const& getChunkTickRangeManager() const = 0;

    virtual ::PortalForcer& getPortalForcer() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestPlayerChangeDimension(::Player&, ::ChangeDimensionRequest&&) = 0;
#else // @header-generator platform
    virtual void requestPlayerChangeDimension(::Player& player, ::ChangeDimensionRequest&& changeRequest) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerDimensionTransferManager>> getPlayerDimensionTransferManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerDimensionTransferManager> getPlayerDimensionTransferManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void entityChangeDimension(::Actor&, ::DimensionType, std::optional<Vec3>) = 0;
#else // @header-generator platform
    virtual void entityChangeDimension(::Actor& entity, ::DimensionType toId, ::std::optional<::Vec3> entityPos) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorDimensionTransferManager>> getActorDimensionTransferManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorDimensionTransferManager> getActorDimensionTransferManager() = 0;
#endif // @header-generator platform

    virtual ::Spawner& getSpawner() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BossEventSubscriptionManager>> getBossEventSubscriptionManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::BossEventSubscriptionManager> getBossEventSubscriptionManager() = 0;
#endif // @header-generator platform

    virtual ::ProjectileFactory& getProjectileFactory() const = 0;

    virtual ::ActorDefinitionGroup* getEntityDefinitions() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> getActorAnimationGroup() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> getActorAnimationGroup() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<ActorAnimationControllerGroup> getActorAnimationControllerGroup() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() const = 0;
#endif // @header-generator platform

    virtual ::BlockDefinitionGroup* getBlockDefinitions() const = 0;

    virtual ::PropertyGroupManager& getActorPropertyGroup() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CameraPresets& getCameraPresets() = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::CameraPresets const& getCameraPresets() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int) const = 0;
#else // @header-generator platform
    virtual ::CameraPresets& getCameraPresets() = 0;

    virtual ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(int presetIndex) const = 0;
#endif // @header-generator platform

    virtual bool getDisablePlayerInteractions() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDisablePlayerInteractions(bool const) = 0;
#else // @header-generator platform
    virtual void setDisablePlayerInteractions(bool const disable) = 0;
#endif // @header-generator platform

    virtual ::AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const = 0;

    virtual ::BehaviorFactory& getBehaviorFactory() const = 0;

    virtual ::SharedTypes::Legacy::Difficulty getDifficulty() const = 0;

    virtual ::InternalComponentRegistry& getInternalComponentRegistry() const = 0;

    virtual ::DimensionConversionData getDimensionConversionData() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getSpecialMultiplier(::DimensionType) const = 0;
#else // @header-generator platform
    virtual float getSpecialMultiplier(::DimensionType dimensionType) const = 0;
#endif // @header-generator platform

    virtual bool hasCommandsEnabled() const = 0;

    virtual bool useMsaGamertagsOnly() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setMsaGamertagsOnly(bool) = 0;
#else // @header-generator platform
    virtual void setMsaGamertagsOnly(bool msaGamertagsOnly) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual ::Actor* addEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addGlobalEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual ::Actor* addGlobalEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addAutonomousEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual ::Actor* addAutonomousEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addUser(::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual void addUser(::OwnerPtr<::EntityContext> userEntity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* addDisplayEntity(::BlockSource&, ::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual ::Actor* addDisplayEntity(::BlockSource& region, ::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual ::Actor* putEntity(
        ::BlockSource&              region,
        ::ActorUniqueID             id,
        ::ActorRuntimeID            runtimeId,
        ::OwnerPtr<::EntityContext> entity
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* putEntity(::BlockSource&, ::ActorUniqueID, ::ActorRuntimeID, ::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual ::Actor* putEntity(::BlockSource& region, ::ActorUniqueID id, ::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeDisplayEntity(::WeakEntityRef) = 0;
#else // @header-generator platform
    virtual void removeDisplayEntity(::WeakEntityRef entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<DisplayActorManager> getDisplayActorManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::DisplayActorManager> getDisplayActorManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void suspendPlayer(::Player&) = 0;
#else // @header-generator platform
    virtual void suspendPlayer(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resumePlayer(::Player&) = 0;
#else // @header-generator platform
    virtual void resumePlayer(::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPlayerSuspended(::Player&) const = 0;
#else // @header-generator platform
    virtual bool isPlayerSuspended(::Player& player) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const GameplayUserManager>> getGameplayUserManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> getGameplayUserManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>> getGameplayUserManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager const> getGameplayUserManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<PlayerLocationReceiver> getPlayerLocationReceiver() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> getPlayerLocationReceiver() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> removeActorAndTakeEntity(::WeakEntityRef) = 0;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> removeActorAndTakeEntity(::WeakEntityRef entityRef) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef) = 0;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> removeActorFromWorldAndTakeEntity(::WeakEntityRef entityRef) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> takeEntity(::WeakEntityRef, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& lc) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID, bool) const = 0;
#else // @header-generator platform
    virtual ::StrictEntityContext fetchStrictEntity(::ActorUniqueID actorId, bool getRemoved) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const = 0;
#else // @header-generator platform
    virtual ::Actor* fetchEntity(::ActorUniqueID actorId, bool getRemoved) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorFetcher>> getActorFetcher() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> getActorFetcher() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID, bool) const = 0;
#else // @header-generator platform
    virtual ::Actor* getRuntimeEntity(::ActorRuntimeID actorId, bool getRemoved) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorRuntimeIDManager>> getActorRuntimeIDManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager> getActorRuntimeIDManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ActorRuntimeIDManager>> getActorRuntimeIDManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ActorRuntimeIDManager const> getActorRuntimeIDManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Mob* getMob(::ActorUniqueID) const = 0;
#else // @header-generator platform
    virtual ::Mob* getMob(::ActorUniqueID mobId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayer(::mce::UUID const&) const = 0;
#else // @header-generator platform
    virtual ::Player* getPlayer(::std::string const& name) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayer(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Player* getPlayer(::mce::UUID const& uuid) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayerByXuid(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Player* getPlayer(::ActorUniqueID entityID) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayer(::ActorUniqueID) const = 0;
#else // @header-generator platform
    virtual ::Player* getPlayerByXuid(::std::string const& xuid) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlatformPlayer(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Player* getPlatformPlayer(::std::string const& platformOnlineId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getPlayerFromServerId(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Player* getPlayerFromServerId(::std::string const& serverId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* getRuntimePlayer(::ActorRuntimeID) const = 0;
#else // @header-generator platform
    virtual ::Player* getRuntimePlayer(::ActorRuntimeID runtimeId) const = 0;
#endif // @header-generator platform

    virtual int getNumRemotePlayers() const = 0;

    virtual ::Player* getPrimaryLocalPlayer() const = 0;

    virtual ::IMinecraftEventing& getEventing() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getPlayerColor(::Player const&) const = 0;
#else // @header-generator platform
    virtual ::mce::Color getPlayerColor(::Player const& player) const = 0;
#endif // @header-generator platform

    virtual ::Tick const& getCurrentTick() const = 0;

    virtual ::Tick const getCurrentServerTick() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const TickDeltaTimeManager>> getTickDeltaTimeManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::TickDeltaTimeManager const> getTickDeltaTimeManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<const VoxelShapes::VoxelShapeRegistry> getShapeRegistry() const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry const> getShapeRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<VoxelShapes::VoxelShapeRegistry> getMutableShapeRegistry() const = 0;

    virtual ::BiomeRegistry& getBiomeRegistry() = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> getMutableShapeRegistry() const = 0;
#endif // @header-generator platform

    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPalette& getBlockPalette() = 0;
#else // @header-generator platform
    virtual ::BiomeRegistry& getBiomeRegistry() = 0;
#endif // @header-generator platform

    virtual ::BlockPalette const& getBlockPalette() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::FeatureRegistry& getFeatureRegistry() = 0;
#else // @header-generator platform
    virtual ::BlockPalette& getBlockPalette() = 0;
#endif // @header-generator platform

    virtual ::FeatureRegistry const& getFeatureRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;
#else // @header-generator platform
    virtual ::FeatureRegistry& getFeatureRegistry() = 0;
#endif // @header-generator platform

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;
#else // @header-generator platform
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;
#endif // @header-generator platform

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;
#else // @header-generator platform
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;
#endif // @header-generator platform

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> getStructureManager() = 0;
#else // @header-generator platform
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> const getStructureManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() = 0;
#endif // @header-generator platform

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;
#else // @header-generator platform
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;
#endif // @header-generator platform

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeManager& getBiomeManager() = 0;
#else // @header-generator platform
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;
#endif // @header-generator platform

    virtual ::BiomeManager const& getBiomeManager() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& getDimensionFactory() = 0;
#else // @header-generator platform
    virtual ::BiomeManager& getBiomeManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&> const& getDimensionFactory() const = 0;
#else // @header-generator platform
    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& getDimensionFactory() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&>& getLightTextureImageBuilderFactory() = 0;
#else // @header-generator platform
    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionFactory() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Factory<BaseLightTextureImageBuilder, Level&, Scheduler&> const& getLightTextureImageBuilderFactory() const = 0;
#else // @header-generator platform
    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&> const&
    getLightTextureImageBuilderFactory() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() = 0;
#else // @header-generator platform
    virtual ::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& getLightTextureImageBuilderFactory() = 0;
#endif // @header-generator platform

    virtual ::IWorldRegistriesProvider const& getWorldRegistriesProvider() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> getWorldClockRegistry() = 0;
#else // @header-generator platform
    virtual ::IWorldRegistriesProvider& getWorldRegistriesProvider() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addListener(::LevelListener&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> getWorldClockRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeListener(::LevelListener&) = 0;
#else // @header-generator platform
    virtual void addListener(::LevelListener& listener) = 0;

    virtual void removeListener(::LevelListener& listener) = 0;
#endif // @header-generator platform

    virtual void tickEntities() = 0;

    virtual void tickEntitySystems() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<const PauseManager> getPauseManager() const = 0;
#else // @header-generator platform
    virtual ::StackRefResult<::PauseManager> getPauseManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<PauseManager> getPauseManager() = 0;
#else // @header-generator platform
    virtual ::StackRefResult<::PauseManager const> getPauseManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerDeath(::Player&, ::ActorDamageSource const&) = 0;
#else // @header-generator platform
    virtual void onPlayerDeath(::Player& player, ::ActorDamageSource const& source) = 0;
#endif // @header-generator platform

    virtual void tick() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool explode(::Explosion&) = 0;
#else // @header-generator platform
    virtual bool explode(
        ::BlockSource& region,
        ::Actor*       source,
        ::Vec3 const&  pos,
        float          explosionRadius,
        bool           fire,
        bool           breaksBlocks,
        float          maxResistance,
        bool           allowUnderwater
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool explode(::BlockSource&, ::Actor*, ::Vec3 const&, float, bool, bool, float, bool) = 0;
#else // @header-generator platform
    virtual bool explode(::Explosion& explosion) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void spawnParticleEffect(std::string const&, ::Vec3 const&, ::Dimension*) = 0;
#else // @header-generator platform
    virtual void
    spawnParticleEffect(::std::string const& effectName, ::Vec3 const& spawnLocation, ::Dimension* dimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ServerParticleManager>> getServerParticleManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ServerParticleManager> getServerParticleManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void denyEffect(::BlockSource&, ::Vec3 const&) = 0;
#else // @header-generator platform
    virtual void denyEffect(::BlockSource& region, ::Vec3 const& pos) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void potionSplash(::Vec3 const&, ::mce::Color const&, bool) = 0;
#else // @header-generator platform
    virtual void potionSplash(::Vec3 const& pos, ::mce::Color const& color, bool instantaneousEffect) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool extinguishFire(::BlockSource&, ::BlockPos const&, uchar, ::Actor*) = 0;
#else // @header-generator platform
    virtual bool extinguishFire(::BlockSource& region, ::BlockPos const& pos, uchar face, ::Actor* source) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Path> findPath(::Actor&, ::Actor const&, ::NavigationComponent&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Path>
    findPath(::Actor& from, int xBest, int yBest, int zBest, ::NavigationComponent& navigation) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Path> findPath(::Actor&, int, int, int, ::NavigationComponent&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Path> findPath(::Actor& from, ::Actor const& to, ::NavigationComponent& navigation) = 0;
#endif // @header-generator platform

    virtual void updateSleepingPlayerList() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSleepStatus(::PlayerSleepStatus const&) = 0;
#else // @header-generator platform
    virtual void setSleepStatus(::PlayerSleepStatus const& status) = 0;
#endif // @header-generator platform

    virtual ::PlayerSleepStatus getSleepStatus() const = 0;

    virtual int getTime() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTime(int) = 0;
#else // @header-generator platform
    virtual void setTime(int time) = 0;
#endif // @header-generator platform

    virtual uint getSeed() = 0;

    virtual ::LevelSeed64 getLevelSeed64() const = 0;

    virtual ::BlockPos const& getSharedSpawnPos() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDefaultSpawn(::BlockPos const&) = 0;
#else // @header-generator platform
    virtual void setDefaultSpawn(::BlockPos const& spawnPos) = 0;
#endif // @header-generator platform

    virtual ::BlockPos const& getDefaultSpawn() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDefaultGameType(::GameType) = 0;
#else // @header-generator platform
    virtual void setDefaultGameType(::GameType gameType) = 0;
#endif // @header-generator platform

    virtual ::GameType getDefaultGameType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty) = 0;
#else // @header-generator platform
    virtual void setDifficulty(::SharedTypes::Legacy::Difficulty difficulty) = 0;
#endif // @header-generator platform

    virtual ::GameModeExt::MessengerFactory createMessengerFactory() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setMultiplayerGameIntent(bool) = 0;
#else // @header-generator platform
    virtual void setMultiplayerGameIntent(bool multiplayerGame) = 0;
#endif // @header-generator platform

    virtual bool getMultiplayerGameIntent() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setMultiplayerGame(bool) = 0;
#else // @header-generator platform
    virtual void setMultiplayerGame(bool multiplayerGame) = 0;
#endif // @header-generator platform

    virtual bool isMultiplayerGame() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLANBroadcastIntent(bool) = 0;
#else // @header-generator platform
    virtual void setLANBroadcastIntent(bool broadcast) = 0;
#endif // @header-generator platform

    virtual bool getLANBroadcastIntent() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLANBroadcast(bool) = 0;
#else // @header-generator platform
    virtual void setLANBroadcast(bool broadcast) = 0;
#endif // @header-generator platform

    virtual bool getLANBroadcast() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting) = 0;
#else // @header-generator platform
    virtual void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode) = 0;
#endif // @header-generator platform

    virtual ::Social::GamePublishSetting getXBLBroadcastIntent() const = 0;

    virtual bool hasXBLBroadcastIntent() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setXBLBroadcastMode(::Social::GamePublishSetting) = 0;
#else // @header-generator platform
    virtual void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode) = 0;
#endif // @header-generator platform

    virtual ::Social::GamePublishSetting getXBLBroadcastMode() const = 0;

    virtual bool hasXBLBroadcast() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting) = 0;
#else // @header-generator platform
    virtual void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode) = 0;
#endif // @header-generator platform

    virtual ::Social::GamePublishSetting getPlatformBroadcastIntent() const = 0;

    virtual bool hasPlatformBroadcastIntent() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting) = 0;
#else // @header-generator platform
    virtual void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode) = 0;
#endif // @header-generator platform

    virtual ::Social::GamePublishSetting getPlatformBroadcastMode() const = 0;

    virtual bool hasPlatformBroadcast() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setHasLockedBehaviorPack(bool) = 0;
#else // @header-generator platform
    virtual void setHasLockedBehaviorPack(bool hasLocked) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setHasLockedResourcePack(bool) = 0;
#else // @header-generator platform
    virtual void setHasLockedResourcePack(bool hasLocked) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const ServerPlayerSleepManager> getServerPlayerSleepManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager> getServerPlayerSleepManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<ServerPlayerSleepManager> getServerPlayerSleepManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerSleepManager const> getServerPlayerSleepManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCommandsEnabled(bool) = 0;
#else // @header-generator platform
    virtual void setCommandsEnabled(bool commandsEnabled) = 0;
#endif // @header-generator platform

    virtual void setWorldTemplateOptionsUnlocked() = 0;

    virtual bool hasLevelStorage() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelStorage const& getLevelStorage() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::LevelStorage& getLevelStorage() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelData const& getLevelData() const = 0;
#else // @header-generator platform
    virtual ::LevelStorage const& getLevelStorage() const = 0;
#endif // @header-generator platform

    virtual ::LevelData& getLevelData() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::LevelData const& getLevelData() const = 0;
#endif // @header-generator platform

    virtual ::PhotoStorage& getPhotoStorage() const = 0;

    virtual void createPhotoStorage() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PhotoManager>> getPhotoManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager> getPhotoManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PhotoManager>> getPhotoManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PhotoManager const> getPhotoManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const EducationSettingsManager>> getEducationSettingsManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager> getEducationSettingsManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<EducationSettingsManager>> getEducationSettingsManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::EducationSettingsManager const> getEducationSettingsManager() const = 0;
#endif // @header-generator platform

    virtual void save() = 0;

    virtual void saveLevelData() = 0;

    virtual void saveGameData() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<void*> requestTimedStorageDeferment() = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<void*> requestTimedStorageDeferment() = 0;
#endif // @header-generator platform

    virtual ::TickingAreasManager& getTickingAreasMgr() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addTickingAreaList(::DimensionType, std::shared_ptr<TickingAreaList> const&) = 0;
#else // @header-generator platform
    virtual void
    addTickingAreaList(::DimensionType dimensionId, ::std::shared_ptr<::TickingAreaList> const& tickingAreas) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int) = 0;
#else // @header-generator platform
    virtual void sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playSound(::DimensionType, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;
#else // @header-generator platform
    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playSound(::IConstBlockSource const&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;
#else // @header-generator platform
    virtual void playSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        float const                            volume,
        float const                            pitch
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playSound(::PlaySoundOptions const&) = 0;
#else // @header-generator platform
    virtual void playSound(::PlaySoundOptions const& options) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, float const, float const) = 0;
#else // @header-generator platform
    virtual void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playSound(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool) = 0;
#else // @header-generator platform
    virtual void playSound(
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal
    ) = 0;
#endif // @header-generator platform

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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&) = 0;
#else // @header-generator platform
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) = 0;
#else // @header-generator platform
    virtual void handleLevelEvent(::SharedTypes::Legacy::LevelEvent type, ::CompoundTag const& data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventManager>> getLevelEventManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> getLevelEventManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleStopSoundEvent(std::string const&) = 0;
#else // @header-generator platform
    virtual void handleStopSoundEvent(::std::string const& name) = 0;
#endif // @header-generator platform

    virtual void handleStopAllSounds() = 0;

    virtual void handleStopMusicEvent() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&, ::UserEntityIdentifierComponent const*) = 0;
#else // @header-generator platform
    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*) = 0;
#else // @header-generator platform
    virtual void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifier
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, ::Block const&) = 0;
#else // @header-generator platform
    virtual void
    broadcastLocalEvent(::BlockSource& region, ::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastLocalEvent(::BlockSource&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int) = 0;
#else // @header-generator platform
    virtual void broadcastLocalEvent(
        ::BlockSource&                    region,
        ::SharedTypes::Legacy::LevelEvent type,
        ::Vec3 const&                     pos,
        ::Block const&                    block
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastSoundEvent(::Dimension&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&) = 0;
#else // @header-generator platform
    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastSoundEvent(::BlockSource&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&) = 0;
#else // @header-generator platform
    virtual void broadcastSoundEvent(
        ::BlockSource&                         region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastSoundEvent(::BlockSource&, ::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, ::Block const&, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&) = 0;
#else // @header-generator platform
    virtual void broadcastSoundEvent(
        ::Dimension&                           dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorSoundIdentifier const&          actorSoundIdentifier,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastActorEvent(::Actor&, ::ActorEvent, int, std::optional<Vec3> const&) const = 0;
#else // @header-generator platform
    virtual void broadcastActorEvent(
        ::Actor&                       actor,
        ::ActorEvent                   eventId,
        int                            data,
        ::std::optional<::Vec3> const& fireAtPosition
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const ActorEventBroadcaster> getActorEventBroadcaster() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ActorEventBroadcaster const> getActorEventBroadcaster() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addChunkViewTracker(std::weak_ptr<ChunkViewSource>) = 0;
#else // @header-generator platform
    virtual void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkReload(::Bounds const&) = 0;
#else // @header-generator platform
    virtual void onChunkReload(::Bounds const& bound) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkReloaded(::ChunkSource&, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void onChunkReloaded(::ChunkSource& source, ::LevelChunk& lc) = 0;
#endif // @header-generator platform

    virtual int getActivePlayerCount() const = 0;

    virtual int getActiveUsersCount() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachPlayer(std::function<bool (const Player&)>) const = 0;
#else // @header-generator platform
    virtual void forEachPlayer(::std::function<bool(::Player&)> callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachPlayer(std::function<bool (Player&)>) = 0;
#else // @header-generator platform
    virtual void forEachPlayer(::std::function<bool(::Player const&)> callback) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachUser(std::function<bool (const EntityContext&)>) const = 0;
#else // @header-generator platform
    virtual void forEachUser(::std::function<bool(::EntityContext&)> callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachUser(std::function<bool (EntityContext&)>) = 0;
#else // @header-generator platform
    virtual void forEachUser(::std::function<bool(::EntityContext const&)> callback) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* findPlayer(std::function<bool (const WeakEntityRef&)>) const = 0;
#else // @header-generator platform
    virtual ::Player* findPlayer(::std::function<bool(::Player const&)> pred) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Player* findPlayer(std::function<bool (const Player&)>) const = 0;
#else // @header-generator platform
    virtual ::Player* findPlayer(::std::function<bool(::WeakEntityRef const&)> pred) const = 0;
#endif // @header-generator platform

    virtual int getUserCount() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const&) const = 0;
#else // @header-generator platform
    virtual int countUsersWithMatchingNetworkId(::NetworkIdentifier const& networkId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<OwnerPtr<EntityContext>> const& getUsers() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getUsers() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<OwnerPtr<EntityContext>> const& getEntities() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::OwnerPtr<::EntityContext>> const& getEntities() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool) = 0;
#else // @header-generator platform
    virtual void onSubChunkLoaded(
        ::ChunkSource& source,
        ::LevelChunk&  lc,
        short          absoluteSubChunkIndex,
        bool           subChunkVisibilityChanged
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<SubChunkManager> getSubChunkManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::SubChunkManager> getSubChunkManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChunkDiscarded(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void onChunkDiscarded(::LevelChunk& lc) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkEventManager>> getLevelChunkEventManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkEventManager> getLevelChunkEventManager() = 0;
#endif // @header-generator platform

    virtual ::LevelChunkMetaDataManager* getLevelChunkMetaDataManager() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void queueEntityDestruction(::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual void queueEntityDestruction(::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> removeEntity(::WeakEntityRef) = 0;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> removeEntity(::Actor& actor) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<EntityContext> removeEntity(::Actor&) = 0;
#else // @header-generator platform
    virtual ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forceRemoveEntity(::Actor&) = 0;
#else // @header-generator platform
    virtual void forceRemoveEntity(::Actor& actor) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forceRemoveEntityfromWorld(::Actor&) = 0;
#else // @header-generator platform
    virtual void forceRemoveEntityfromWorld(::Actor& actor) = 0;
#endif // @header-generator platform

    virtual void forceFlushRemovedPlayers() = 0;

    virtual void loadFunctionManager() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<EntityContext>) = 0;
#else // @header-generator platform
    virtual void levelCleanupQueueEntityRemoval(::OwnerPtr<::EntityContext> entity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerTemporaryPointer(::_TickPtr&) = 0;
#else // @header-generator platform
    virtual void registerTemporaryPointer(::_TickPtr& ptr) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterTemporaryPointer(::_TickPtr&) = 0;
#else // @header-generator platform
    virtual void unregisterTemporaryPointer(::_TickPtr& ptr) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<TempEPtrManager>> getTempEPtrManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::TempEPtrManager> getTempEPtrManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool destroyBlock(::BlockSource&, ::BlockPos const&, bool, ::BlockChangeContext const&) = 0;
#else // @header-generator platform
    virtual bool destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelBlockDestroyer>> getLevelBlockDestroyer() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelBlockDestroyer> getLevelBlockDestroyer() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void upgradeStorageVersion(::StorageVersion) = 0;
#else // @header-generator platform
    virtual void upgradeStorageVersion(::StorageVersion v) = 0;
#endif // @header-generator platform

    virtual void suspendAndSave() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Particle* addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool) = 0;
#else // @header-generator platform
    virtual ::Particle* addParticle(
        ::ParticleType       id,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&) = 0;
#else // @header-generator platform
    virtual void addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) = 0;
#else // @header-generator platform
    virtual void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float) = 0;
#else // @header-generator platform
    virtual void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&) = 0;
#else // @header-generator platform
    virtual void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>) = 0;
#else // @header-generator platform
    virtual void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    ) = 0;
#endif // @header-generator platform

    virtual ::ActorUniqueID getNewUniqueID() = 0;

    virtual ::ActorRuntimeID getNextRuntimeID() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ChunkPos> const& getTickingOffsets() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ChunkPos> const& getClientTickingOffsets() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::ChunkPos> const& getClientTickingOffsets() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ChunkPos> getSortedPositionsFromClientOffsets(std::vector<ChunkPos> const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::ChunkPos>
    getSortedPositionsFromClientOffsets(::std::vector<::ChunkPos> const& centers) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const ChunkTickOffsetManager>> getChunkTickOffsetManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::ChunkTickOffsetManager const> getChunkTickOffsetManager() const = 0;
#endif // @header-generator platform

    virtual bool isExporting() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setIsExporting(bool) = 0;
#else // @header-generator platform
    virtual void setIsExporting(bool IsExporting) = 0;
#endif // @header-generator platform

    virtual ::SavedDataStorage& getSavedData() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const*) = 0;
#else // @header-generator platform
    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const uuid) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const&) = 0;
#else // @header-generator platform
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const& instance) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData* getMapSavedData(::ActorUniqueID const) = 0;
#else // @header-generator platform
    virtual ::MapItemSavedData* getMapSavedData(::CompoundTag const* instance) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestMapInfo(::ActorUniqueID const, bool) = 0;
#else // @header-generator platform
    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const, bool) = 0;
#else // @header-generator platform
    virtual ::ActorUniqueID expandMapByID(::ActorUniqueID const uuid, bool wasInit) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const) = 0;
#else // @header-generator platform
    virtual bool copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(std::vector<ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int) = 0;
#else // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int) = 0;
#else // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getScreenshotsFolder() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getScreenshotsFolder() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLevelId() const = 0;
#else // @header-generator platform
    virtual ::std::string getLevelId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLevelId(std::string) = 0;
#else // @header-generator platform
    virtual void setLevelId(::std::string LevelId) = 0;
#endif // @header-generator platform

    virtual ::TaskGroup& getSyncTasksGroup() = 0;

    virtual ::TaskGroup& getIOTasksGroup() = 0;

    virtual ::ResourcePackManager* getClientResourcePackManager() const = 0;

    virtual ::ResourcePackManager* getServerResourcePackManager() const = 0;

    virtual ::TradeTables* getTradeTables();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&) = 0;
#else // @header-generator platform
    virtual void decrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void incrementTagCache(std::string const&, ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>&) = 0;
#else // @header-generator platform
    virtual void incrementTagCache(
        ::std::string const&                                                      tag,
        ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& tagRegistry
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<TagCacheManager> getTagCacheManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::TagCacheManager> getTagCacheManager() = 0;
#endif // @header-generator platform

    virtual bool isEdu() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorFactory const& getActorFactory() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::ActorFactory& getActorFactory() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::ActorFactory const& getActorFactory() const = 0;
#endif // @header-generator platform

    virtual ::ActorInfoRegistry* getActorInfoRegistry() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const = 0;
#else // @header-generator platform
    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<EntityRegistry> getEntityRegistry() = 0;
#else // @header-generator platform
    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<StackRefResult<IContainerRegistryAccess>> getContainerRegistryAccess() const = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> getContainerRegistryAccess() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<StackRefResult<IContainerRegistryTracker>> getContainerRegistryTracker() const = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> getContainerRegistryTracker() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<StackRefResult<IDynamicContainerSerialization>> getDynamicContainerSerialization() const = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>>
    getDynamicContainerSerialization() const = 0;
#endif // @header-generator platform

    virtual ::EntitySystems& getEntitySystems() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<const EntityContext> getLevelEntity() const = 0;
#else // @header-generator platform
    virtual ::WeakRef<::EntityContext> getLevelEntity() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<EntityContext> getLevelEntity() = 0;
#else // @header-generator platform
    virtual ::WeakRef<::EntityContext const> getLevelEntity() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::VolumeEntityManagerServer> tryGetVolumeEntityManagerServer() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem) = 0;
#else // @header-generator platform
    virtual void runCommand(
        ::HashedString const&     commandStr,
        ::CommandOrigin&          origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion const commandVersion
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const) = 0;
#else // @header-generator platform
    virtual void runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem) = 0;
#endif // @header-generator platform

    virtual ::PlayerCapabilities::ISharedController const& getCapabilities() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TagRegistry<IDType<LevelTagIDType>, IDType<LevelTagSetIDType>>& getTagRegistry() = 0;
#else // @header-generator platform
    virtual ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& getTagRegistry() = 0;
#endif // @header-generator platform

    virtual ::PlayerMovementSettings const& getPlayerMovementSettings() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerMovementSettings(::PlayerMovementSettings const&) = 0;
#else // @header-generator platform
    virtual void setPlayerMovementSettings(::PlayerMovementSettings const& settings) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerMovementSettingsManager>> getPlayerMovementSettingsManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager> getPlayerMovementSettingsManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerMovementSettingsManager>> getPlayerMovementSettingsManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerMovementSettingsManager const>
    getPlayerMovementSettingsManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseSkin(::SerializedSkinRef const&, ::NetworkIdentifier const&, ::ActorUniqueID const&) const = 0;
#else // @header-generator platform
    virtual bool canUseSkin(
        ::SerializedSkinRef const& skin,
        ::NetworkIdentifier const& networkIdentifier,
        ::ActorUniqueID const&     playerId
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const TrustedSkinHelper> getTrustedSkinHelper() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::TrustedSkinHelper const> getTrustedSkinHelper() const = 0;
#endif // @header-generator platform

    virtual ::PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const = 0;

    virtual ::PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const = 0;

    virtual void flushRunTimeLighting() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<ISubChunkLighter> getSubChunkLighter() const = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::ISubChunkLighter> getSubChunkLighter() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadBlockDefinitionGroup(::Experiments const&) = 0;
#else // @header-generator platform
    virtual void loadBlockDefinitionGroup(::Experiments const& experiments) = 0;
#endif // @header-generator platform

    virtual void initializeBlockDefinitionGroup() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry() = 0;
#endif // @header-generator platform

    virtual bool isClientSide() const = 0;

    virtual ::SubClientId getSubClientId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<mce::UUID, PlayerListEntry> const& getPlayerList() const = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& getPlayerList() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getPlayerXUID(::mce::UUID const&) const = 0;
#else // @header-generator platform
    virtual ::std::string const& getPlayerXUID(::mce::UUID const& uuid) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getPlayerPlatformOnlineId(::mce::UUID const&) const = 0;
#else // @header-generator platform
    virtual ::std::string const& getPlayerPlatformOnlineId(::mce::UUID const& uuid) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const PlayerListManager>> getPlayerListManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager> getPlayerListManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerListManager>> getPlayerListManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerListManager const> getPlayerListManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<WeakEntityRef> const& getActiveUsers() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::WeakEntityRef> const& getActiveUsers() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Actor*> getRuntimeActorList() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Actor*> getRuntimeActorList() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifySubChunkRequestManager(::SubChunkPacket const&) = 0;
#else // @header-generator platform
    virtual void notifySubChunkRequestManager(::SubChunkPacket const& packet) = 0;
#endif // @header-generator platform

    virtual ::SubChunkRequestManager* getSubChunkRequestManager() = 0;

    virtual ::PacketSender* getPacketSender() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<NetEventCallback> getNetEventCallback() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<NetEventCallback>) = 0;
#else // @header-generator platform
    virtual void setNetEventCallback(::Bedrock::NonOwnerPointer<::NetEventCallback> val) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<StackRefResult<ILevelRandom>> getILevelRandom() = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::StackRefResult<::ILevelRandom>> getILevelRandom() = 0;
#endif // @header-generator platform

    virtual ::IRandom& getIRandom() const = 0;

    virtual ::Random& getRandom() const = 0;

    virtual ::Random& getThreadRandom() const = 0;

    virtual ::HitResult& getHitResult() = 0;

    virtual ::HitResult& getLiquidHitResult() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<HitResultWrapper>> getHitResultWrapper() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::HitResultWrapper> getHitResultWrapper() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getImmersiveReaderString() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getImmersiveReaderString() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setImmersiveReaderString(std::string) = 0;

    virtual ::AdventureSettings const& getAdventureSettings() const = 0;
#else // @header-generator platform
    virtual void setImmersiveReaderString(::std::string newString) = 0;
#endif // @header-generator platform

    virtual ::AdventureSettings& getAdventureSettings() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameRules& getGameRules() = 0;
#else // @header-generator platform
    virtual ::AdventureSettings const& getAdventureSettings() const = 0;
#endif // @header-generator platform

    virtual ::GameRules const& getGameRules() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::GameRules& getGameRules() = 0;
#endif // @header-generator platform

    virtual bool hasStartWithMapEnabled() const = 0;

    virtual bool isEditorWorld() const = 0;

    virtual bool getAllowAnonymousBlockDropsInEditorWorlds() const = 0;

    virtual bool isHardcore() const = 0;

    virtual ::Abilities& getDefaultAbilities() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PermissionsHandler const& getDefaultPermissions() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::PermissionsHandler& getDefaultPermissions() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::PermissionsHandler const& getDefaultPermissions() const = 0;
#endif // @header-generator platform

    virtual bool getTearingDown() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void takePicture(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>) = 0;
#else // @header-generator platform
    virtual void takePicture(
        ::cg::ImageBuffer&                                              outImage,
        ::Actor*                                                        camera,
        ::Actor*                                                        target,
        ::ScreenshotOptions&                                            screenshotOptions,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)> completedScreenshotCallback
    ) = 0;
#endif // @header-generator platform

    virtual ::LevelSoundManager& getLevelSoundManager() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<SoundPlayerInterface>> getSoundPlayer() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundPlayerInterface> getSoundPlayer() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSimPaused(bool) = 0;
#else // @header-generator platform
    virtual void setSimPaused(bool value) = 0;
#endif // @header-generator platform

    virtual bool getSimPaused() const = 0;

    virtual void setFinishedInitializing() = 0;

    virtual ::LootTables& getLootTables() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateWeather(float, int, float, int) = 0;
#else // @header-generator platform
    virtual void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime) = 0;
#endif // @header-generator platform

    virtual int getNetherScale() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scoreboard const& getScoreboard() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::Scoreboard& getScoreboard() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::Scoreboard const& getScoreboard() const = 0;
#endif // @header-generator platform

    virtual ::Scoreboard* tryGetScoreboard() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const&) = 0;
#else // @header-generator platform
    virtual ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const& playerId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerAbilities(::ActorUniqueID const&, ::LayeredAbilities const&) = 0;
#else // @header-generator platform
    virtual void setPlayerAbilities(::ActorUniqueID const& playerId, ::LayeredAbilities const& abilities) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendAllPlayerAbilities(::Player const&) = 0;
#else // @header-generator platform
    virtual void sendAllPlayerAbilities(::Player const& playerReference) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerAbilitiesManager>> getPlayerAbilitiesManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerAbilitiesManager> getPlayerAbilitiesManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsManager>> getPlayerPermissionsManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsManager> getPlayerPermissionsManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<PlayerPermissionsSynchroniser>> getPlayerPermissionsSynchroniser() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerPermissionsSynchroniser> getPlayerPermissionsSynchroniser() = 0;
#endif // @header-generator platform

    virtual ::MolangPackSettingsCache const* getMolangPackSettingsCache() const = 0;

    virtual ::Recipes& getRecipes() const = 0;

    virtual ::BlockReducer* getBlockReducer() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<TrimPatternRegistry> getTrimPatternRegistry() = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::TrimPatternRegistry const> getTrimPatternRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<const TrimPatternRegistry> getTrimPatternRegistry() const = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::TrimPatternRegistry> getTrimPatternRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<TrimMaterialRegistry> getTrimMaterialRegistry() = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::TrimMaterialRegistry const> getTrimMaterialRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::weak_ptr<const TrimMaterialRegistry> getTrimMaterialRegistry() const = 0;
#else // @header-generator platform
    virtual ::std::weak_ptr<::TrimMaterialRegistry> getTrimMaterialRegistry() = 0;
#endif // @header-generator platform

    virtual ::BlockType const& getRegisteredBorderBlock() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelChunkPerformanceTelemetry>> getLevelChunkPerformanceTelemetry() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelChunkPerformanceTelemetry> getLevelChunkPerformanceTelemetry() = 0;
#endif // @header-generator platform

    virtual bool use3DBiomeMaps() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const ChunkGenerationManager> getChunkGenerationManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager> getChunkGenerationManager() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<ChunkGenerationManager> getChunkGenerationManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::ChunkGenerationManager const> getChunkGenerationManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearAllGenerationRequests(::NetworkIdentifier const&, ::SubClientId) = 0;
#else // @header-generator platform
    virtual void clearAllGenerationRequests(::NetworkIdentifier const& player, ::SubClientId clientId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<MapDataManager>> getMapDataManager() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::MapDataManager> getMapDataManager() = 0;
#endif // @header-generator platform

    virtual ::Level* asLevel();

    virtual ::ClientLevel* asClientLevel();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<CameraRegistry> getCameraRegistry() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const CameraRegistry> getCameraRegistry() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<EntitySystems> getCameraSystems() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() = 0;
#endif // @header-generator platform

    virtual bool isClientSideGenerationEnabled() = 0;

    virtual bool blockNetworkIdsAreHashes() = 0;

    virtual ::ItemRegistryRef getItemRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> getBlockTypeRegistry() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry> getBlockTypeRegistry() const = 0;
#endif // @header-generator platform

    virtual void pauseAndFlushTaskGroups() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::ReflectionCtx const& cerealContext() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::cereal::ReflectionCtx& cerealContext() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::cereal::ReflectionCtx const& cerealContext() const = 0;
#endif // @header-generator platform

    virtual void subChunkTickAndSendRequests() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void digestServerBlockProperties(::StartGamePacket const&) = 0;
#else // @header-generator platform
    virtual void digestServerBlockProperties(::StartGamePacket const& packet) = 0;
#endif // @header-generator platform

    virtual ::PlayerDeathManager* _getPlayerDeathManager() = 0;

    virtual ::MapDataManager& _getMapDataManager() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TickTimeManager& _getTickTimeManager() = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::TickTimeManager const& _getTickTimeManager() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::TickTimeManager& _getTickTimeManager() = 0;
#endif // @header-generator platform

    virtual ::cereal::ReflectionCtx& _cerealContext() = 0;

    virtual void _onLowMemory() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addParticleEffect(::HashedString const&, ::Vec3 const&);

    MCNAPI ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType);
#else // @header-generator platform
    MCAPI void addParticleEffect(::HashedString const& effect, ::Vec3 const& emitterPosition);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientLevel* $asClientLevel();
#else // @header-generator platform
    MCFOLD ::ClientLevel* $asClientLevel();


#endif // @header-generator platform
    // NOLINTEND
};
