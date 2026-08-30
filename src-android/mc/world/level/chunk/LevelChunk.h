#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/ActorLink.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkLocalHeight.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/BiomeChunkState.h"
#include "mc/world/level/chunk/ChunkCachedDataState.h"
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/ColumnCachedData.h"
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/LevelChunkBiomes.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#include "mc/world/level/chunk/LevelChunkDataField.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/LevelChunkNeighbor.h"
#include "mc/world/level/chunk/LevelChunkTag.h"
#include "mc/world/level/chunk/LevelChunkVolumeData.h"
#include "mc/world/level/chunk/SubChunk.h"
#include "mc/world/level/chunk/SubChunkInitMode.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/level_chunk_ticking/Entity.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"
#include "mc/world/level/levelgen/ChunkGenContext.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v1/HardcodedSpawnAreaType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Biome;
class BiomeRegistry;
class Block;
class BlockActor;
class BlockChangeContext;
class BlockPalette;
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class ChunkBlockPos;
class ChunkSource;
class ChunkViewSource;
class Dimension;
class DimensionHeightRange;
class GameEventListenerRegistry;
class HeightmapWrapper;
class IDataInput;
class IDataOutput;
class ILevel;
class LevelChunkBlockActorAccessToken;
class LevelChunkBuilderData;
class LevelChunkMetaData;
class MobSpawnerData;
class Random;
class SaveContext;
class StringByteInput;
class StringByteOutput;
class SubChunkPos;
class Vec3;
class Weather;
template<typename T0> class buffer_span_mut;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct BlockID;
struct Brightness;
struct ChunkGenSessionContext;
struct DeserializationChanges;
struct LevelChunkMemoryEstimateData;
struct LevelChunkPhase1Deleter;
struct NibblePair;
namespace Bedrock { class LevelChunkTimings; }
namespace LevelChunkTicking { struct Registry; }
namespace br::spawn { struct State; }
namespace br::worldgen { struct SpawnerData; }
// clang-format on

class LevelChunk {
public:
    // LevelChunk inner types declare
    // clang-format off
    struct Telemetry;
    struct SpawningArea;
    class Neighbors;
    // clang-format on

    // LevelChunk inner types define
    enum class Finalization : int {
        NeedsInstaticking = 0,
        NeedsPopulation   = 1,
        Done              = 2,
    };

    enum class DeserializeEntityResult : int {
        FailedToLoadActor  = 0,
        FailedToAddToLevel = 1,
        Succeeded          = 2,
    };

