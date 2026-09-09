#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/chunk/ChunkKey.h"
#include "mc/world/level/chunk/LevelChunkGarbageCollector.h"
#include "mc/world/level/dimension/ActorChunkTransferEntry.h"
#include "mc/world/level/dimension/ActorReplication.h"
#include "mc/world/level/dimension/ActorUnloadedChunkTransferEntry.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/dimension/DimensionIdType.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/dimension/DirectionalLightSource.h"
#include "mc/world/level/dimension/IDimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/levelgen/ChunkGenSessionContext.h"
#include "mc/world/level/levelgen/v1/FeatureTerrainAdjustments.h"
#include "mc/world/level/levelgen/v2/providers/IntProvider.h"
#include "mc/world/level/saveddata/SavedData.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BiomeRegistry;
class Block;
class BlockEventDispatcher;
class BlockPos;
class BlockSource;
class ChunkBuildOrderPolicyBase;
class ChunkLoadActionList;
class ChunkSource;
class CircuitSystem;
class ClientDimensionExtensions;
class CompoundTag;
class DelayActionList;
class DimensionBrightnessRamp;
class EntityContext;
class GameEventDispatcher;
class IClientDimensionExtensions;
class ILevel;
class ILevelStorageManagerConnector;
class IStructureWireframeQueue;
class Level;
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkMetaData;
class Packet;
class Player;
class PostprocessingManager;
class RuntimeLightingManager;
class Seasons;
class SubChunkInterlocker;
class TaskGroup;
class TickingAreaList;
class Vec3;
class VillageManager;
class Weather;
class WorldGenerator;
struct ActorBlockSyncMessage;
struct BiomeIdType;
struct DimensionArguments;
struct UpdateSubChunkNetworkBlockInfo;
namespace Poi { class Manager; }
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class Dimension : public ::IDimension,
                  public ::EnableGetWeakRef<Dimension>,
                  public ::LevelListener,
                  public ::SavedData,
                  public ::Bedrock::EnableNonOwnerReferences,
                  public ::std::enable_shared_from_this<Dimension> {
public:
    // Dimension inner types declare
    // clang-format off
    struct DirectionalLightState;
    struct ChaoticDirectionalLightControls;
    // clang-format on

    // Dimension inner types define
    struct DirectionalLightState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                    mAngle;
        ::ll::TypedStorage<4, 4, float>                    mPerpendicularAngle;
        ::ll::TypedStorage<4, 4, float>                    mIntensityMultiplier;
        ::ll::TypedStorage<4, 4, ::DirectionalLightSource> mLightSource;
        ::ll::TypedStorage<1, 1, bool>                     mDisableLightSource;
        // NOLINTEND
    };

    struct ChaoticDirectionalLightControls {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMinFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMaxFlashDuration;
        ::ll::TypedStorage<4, 4, float> mMinFlashCooldown;
        ::ll::TypedStorage<4, 4, float> mMaxFlashCooldown;
        // NOLINTEND
    };

    using ChunkPosToActorListMap = std::unordered_map<ChunkPos, std::vector<std::unique_ptr<CompoundTag>>>;

    using DirectionalLightControls = std::variant<Dimension::ChaoticDirectionalLightControls>;

    using ActorTagList = std::vector<std::unique_ptr<CompoundTag>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ActorChunkTransferEntry>> mActorChunkTransferQueue;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkKey, std::vector<ActorUnloadedChunkTransferEntry>>> mActorUnloadedChunkTransferQueue;
    ::ll::TypedStorage<8, 8, ::ILevel&> mLevel;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange> mHeightRange;
    ::ll::TypedStorage<2, 2, short> mSeaLevel;
    ::ll::TypedStorage<1, 1, uchar> mMonsterSpawnBlockLightLimit;
    ::ll::TypedStorage<8, 32, ::IntProvider> mMonsterSpawnLightTest;
    ::ll::UntypedStorage<1, 16> mBlockSource;
    ::ll::TypedStorage<1, 1, bool> mHasWeather;
    ::ll::TypedStorage<4, 28, float[7]> mMobsPerChunkSurface;
    ::ll::TypedStorage<4, 28, float[7]> mMobsPerChunkUnderground;
    ::ll::TypedStorage<1, 2, ::BrightnessPair> mDefaultBrightness;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DimensionBrightnessRamp>> mDimensionBrightnessRamp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunkMetaData>> mTargetMetaData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RuntimeLightingManager>> mRuntimeLightingManager;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mTypeId;
    ::ll::TypedStorage<4, 4, ::DimensionType> mId;
    ::ll::UntypedStorage<2, 2> mRegistryId;
    ::ll::TypedStorage<1, 1, bool> mUltraWarm;
    ::ll::TypedStorage<1, 1, bool> mHasCeiling;
    ::ll::TypedStorage<1, 1, bool> mHasSkylight;
    ::ll::TypedStorage<1, 1, ::Brightness> mSkyDarken;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockEventDispatcher>> mDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mChunkGenTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PostprocessingManager>> mPostProcessingManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkInterlocker>> mSubChunkInterlocker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkSource>> mChunkSource;
    ::ll::TypedStorage<8, 8, ::WorldGenerator*> mWorldGenerator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Weather>> mWeather;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Seasons>> mSeasons;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameEventDispatcher>> mGameEventDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CircuitSystem>> mCircuitSystem;
    ::ll::TypedStorage<4, 4, int const> CIRCUIT_TICK_RATE;
    ::ll::TypedStorage<4, 4, int> mCircuitSystemTickRate;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, WeakEntityRef>> mActorIDEntityIDMap;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>> mDisplayEntities;
    ::ll::TypedStorage<8, 184, ::FeatureTerrainAdjustments> mFeatureTerrainAdjustments;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::vector<std::unique_ptr<CompoundTag>>>> mLimboEntities;
    ::ll::TypedStorage<8, 24, std::set<ActorUniqueID>> mEntitiesToMoveChunks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TickingAreaList>> mTickingAreaList;
    ::ll::TypedStorage<8, 632, ::LevelChunkGarbageCollector> mLevelChunkGarbageCollector;
    ::ll::TypedStorage<8, 24, std::set<ActorUniqueID>> mWitherIDs;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelChunkBuilderData>> mLevelChunkBuilderData;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPruneTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastStructurePruneTime;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBuildOrderPolicyBase>> mChunkBuildOrderPolicy;
    ::ll::TypedStorage<8, 40, ::ChunkGenSessionContext> mChunkGenSessionContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VillageManager>> mVillageManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Poi::Manager>> mPoiManager;
    ::ll::TypedStorage<8, 24, std::vector<NetworkIdentifierWithSubId>> mTemporaryPlayerIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkLoadActionList>> mChunkLoadActionList;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DelayActionList>> mDelayActionList;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubChunkPos, UpdateSubChunkBlocksChangedInfo>> mBlocksChangedBySubChunkMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IClientDimensionExtensions>> mClientExtensions;
    ::ll::TypedStorage<8, 88, ::ActorReplication> mActorReplication;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>> mPlayersToReplicate;
    ::ll::TypedStorage<1, 1, bool> mRunChunkGenWatchDog;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Dimension();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Dimension();

    virtual bool isNaturalDimension() const;

    virtual ::DimensionType getDimensionId() const;

    virtual void sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*);

    virtual void sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*);

    virtual void flushLevelChunkGarbageCollector();

    virtual void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    virtual ::BiomeRegistry const& getBiomeRegistry() const;

    virtual ::BiomeRegistry& getBiomeRegistry();

    virtual void forEachPlayer(::brstd::function_ref<bool (Player&)>) const;

    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const;

    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const;

    virtual void buildPlayersForPositionPacket(::BlockPos const&, ::Player const*, std::vector<NetworkIdentifierWithSubId>&) const;

    virtual void updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;

    virtual void init(::br::worldgen::StructureSetRegistry const&);

    virtual void tick();

    virtual void tickRedstone();

    virtual std::unique_ptr<WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&) = 0;

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) = 0;

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) = 0;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const = 0;

    virtual bool isValidSpawn(int, int) const;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const&, float) const;

    virtual short getCloudHeight() const;

    virtual ::BiomeIdType getDefaultBiomeId() const;

    virtual bool mayRespawnViaBed() const;

    virtual ::BlockPos getSpawnPos() const;

    virtual int getSpawnYPosition() const;

    virtual bool showSky() const;

    virtual void setDimensionDirectionalLightControls(std::variant<Dimension::ChaoticDirectionalLightControls> const&);

    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float) const;

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    virtual void deserialize(::CompoundTag const&);

    virtual void serialize(::CompoundTag&) const;

    virtual void sendBroadcast(::Packet const&, ::Player*);

    virtual bool is2DPositionRelevantForPlayer(::BlockPos const&, ::Player&) const;

    virtual bool isActorRelevantForPlayer(::Player&, ::Actor const&) const;

    virtual void onBlockEvent(::BlockSource&, int, int, int, int, int);

    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    virtual void onLevelDestruction(std::string const&);

    virtual ::DimensionBrightnessRamp const& getBrightnessRamp() const;

    virtual std::vector<std::string> const getStructuresFromChunkRegistry(::Vec3 const&) const;

    virtual std::optional<std::string> const getStructureFromStructureRegistry(::Vec3 const&) const;

    virtual void startLeaveGame();

    virtual float getTimeOfDay(int, float) const;

    virtual std::unique_ptr<ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) = 0;

    virtual std::unique_ptr<ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Dimension(::DimensionArguments&&);

    MCNAPI void _addActorUnloadedChunkTransferToQueue(
        ::ChunkPos const&,
        ::ChunkPos const&,
        ::DimensionType,
        std::string&,
        std::unique_ptr<CompoundTag>
    );

    MCNAPI void _completeEntityTransfer(::OwnerPtr<EntityContext>);

    MCNAPI ::BlockSource _createFixupBlockSource(::ChunkSource&);

    MCNAPI void _tickEntityChunkMoves();

    MCNAPI void addPlayerToReplication(::WeakEntityRef const&);

    MCNAPI void addWither(::ActorUniqueID const&);

    MCNAPI void clearPlayerReplicationList();

    MCNAPI float distanceToNearestPlayerSqr2D(::Vec3);

    MCNAPI ::Player* fetchAnyInteractablePlayer(::Vec3 const&, float) const;

    MCNAPI ::Player* fetchNearestAttackablePlayer(::Actor&, float) const;

    MCNAPI ::Player* fetchNearestAttackablePlayer(::BlockPos, float, ::Actor*) const;

    MCNAPI ::Player* fetchNearestInteractablePlayer(::Actor&, float) const;

    MCNAPI ::Player* fetchNearestInteractablePlayer(::Vec3 const&, float) const;

    MCNAPI ::Player* fetchNearestPlayer(::Vec3 const&, float, bool, ::brstd::function_ref<bool(const Player&)>) const;

    MCNAPI ::Player* findPlayer(::brstd::function_ref<bool(const Player&)>) const;

    MCNAPI void flagEntityforChunkMove(::Actor&);

    MCNAPI void flushRunTimeLighting();

    MCNAPI ::BlockEventDispatcher& getBlockEventDispatcher();

    MCNAPI ::ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();

    MCNAPI ::gsl::not_null<ChunkLoadActionList*> getChunkLoadActionList();

    MCNAPI ::ChunkSource& getChunkSource() const;

    MCNAPI ::CircuitSystem& getCircuitSystem();

    MCNAPI ::gsl::not_null<DelayActionList*> getDelayActionList();

    MCNAPI std::vector<WeakEntityRef>& getDisplayEntities();

    MCNAPI std::unordered_map<ActorUniqueID, WeakEntityRef>& getEntityIdMap();

    MCNAPI std::unordered_map<ActorUniqueID, WeakEntityRef> const& getEntityIdMapConst() const;

    MCNAPI ::FeatureTerrainAdjustments& getFeatureTerrainAdjustments();

    MCNAPI ::GameEventDispatcher* getGameEventDispatcher() const;

    MCNAPI short getHeight() const;

    MCNAPI ushort getHeightInSubchunks() const;

    MCNAPI ::DimensionHeightRange const& getHeightRange() const;

    MCNAPI ::Level& getLevel() const;

    MCNAPI ::Level const& getLevelConst() const;

    MCNAPI std::string getLocalizationKey() const;

    MCNAPI short getMinHeight() const;

    MCNAPI uchar getMonsterSpawnBlockLightLimit() const;

    MCNAPI ::IntProvider getMonsterSpawnLightTest() const;

    MCNAPI float getMoonBrightness() const;

    MCNAPI int getMoonPhase() const;

    MCNAPI float getPopCap(int, bool) const;

    MCNAPI ::Seasons& getSeasons();

    MCNAPI float getSkyDarken(float) const;

    MCNAPI ::Brightness getSkyDarken() const;

    MCNAPI float getSunAngle(float) const;

    MCNAPI std::shared_ptr<const LevelChunkMetaData> getTargetMetaData();

    MCNAPI ::TickingAreaList& getTickingAreas();

    MCNAPI ::TickingAreaList const& getTickingAreasConst() const;

    MCNAPI float getTimeOfDay(float) const;

    MCNAPI std::string const& getTypeId() const;

    MCNAPI std::unique_ptr<VillageManager> const& getVillageManager() const;

    MCNAPI ::WeakRef<Dimension> getWeakRef();

    MCNAPI ::Weather& getWeather() const;

    MCNAPI ::WorldGenerator* getWorldGenerator() const;

    MCNAPI bool hasAddedWither() const;

    MCNAPI bool hasCeiling() const;

    MCNAPI bool hasSkylight() const;

    MCNAPI bool isBrightOutside() const;

    MCNAPI bool isChunkKnown(::ChunkPos const&) const;

    MCNAPI bool const isClientSideGenerationEnabled() const;

    MCNAPI bool isHeightWithinRange(short const&) const;

    MCNAPI bool isLeaveGameDone();

    MCNAPI bool isMoonVisible() const;

    MCNAPI bool isRedstoneTick();

    MCNAPI bool isSubChunkHeightWithinRange(short const&) const;

    MCNAPI bool isUltraWarm() const;

    MCNAPI void neighborAwareChunkUpgrade(::ChunkSource&, ::LevelChunk&);

    MCNAPI void onStaticTickingAreaAdded(std::string const&);

    MCNAPI void pauseAndFlushTaskGroups();

    MCNAPI void processPlayerReplication();

    MCNAPI void registerDisplayEntity(::WeakRef<EntityContext>);

    MCNAPI void registerEntity(::ActorUniqueID const&, ::WeakRef<EntityContext>);

    MCNAPI void removeActorByID(::ActorUniqueID const&);

    MCNAPI void removeWither(::ActorUniqueID const&);

    MCNAPI void sendPacketToClients(::Packet const&, std::vector<NetworkIdentifierWithSubId>);

    MCNAPI void setCeiling(bool);

    MCNAPI void setRunChunkGenWatchDog(bool);

    MCNAPI void setSkylight(bool);

    MCNAPI void setUltraWarm(bool);

    MCNAPI void setWorldGenerator(::WorldGenerator*);

    MCNAPI void transferEntity(::ChunkPos const&, ::Vec3 const&, std::unique_ptr<CompoundTag>);

    MCNAPI void tryLoadLimboEntities(::ChunkPos const&);

    MCNAPI void unregisterDisplayEntity(::WeakRef<EntityContext>);

    MCNAPI void unregisterEntity(::ActorUniqueID const&);

    MCNAPI void updateBlockLight(::BlockPos const&, ::Brightness, ::Brightness, ::Brightness, ::Brightness, bool);

    MCNAPI void visitExtensions(::brstd::function_ref<void(ClientDimensionExtensions&)>);

    MCNAPI void visitStructureWireframe(::brstd::function_ref<void(IStructureWireframeQueue&)>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LimboEntitiesVersion const& CurrentLimboEntitiesVersion();

    MCNAPI static uint const& LOW_CPU_PACKET_BLOCK_LIMIT();

    MCNAPI static ::std::add_lvalue_reference_t<float const[8]> MOON_BRIGHTNESS_PER_PHASE();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& STRUCTURE_PRUNE_INTERVAL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DimensionArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isNaturalDimension() const;

    MCNAPI ::DimensionType $getDimensionId() const;

    MCNAPI void $sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*);

    MCNAPI void $sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*);

    MCNAPI void $flushLevelChunkGarbageCollector();

    MCNAPI void $initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI ::BiomeRegistry const& $getBiomeRegistry() const;

    MCNAPI ::BiomeRegistry& $getBiomeRegistry();

    MCNAPI void $forEachPlayer(::brstd::function_ref<bool(Player&)>) const;

    MCNAPI ::Actor* $fetchEntity(::ActorUniqueID, bool) const;

    MCNAPI ::BlockSource& $getBlockSourceFromMainChunkSource() const;

    MCNAPI void
    $buildPlayersForPositionPacket(::BlockPos const&, ::Player const*, std::vector<NetworkIdentifierWithSubId>&) const;

    MCNAPI void $updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;

    MCNAPI void $init(::br::worldgen::StructureSetRegistry const&);

    MCNAPI void $tick();

    MCNAPI void $tickRedstone();

    MCNAPI bool $isValidSpawn(int, int) const;

    MCNAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const&, float) const;

    MCNAPI short $getCloudHeight() const;

    MCNAPI ::BiomeIdType $getDefaultBiomeId() const;

    MCNAPI bool $mayRespawnViaBed() const;

    MCNAPI ::BlockPos $getSpawnPos() const;

    MCNAPI int $getSpawnYPosition() const;

    MCNAPI bool $showSky() const;

    MCNAPI void $setDimensionDirectionalLightControls(std::variant<Dimension::ChaoticDirectionalLightControls> const&);

    MCNAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float) const;

    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $deserialize(::CompoundTag const&);

    MCNAPI void $serialize(::CompoundTag&) const;

    MCNAPI void $sendBroadcast(::Packet const&, ::Player*);

    MCNAPI bool $is2DPositionRelevantForPlayer(::BlockPos const&, ::Player&) const;

    MCNAPI bool $isActorRelevantForPlayer(::Player&, ::Actor const&) const;

    MCNAPI void $onBlockEvent(::BlockSource&, int, int, int, int, int);

    MCNAPI void $onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
    );

    MCNAPI void $onLevelDestruction(std::string const&);

    MCNAPI ::DimensionBrightnessRamp const& $getBrightnessRamp() const;

    MCNAPI std::vector<std::string> const $getStructuresFromChunkRegistry(::Vec3 const&) const;

    MCNAPI std::optional<std::string> const $getStructureFromStructureRegistry(::Vec3 const&) const;

    MCNAPI void $startLeaveGame();

    MCNAPI float $getTimeOfDay(int, float) const;

    MCNAPI std::unique_ptr<ChunkBuildOrderPolicyBase> $_createChunkBuildOrderPolicy();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