    struct Telemetry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWasStored;
        ::ll::TypedStorage<1, 1, bool> mWasGenerated;
        ::ll::TypedStorage<1, 1, bool> mWasRequestedInsideTickRange;
        ::ll::TypedStorage<1, 1, bool> mWasLoadedInsideTickRange;
        // NOLINTEND
    };

    struct SpawningArea {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::BoundingBox>           aabb;
        ::ll::TypedStorage<1, 1, ::HardcodedSpawnAreaType> type;
        // NOLINTEND

    public:
        // prevent constructor by default
        SpawningArea& operator=(SpawningArea const&);
        SpawningArea();
    };

    class Neighbors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mNeighbors;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Neighbors();

        MCNAPI explicit Neighbors(::StringByteInput&);

        MCNAPI bool hasNeighbor(::LevelChunkNeighbor) const;

        MCNAPI bool isSurrounded() const;

        MCNAPI void serialize(::StringByteOutput&) const;

        MCNAPI void setNeighbor(::LevelChunkNeighbor, bool);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static std::array<std::pair<LevelChunkNeighbor, ChunkPos>, 8> const& sOffsetMap();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::StringByteInput&);
        // NOLINTEND
    };

    using BlockActorVector = std::vector<std::shared_ptr<BlockActor>>;

    using BBorder = bool;

    using BiomeSmallVector = ::Bedrock::small_vector<gsl::not_null<const Biome*>, 4>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mBlockEntityAccessLock;
    ::ll::TypedStorage<8, 8, ::ILevel&> mLevel;
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mPosition;
    ::ll::TypedStorage<1, 1, bool> mLightingFixupDone;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mLightingTaskActive;
    ::ll::TypedStorage<1, 1, bool> mReadOnly;
    ::ll::TypedStorage<8, 8, ::ChunkSource*> mGenerator;
    ::ll::TypedStorage<4, 4, ::LevelChunkTicking::Entity> mTmpTickingEntity;
    ::ll::TypedStorage<1, 2, std::optional<LevelChunkFormat>> mLoadedFormat;
    ::ll::TypedStorage<1, 1, bool> mHadSerializedEntities;
    ::ll::TypedStorage<8, 24, std::string> mSerializedEntitiesBuffer;
    ::ll::TypedStorage<8, 24, std::string> mFailedSerializedEntitiesBuffer;
    ::ll::TypedStorage<8, 24, std::vector<ActorLink>> mUnresolvedActorLinks;
    ::ll::TypedStorage<1, 1, std::atomic<ChunkState>> mLoadState;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsCurrentLoadStateIndeterminate;
    ::ll::TypedStorage<1, 1, ::ChunkTerrainDataState> mTerrainDataState;
    ::ll::TypedStorage<1, 1, ::ChunkDebugDisplaySavedState> mDebugDisplaySavedState;
    ::ll::TypedStorage<1, 1, ::ChunkCachedDataState> mCachedDataState;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mCachedDataStateSpinLock;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mClientRequestHeightmapAdjustSpinLock;
    ::ll::TypedStorage<8, 8, ::Tick> mLastTick;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTickingQueue>> mTickQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTickingQueue>> mRandomTickQueue;
    ::ll::TypedStorage<8, 24, std::vector<SubChunk>> mSubChunks;
    ::ll::UntypedStorage<8, 680> mBiomes;
    ::ll::TypedStorage<4, 2048, std::array<ColumnCachedData, 256>> mCachedData;
    ::ll::TypedStorage<2, 512, std::array<ChunkLocalHeight, 256>> mHeightmap;
    ::ll::TypedStorage<2, 512, std::array<ChunkLocalHeight, 256>> mRenderHeightmap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::vector<short>>> mPreWorldGenHeightmap;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight> mNonAirMaxHeight;
    ::ll::TypedStorage<8, 40, std::unordered_map<BiomeIdType, BiomeChunkState>> mBiomeStates;
    ::ll::TypedStorage<1, 1, bool> mHasCachedTemperatureNoise;
    ::ll::TypedStorage<1, 256, std::array<bool, 256>> mBorderBlockMap;
    ::ll::TypedStorage<1, 1, bool> mIsRedstoneLoaded;
    ::ll::TypedStorage<1, 1, bool> mOwnedByTickingThread;
    ::ll::TypedStorage<1, 1, bool> mUse3DBiomeMaps;
    ::ll::TypedStorage<1, 1, bool> mLevelChunkHas3dBiomeTag;
    ::ll::TypedStorage<4, 4, int> mCurrentInstatick;
    ::ll::TypedStorage<4, 4, ::LevelChunk::Finalization> mFinalized;
    ::ll::TypedStorage<1, 4, ::LevelChunk::Telemetry> mTelemetry;
    ::ll::UntypedStorage<8, 112> mChunkGenContext;
    ::ll::UntypedStorage<4, 0> mFullChunkDirtyTicksCounters;
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter> mChunkActorsDirtyTicksCounter;
    ::ll::TypedStorage<2, 512, std::array<ChunkLocalHeight, 256>> mRainHeights;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>> mEntities;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mRemovedActorStorageKeys;
    ::ll::TypedStorage<8, 136, ::LevelChunkBlockActorStorage> mBlockEntities;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<BlockActor>>> mPreservedBlockEntities;
    ::ll::UntypedStorage<8, 24> mVolumes;
    ::ll::TypedStorage<1, 2, ::BrightnessPair> mDefaultBrightness;
    ::ll::TypedStorage<8, 24, std::vector<LevelChunk::SpawningArea>> mSpawningAreas;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastNetworkLightingTime;
    ::ll::TypedStorage<8, 8, ulong> mLoadedMetaDataHash;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunkMetaData>> mMetaData;
    ::ll::UntypedStorage<4, 16> mChunkInterpolants;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mGenerationSeed;
    ::ll::TypedStorage<1, 1, bool> mbChunkHasConverterTag;
    ::ll::TypedStorage<1, 1, ::LevelChunk::Neighbors> mSavedNeighbors;
    ::ll::TypedStorage<1, 1, bool> mClientNeedsToRequestSubChunks;
    ::ll::TypedStorage<1, 1, bool> mLevelChunkHasHadOriginalLighting;
    ::ll::TypedStorage<1, 1, bool> mGeneratedPreCavesAndCliffsBlending;
    ::ll::TypedStorage<1, 1, bool> mOnChunkLoadedCalled;
    ::ll::TypedStorage<1, 1, bool> mAllSerializedEntitiesLoaded;
    ::ll::TypedStorage<8, 24, std::string> mOutOfBoundsBlockEntitiesBuffer;
    ::ll::TypedStorage<1, 1, bool> mSaveNonActorDataIfDirty;
    ::ll::TypedStorage<1, 1, bool> mSaveIfNeverSaved;
    ::ll::TypedStorage<1, 1, bool> mHasSubChunksToPrune;
    ::ll::TypedStorage<1, 1, bool> mHaveSubChunksBeenPruned;
    ::ll::TypedStorage<1, 1, bool> mShouldShiftUpFlatWorldSubChunks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::vector<SubChunk>>> mSubChunksToPruneOutsideRange;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Bedrock::LevelChunkTimings>>> mChunkTimings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GameEventListenerRegistry>> mGameEventListenerRegistry;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mSnowRandomValue;
    ::ll::TypedStorage<1, 1, bool> mIsClientGenerated;
    ::ll::TypedStorage<1, 1, bool> mWasClientGenerated;
    ::ll::TypedStorage<1, 1, bool> mIsEmptyClientChunk;
    ::ll::TypedStorage<1, 1, bool> mActorStorageUpdatedAfterCheckingForReplacementData;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsTransient;
    ::ll::TypedStorage<1, 1, bool> mDidSaveJigsawStructureBlueprints;
    ::ll::TypedStorage<8, 856, ::LevelChunkVolumeData> mLevelChunkVolumeData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelChunk(
        ::Dimension&,
        ::ChunkPos const&,
        bool,
        ::SubChunkInitMode,
        bool,
        ::LevelChunkBlockActorStorage::TrackingMode
    );

    MCNAPI void _addEntityToVolumes(::gsl::not_null<Actor*>);

    MCNAPI void _changeTerrainDataState(::ChunkTerrainDataState, ::ChunkTerrainDataState);

    MCNAPI void _checkAndInferMetaDataAfterDeserialization();

    MCNAPI void _deserializeBiomes(::IDataInput&, ::BiomeRegistry const&, bool);

    MCNAPI void _deserializeBlockEntities(::IDataInput&, ::LevelChunkBlockActorStorage&);

    MCNAPI bool _deserializeSubChunk(short, ::StringByteInput&);

    MCNAPI void _fixupCorruptedBlockActors(::LevelChunkBlockActorStorage&, ::buffer_span_mut<SubChunk>) const;

    MCNAPI ::ChunkTerrainDataState _getTerrainDataState() const;

    MCNAPI void _lightingCallbacks(::ChunkBlockPos const&, ::Block const&, ::Block const&, ::BlockSource*);

    MCNAPI void _onRandomTickingQueueChanged();

    MCNAPI void _onTickingQueueChanged();

    MCNAPI void _placeBlockEntity(std::shared_ptr<BlockActor>);

    MCNAPI bool _recalcHeight(::ChunkBlockPos const&, ::BlockSource*);

    MCNAPI void _set2DBiomesFrom3D(::IDataInput&);

    MCNAPI void _setBiome(::Biome const&, ::ChunkBlockPos const&, bool);

    MCNAPI void _setGenerator(::ChunkSource*);

    MCNAPI void addEntity(::WeakEntityRef);

    MCNAPI void addHardcodedSpawningArea(::BoundingBox const&, ::HardcodedSpawnAreaType);

    MCNAPI void addSubChunkBlockEntitiesToLevelChunk(::LevelChunkBlockActorStorage&);

    MCNAPI bool applySeasonsPostProcess(::BlockSource&);

    MCNAPI void changeState(::ChunkState, ::ChunkState);

    MCNAPI bool checkSeasonsPostProcessDirty() const;

    MCNAPI bool chunkHasConvertedDataTag() const;

    MCNAPI void clearBlockEntitiesInSubChunk(schar, ::LevelChunkBlockActorStorage const*, ::BlockSource*);

    MCNAPI void clearDirtyTickCounters();

    MCNAPI void clearPreservedEntities();

    MCNAPI void clientSubChunkRequestGenerateLightingForSubChunk(::ChunkViewSource&, short);

    MCNAPI void deserializeBiomes(::IDataInput&, bool);

    MCNAPI void deserializeBlockEntities(::IDataInput&);

    MCNAPI void deserializeBorderBlocks(::IDataInput&);

    MCNAPI void deserializeFinalization(::IDataInput&);

    MCNAPI bool deserializeKey(std::string_view, std::string_view);

    MCNAPI void deserializeLegacyBiomes(::IDataInput&);

    MCNAPI void deserializeLoadedVersion(::IDataInput&);

    MCNAPI void deserializeMetaDataHash(::IDataInput&);

    MCNAPI void deserializeSubChunk(::IDataInput&, short, std::optional<DeserializationChanges*>);

    MCNAPI void deserializeSubChunk(uchar, ::IDataInput&, std::optional<schar>, std::optional<DeserializationChanges*>);

    MCNAPI void deserializeSubChunkBlockEntities(::IDataInput&, ::LevelChunkBlockActorStorage&);

    MCNAPI bool doesClientNeedToRequestSubchunks() const;

    MCNAPI void fetchBiomes(::Bedrock::small_vector_base<gsl::not_null<const Biome*>>&) const;

    MCNAPI void fetchBlocks(::BlockPos const&, ::BlockVolume&) const;

    MCNAPI void finalizeDeserialization();

    MCNAPI void finalizePostProcessing();

    MCNAPI void finalizeSubChunkDeserialization(::LevelChunkBlockActorStorage&, ::buffer_span_mut<SubChunk>);

    MCNAPI bool generateOriginalLighting(::ChunkViewSource&, bool);

    MCNAPI ::ChunkLocalHeight getAboveTopSolidBlock(::ChunkBlockPos const&, bool, bool, bool) const;

    MCNAPI void getActors(::ActorDefinitionIdentifier const&, ::AABB const&, std::vector<Actor*>&) const;

    MCNAPI ::Biome const& getBiome(::ChunkBlockPos const&) const;

    MCNAPI std::unique_ptr<const Bedrock::Threading::SharedLock<std::shared_timed_mutex>> getBiomesReadLock();

    MCNAPI ::Block const& getBlock(::ChunkBlockPos const&) const;

    MCNAPI ::LevelChunkBlockActorStorage const& getBlockEntities() const;

    MCNAPI ::BlockActor* getBlockEntity(::ChunkBlockPos const&);

    MCNAPI bool getBorder(::ChunkBlockPos const&) const;

    MCNAPI ::BrightnessPair getBrightness(::ChunkBlockPos const&) const;

    MCNAPI schar getCachedTemperatureNoise(::ChunkBlockPos const&);

    MCNAPI std::vector<WeakEntityRef>& getChunkEntities();

    MCNAPI ::Dimension& getDimension() const;

    MCNAPI std::array<ChunkLocalHeight, 256> getEntireLightingHeightMap() const;

    MCNAPI void getEntities(::ActorType, ::AABB const&, std::vector<Actor*>&, bool) const;

    MCNAPI void getEntities(
        ::gsl::span<gsl::not_null<const Actor*>>,
        ::AABB const&,
        std::vector<Actor*>&,
        bool,
        std::function<bool(Actor*)>
    ) const;

    MCNAPI ::Actor* getEntity(::ActorUniqueID const&) const;

    MCNAPI ::Block const& getExtraBlock(::ChunkBlockPos const&) const;

    MCNAPI ::LevelChunk::Finalization getFinalized() const;

    MCNAPI ::GameEventListenerRegistry& getGameEventListenerRegistry() const;

    MCNAPI ::ChunkSource* getGenerator() const;

    MCNAPI int getGrassColor(::ChunkBlockPos const&) const;

    MCNAPI ::DimensionHeightRange const& getHeightRange() const;

    MCNAPI short getHeightmap(::ChunkBlockPos const&) const;

    MCNAPI ::ChunkLocalHeight getHeightmapLocal(::ChunkBlockPos const&) const;

    MCNAPI short getHighestNonAirSubChunkIndex() const;

    MCNAPI float getInterpolant(ulong, ulong) const;

    MCNAPI
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
        getLastNetworkLightingTime() const;

    MCNAPI ::Tick const& getLastTick() const;

    MCNAPI ::ILevel& getLevel() const;

    MCNAPI ::LevelChunkVolumeData& getLevelChunkVolumeData();

    MCNAPI std::optional<LevelChunkFormat> getLoadedFormat() const;

    MCNAPI ::BlockPos const& getMax() const;

    MCNAPI short getMaxAllocatedY() const;

    MCNAPI ulong getMaxSubChunkCnt() const;

    MCNAPI short getMaxY() const;

    MCNAPI short getMaxYIndex() const;

    MCNAPI std::shared_ptr<const LevelChunkMetaData> getMetaData() const;

    MCNAPI std::shared_ptr<LevelChunkMetaData> getMetaDataCopy() const;

    MCNAPI ::BlockPos const& getMin() const;

    MCNAPI short getMinY() const;

    MCNAPI short getMinYIndex() const;

    MCNAPI short getNonAirMaxHeight() const;

    MCNAPI ::ChunkPos const& getPosition() const;

    MCNAPI ::ChunkLocalHeight getPreWorldGenHeightmap(::ChunkBlockPos const&) const;

    MCNAPI ::HeightmapWrapper getPreWorldGenHeightmap() const;

    MCNAPI std::vector<std::shared_ptr<BlockActor>> const& getPreservedBlockEntities() const;

    MCNAPI ::BlockTickingQueue& getRandomTickQueue();

    MCNAPI ::Brightness getRawBrightness(::ChunkBlockPos const&, ::Brightness) const;

    MCNAPI ::ChunkState getState() const;

    MCNAPI ::ChunkState getState(::std::memory_order) const;

    MCNAPI ::SubChunk const* getSubChunk(short) const;

    MCNAPI ::SubChunk* getSubChunk(short);

    MCNAPI short getSubChunkAbsoluteIndexFromSubChunkIndex(ulong) const;

    MCNAPI int getSubChunkCountUpToHighestNonAirBlock() const;

    MCNAPI ulong getSubChunkIndexFromAbsoluteIndex(short) const;

    MCNAPI ::buffer_span_mut<SubChunk> getSubChunks(short, short);

    MCNAPI ::Biome const& getSurfaceBiome(::BlockPos const&) const;

    MCNAPI ::Biome const& getSurfaceBiome(::ChunkBlockPos) const;

    MCNAPI ::BlockTickingQueue const& getTickQueue() const;

    MCNAPI ::BlockTickingQueue& getTickQueue();

    MCNAPI ::BlockPos const getTopRainBlockPos(::ChunkBlockPos const&);

    MCNAPI ::ChunkLocalHeight getTotalAllocatedHeight() const;

    MCNAPI int getWaterColor(::ChunkBlockPos const&) const;

    MCNAPI void handleHeightmapDataFromSubChunkPacket(
        short,
        ::SubChunkPacketPayload::SubChunkPacketData const&,
        std::optional<DeserializationChanges*>
    );

    MCNAPI bool hasAnyBiomeStates() const;

    MCNAPI bool hasAnyBlockMatchingFilter(std::function<bool(const Block&)> const&) const;

    MCNAPI bool hasBlockEntitiesToSerialize() const;

    MCNAPI bool hasEntitiesPendingToLoad() const;

    MCNAPI bool hasEntitiesToSerialize() const;

    MCNAPI bool hasEntity(::WeakEntityRef) const;

    MCNAPI bool isAnyBlockEntityDirty() const;

    MCNAPI bool isBlockInChunk(::BlockPos const&) const;

    MCNAPI bool isClientGeneratedChunk() const;

    MCNAPI bool isEmptyClientChunk() const;

    MCNAPI bool isFullyLoaded() const;

    MCNAPI bool isNonActorDataDirty() const;

    MCNAPI bool isOwnedByTickingThread() const;

    MCNAPI bool isReadOnly() const;

    MCNAPI bool isSkyLit(::ChunkBlockPos const&) const;

    MCNAPI bool isSubChunkHeightWithinRange(short const&) const;

    MCNAPI bool isTransient() const;

    MCNAPI bool levelChunkHad3dBiomeTagOnLastDeserialize() const;

    MCNAPI bool levelChunkHasHadOriginalLighting() const;

    MCNAPI void markForTickingThisFrame(::LevelChunkTicking::Registry&);

    MCNAPI void markJigsawStructureBlueprintsSaved();

    MCNAPI void markSaveIfNeverSaved();

    MCNAPI void markSaveNonActorDataIfDirty();

    MCNAPI bool metaDataDirty() const;

    MCNAPI void moveLevelChunk(::LevelChunk&&, ulong);

    MCNAPI bool needsUpgradeFix() const;

    MCNAPI bool needsWallFix() const;

    MCNAPI bool nonActorDataNeedsSaving(int, int) const;

    MCNAPI void onBlockEntityChanged();

    MCNAPI void onDiscarded();

    MCNAPI void onTickingStarted();

    MCNAPI ::LevelChunk& operator=(::LevelChunk&&);

    MCNAPI void placeCallbacks(
        ::ChunkBlockPos const&,
        ::Block const&,
        ::Block const&,
        ::BlockSource*,
        std::shared_ptr<BlockActor>,
        ::BlockChangeContext const&
    );

    MCNAPI void populateHeightMapDataForSubChunkPacket(short, ::SubChunkPacketPayload::SubChunkPacketData&) const;

    MCNAPI void pruneBiomesAboveHeightmap();

    MCNAPI void pruneBiomesSubChunk3D(ushort);

    MCNAPI void recalculateChunkSkyLight();

    MCNAPI void recalculateSubchunkHashes(bool);

    MCNAPI void recomputeHeightMap(bool);

    MCNAPI std::shared_ptr<BlockActor> removeBlockEntity(::BlockPos const&);

    MCNAPI bool removeEntityFromChunk(::WeakEntityRef);

    MCNAPI bool removeEntityFromWorld(::WeakEntityRef);

    MCNAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType);

    MCNAPI void resetLightingTaskActive();

    MCNAPI void serializeBiomeMaps(::IDataOutput&) const;

    MCNAPI void serializeBiomeStates(::IDataOutput&) const;

    MCNAPI void serializeBiomes(::IDataOutput&) const;

    MCNAPI void serializeBlockEntities(::IDataOutput&, ::SaveContext const&) const;

    MCNAPI void serializeBlockEntitiesForSubChunk(::IDataOutput&, ::SubChunkPos const&, ::SaveContext const&) const;

    MCNAPI bool serializeBorderBlocks(::IDataOutput&) const;

    MCNAPI void serializeEntities(
        std::string&,
        bool const,
        std::function<void(const std::string&)>,
        std::function<void(const std::string&)>,
        std::function<void(const std::string&)>
    ) const;

    MCNAPI void serializeEntityRemovals(std::function<void(const std::string&)>);

    MCNAPI void serializeFinalization(::IDataOutput&) const;

    MCNAPI void serializeMetaDataHash(::IDataOutput&) const;

    MCNAPI void serializeRandomTicks(::IDataOutput&) const;

    MCNAPI void serializeTicks(::IDataOutput&) const;

    MCNAPI void setAllBlockTypeIDAndData(::buffer_span<BlockID>, ::buffer_span<NibblePair>);

    MCNAPI void setBiome2d(::Biome const&, ::ChunkBlockPos const&);

    MCNAPI void setBiomeFromVolume(::ChunkVolume::VolumeOf<Biome> const&);

    MCNAPI ::Block const& setBlock(
        ::ChunkBlockPos const&,
        ::Block const&,
        ::BlockSource*,
        std::shared_ptr<BlockActor>,
        ::BlockChangeContext const&
    );

    MCNAPI void setBlockSimple(::ChunkBlockPos const&, ::Block const&);

    MCNAPI void setBlockVolume(::BlockVolume const&, uint);

    MCNAPI void setBorder(::ChunkBlockPos const&, bool);

    MCNAPI void setCachedTemperatureNoise(::ChunkBlockPos const&, schar);

    MCNAPI void setChunkInterpolants(::LevelChunk::Neighbors const&);

    MCNAPI void setClientNeedsToRequestSubchunks(std::optional<ulong>);

    MCNAPI void setEmptyClientChunk();

    MCNAPI ::Block const& setExtraBlock(::ChunkBlockPos const&, ::Block const&, ::BlockSource*);

    MCNAPI void setExtraBlockSimple(::ChunkBlockPos const&, ::Block const&);

    MCNAPI void setFinalized(::LevelChunk::Finalization);

    MCNAPI void setGrassColor(int, ::ChunkBlockPos const&);

    MCNAPI void setHadSerializedEntities();

    MCNAPI void setIsClientGeneratedChunk(bool);

    MCNAPI void setLastNetworkLightingTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void setMetaData(std::shared_ptr<LevelChunkMetaData>);

    MCNAPI void setPendingEntities(std::string);

    MCNAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);

    MCNAPI void setSaved();

    MCNAPI void setToSingleBiome(::Biome const&);

    MCNAPI void setUnsaved();

    MCNAPI void setWaterColor(int, ::ChunkBlockPos const&);

    MCNAPI bool shouldSaveIfNeverSaved() const;

    MCNAPI bool shouldSaveJigsawStructureBlueprints() const;

    MCNAPI bool shouldSaveNonActorDataIfDirty() const;

    MCNAPI bool subChunkIsSafeReference(::BlockPos const&) const;

    MCNAPI void tick(::BlockSource&, ::Tick const&);

    MCNAPI void tickBlockEntities(::BlockSource&);

    MCNAPI void tickImpl(::BlockSource&, ::Tick const&, std::function<void()>);

    MCNAPI ::BlockPos toWorldPos(::ChunkBlockPos const&) const;

    MCNAPI bool tryChangeState(::ChunkState, ::ChunkState);

    MCNAPI bool trySetLightingTaskActive();

    MCNAPI void updateLoadedMetaDataHash();

    MCNAPI void validateAndFixBiomeStates();

    MCNAPI bool wasEverClientGenerated() const;

    MCNAPI bool wasTickedThisTick(::Tick const&) const;

    MCNAPI ~LevelChunk();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LevelChunk, LevelChunkPhase1Deleter>
    createNew(::Dimension&, ::ChunkPos, bool, ::SubChunkInitMode, ::LevelChunkBlockActorStorage::TrackingMode);

    MCNAPI static std::unique_ptr<LevelChunk>
    createNewNoCustomDeleter(::Dimension&, ::ChunkPos, bool, ::SubChunkInitMode);

    MCNAPI static std::tuple<std::array<ChunkLocalHeight, 256>, std::array<BiomeIdType, 256>>
    deserialize2DData(::IDataInput&, std::optional<LevelChunkFormat> const&, bool);

    MCNAPI static std::pair<ushort, std::vector<std::unique_ptr<SubChunkStorage<Biome>>>>
    deserialize3DBiomes(::IDataInput&, ::BiomeRegistry const&, ushort, ::Biome const*, bool);

    MCNAPI static std::
        tuple<std::array<ChunkLocalHeight, 256>, ushort, std::vector<std::unique_ptr<SubChunkStorage<Biome>>>>
        deserialize3DData(::IDataInput&, ::BiomeRegistry const&, ushort, ::Biome const*);

    MCNAPI static void deserializeSubChunk(
        ::IDataInput&,
        ::ChunkPos const&,
        std::optional<schar>,
        ::SubChunk&,
        ::BlockPalette&,
        std::optional<DeserializationChanges*>
    );

    MCNAPI static std::optional<BlockPos> findExposedLightningRod(::BlockPos const&, ::BlockSource&);

    MCNAPI static void flushGarbageCollector();

    MCNAPI static std::pair<LevelChunkTag, short> getTagAndSubIndexFromKey(std::string_view);

    MCNAPI static std::tuple<std::array<ChunkLocalHeight, 256>, std::array<BiomeIdType, 256>, std::vector<SubChunk>>
    staticDeserializeLegacyTerrain(::IDataInput&, short, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Dimension&, ::ChunkPos const&, bool, ::SubChunkInitMode, bool, ::LevelChunkBlockActorStorage::TrackingMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
