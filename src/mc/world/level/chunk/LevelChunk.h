#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/container/small_vector_base.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/buffer_span.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SubChunkPacketPayload.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/threading/SharedLock.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/platform/threading/SpinLockImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/ActorLink.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/spawn_category/Type.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkLocalHeight.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/block/BrightnessPair.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/BiomeChunkState.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/ChunkCachedDataState.h"
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/ChunkTerrainDataState.h"
#include "mc/world/level/chunk/ColumnCachedData.h"
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/LevelChunkBiomes.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/LevelChunkDataField.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/chunk/LevelChunkNeighbor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/LevelChunkTag.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/LevelChunkVolumeData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/SubChunk.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/SubChunkInitMode.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/level_chunk_ticking/Entity.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPalette;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class BlockTickingQueue;
class BlockVolume;
class ChunkBlockPos;
class ChunkSource;
class ChunkViewSource;
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class DimensionHeightRange;
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
class GameEventListenerRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class HeightmapWrapper;
#else // @header-generator platform
#endif // @header-generator platform
class IDataInput;
class IDataOutput;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelChunkBlockActorAccessToken;
class LevelChunkBuilderData;
#else // @header-generator platform
#endif // @header-generator platform
class LevelChunkMetaData;
#if defined(LL_PLAT_A) // @header-generator platform
class MobSpawnerData;
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class SaveContext;
class StringByteInput;
#if defined(LL_PLAT_A) // @header-generator platform
class StringByteOutput;
#else // @header-generator platform
#endif // @header-generator platform
class SubChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
class Weather;
template<typename T0> class buffer_span_mut;
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
struct ActorLink;
struct BiomeChunkState;
#endif // @header-generator platform
struct BlockID;
#if defined(LL_PLAT_A) // @header-generator platform
struct Brightness;
struct ChunkGenSessionContext;
#else // @header-generator platform
#endif // @header-generator platform
struct DeserializationChanges;
#if defined(LL_PLAT_A) // @header-generator platform
struct LevelChunkMemoryEstimateData;
#else // @header-generator platform
#endif // @header-generator platform
struct LevelChunkPhase1Deleter;
struct NibblePair;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SubChunk;
#endif // @header-generator platform
namespace Bedrock { class LevelChunkTimings; }
namespace LevelChunkTicking { struct Registry; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::spawn { struct State; }
namespace br::worldgen { struct SpawnerData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelChunk {
public:
    // LevelChunk inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct Telemetry;
    struct SpawningArea;
#else // @header-generator platform
#endif // @header-generator platform
    class Neighbors;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SpawningArea;
    struct Telemetry;
#endif // @header-generator platform
    // clang-format on

    // LevelChunk inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class DeserializeEntityResult : int {
        FailedToLoadActor  = 0,
        FailedToAddToLevel = 1,
        Succeeded          = 2,
    };

#endif // @header-generator platform
    enum class Finalization : int {
        NeedsInstaticking = 0,
        NeedsPopulation   = 1,
        Done              = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class DeserializeEntityResult : int {
        FailedToLoadActor  = 0,
        FailedToAddToLevel = 1,
        Succeeded          = 2,
#else // @header-generator platform
    class Neighbors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mNeighbors;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::array<::std::pair<::LevelChunkNeighbor, ::ChunkPos>, 8> const& sOffsetMap();
        // NOLINTEND
    };

    struct SpawningArea {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::BoundingBox>           aabb;
        ::ll::TypedStorage<1, 1, ::HardcodedSpawnAreaType> type;
        // NOLINTEND
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    using BBorder = bool;

#if defined(LL_PLAT_A) // @header-generator platform
    using BiomeSmallVector = ::Bedrock::small_vector<gsl::not_null<const Biome*>, 4>;
#else // @header-generator platform
    using BiomeSmallVector = ::Bedrock::small_vector<::gsl::not_null<::Biome const*>, 4>;

    using BlockActorVector = ::std::vector<::std::shared_ptr<::BlockActor>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>             mBlockEntityAccessLock;
    ::ll::TypedStorage<8, 8, ::ILevel&>                                mLevel;
    ::ll::TypedStorage<8, 8, ::Dimension&>                             mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                               mPosition;
    ::ll::TypedStorage<1, 1, bool>                                     mLightingFixupDone;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                      mLightingTaskActive;
    ::ll::TypedStorage<1, 1, bool>                                     mReadOnly;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                           mGenerator;
    ::ll::TypedStorage<4, 4, ::LevelChunkTicking::Entity>              mTmpTickingEntity;
    ::ll::TypedStorage<1, 2, ::std::optional<::LevelChunkFormat>>      mLoadedFormat;
    ::ll::TypedStorage<1, 1, bool>                                     mHadSerializedEntities;
    ::ll::TypedStorage<8, 32, ::std::string>                           mSerializedEntitiesBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                           mFailedSerializedEntitiesBuffer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>>              mUnresolvedActorLinks;
    ::ll::TypedStorage<1, 1, ::std::atomic<::ChunkState>>              mLoadState;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                      mIsCurrentLoadStateIndeterminate;
    ::ll::TypedStorage<1, 1, ::ChunkTerrainDataState>                  mTerrainDataState;
    ::ll::TypedStorage<1, 1, ::ChunkDebugDisplaySavedState>            mDebugDisplaySavedState;
    ::ll::TypedStorage<1, 1, ::ChunkCachedDataState>                   mCachedDataState;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                          mCachedDataStateSpinLock;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                          mClientRequestHeightmapAdjustSpinLock;
    ::ll::TypedStorage<8, 8, ::Tick>                                   mLastTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>   mTickQueue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTickingQueue>>   mRandomTickQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunk>>               mSubChunks;
    ::ll::TypedStorage<8, 552, ::LevelChunkBiomes>                     mBiomes;
    ::ll::TypedStorage<4, 2048, ::std::array<::ColumnCachedData, 256>> mCachedData;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>  mHeightmap;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>  mRenderHeightmap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<short>>>  mPreWorldGenHeightmap;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight>                       mNonAirMaxHeight;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BiomeIdType, ::BiomeChunkState>> mBiomeStates;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasCachedTemperatureNoise;
    ::ll::TypedStorage<1, 256, ::std::array<bool, 256>>                               mBorderBlockMap;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsRedstoneLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                    mOwnedByTickingThread;
    ::ll::TypedStorage<1, 1, bool>                                                    mUse3DBiomeMaps;
    ::ll::TypedStorage<1, 1, bool>                                                    mLevelChunkHas3dBiomeTag;
    ::ll::TypedStorage<4, 4, int>                                                     mCurrentInstatick;
    ::ll::TypedStorage<4, 4, ::LevelChunk::Finalization>                              mFinalized;
    ::ll::TypedStorage<1, 4, ::LevelChunk::Telemetry>                                 mTelemetry;
    ::ll::TypedStorage<8, 64, ::ChunkGenContext>                                      mChunkGenContext;
    ::ll::TypedStorage<4, 48, ::DirtyTicksCounter[6]>                                 mFullChunkDirtyTicksCounters;
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                                     mChunkActorsDirtyTicksCounter;
    ::ll::TypedStorage<2, 512, ::std::array<::ChunkLocalHeight, 256>>                 mRainHeights;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                         mEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mRemovedActorStorageKeys;
    ::ll::TypedStorage<8, 184, ::LevelChunkBlockActorStorage>                         mBlockEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockActor>>>         mPreservedBlockEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>>              mVolumes;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                                        mDefaultBrightness;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunk::SpawningArea>>              mSpawningAreas;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastNetworkLightingTime;
    ::ll::TypedStorage<8, 8, uint64>                                                  mLoadedMetaDataHash;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaData>>                mMetaData;
    ::ll::TypedStorage<4, 16, float[2][2]>                                            mChunkInterpolants;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                                   mGenerationSeed;
    ::ll::TypedStorage<1, 1, bool>                                                    mbChunkHasConverterTag;
    ::ll::TypedStorage<1, 1, ::LevelChunk::Neighbors>                                 mSavedNeighbors;
    ::ll::TypedStorage<1, 1, bool>                                                    mClientNeedsToRequestSubChunks;
    ::ll::TypedStorage<1, 1, bool>                                                    mLevelChunkHasHadOriginalLighting;
    ::ll::TypedStorage<1, 1, bool>                                         mGeneratedPreCavesAndCliffsBlending;
    ::ll::TypedStorage<1, 1, bool>                                         mOnChunkLoadedCalled;
    ::ll::TypedStorage<1, 1, bool>                                         mAllSerializedEntitiesLoaded;
    ::ll::TypedStorage<8, 32, ::std::string>                               mOutOfBoundsBlockEntitiesBuffer;
    ::ll::TypedStorage<1, 1, bool>                                         mSaveNonActorDataIfDirty;
    ::ll::TypedStorage<1, 1, bool>                                         mSaveIfNeverSaved;
    ::ll::TypedStorage<1, 1, bool>                                         mHasSubChunksToPrune;
    ::ll::TypedStorage<1, 1, bool>                                         mHaveSubChunksBeenPruned;
    ::ll::TypedStorage<1, 1, bool>                                         mShouldShiftUpFlatWorldSubChunks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::SubChunk>>> mSubChunksToPruneOutsideRange;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Bedrock::LevelChunkTimings>>> mChunkTimings;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameEventListenerRegistry>> mGameEventListenerRegistry;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                              mSnowRandomValue;
    ::ll::TypedStorage<1, 1, bool>                                            mIsClientGenerated;
    ::ll::TypedStorage<1, 1, bool>                                            mWasClientGenerated;
    ::ll::TypedStorage<1, 1, bool>                                            mIsEmptyClientChunk;
    ::ll::TypedStorage<1, 1, bool>                     mActorStorageUpdatedAfterCheckingForReplacementData;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>      mIsTransient;
    ::ll::TypedStorage<1, 1, bool>                     mDidSaveJigsawStructureBlueprints;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 856, ::LevelChunkVolumeData> mLevelChunkVolumeData;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    // public:
    //     LLAPI void populateHeightMapDataForSubChunkPacket(
    //         short                                        subChunkAbsoluteIndex,
    //         ::SubChunkPacketPayload::SubChunkPacketData& subChunkPacketData
    //     ) const;
#endif // @header-generator platform

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelChunk& operator=(LevelChunk const&);
    LevelChunk(LevelChunk const&);
#endif // @header-generator platform
    LevelChunk();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelChunk(
        ::Dimension&,
        ::ChunkPos const&,
        bool,
        ::SubChunkInitMode,
        bool,
        ::LevelChunkBlockActorStorage::TrackingMode
#else // @header-generator platform
    MCAPI LevelChunk(
        ::Dimension&                                dimension,
        ::ChunkPos const&                           cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        bool                                        initializeMetaData,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addEntityToVolumes(::gsl::not_null<Actor*>);
#else // @header-generator platform
    MCAPI void _addEntityToVolumes(::gsl::not_null<::Actor*> actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _changeTerrainDataState(::ChunkTerrainDataState, ::ChunkTerrainDataState);
#else // @header-generator platform
    MCAPI void _checkAndInferMetaDataAfterDeserialization();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkAndInferMetaDataAfterDeserialization();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _deserializeBiomes(::IDataInput& stream, ::BiomeRegistry const& biomeRegistry, bool fromNetwork);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deserializeBiomes(::IDataInput&, ::BiomeRegistry const&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _deserializeBiomes(::IDataInput& stream, ::BiomeRegistry const& biomeRegistry, bool fromNetwork);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deserializeBlockEntities(::IDataInput&, ::LevelChunkBlockActorStorage&);
#else // @header-generator platform
    MCAPI void _deserializeBlockEntities(::IDataInput& stream, ::LevelChunkBlockActorStorage& blockEntityMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _deserializeSubChunk(short, ::StringByteInput&);
#else // @header-generator platform
    MCAPI bool _deserializeSubChunk(short index, ::StringByteInput& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _fixupCorruptedBlockActors(
        ::LevelChunkBlockActorStorage& deserialized,
        ::buffer_span_mut<::SubChunk>  subchunks
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getEntity(::ActorUniqueID const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _handleHeightmapDataFromSubChunkPacketWithDeserializationChanges(
        short                                              subChunkIndex,
        ::SubChunkPacketPayload::SubChunkPacketData const& subChunkPacketData
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _lightingCallbacks(
        ::ChunkBlockPos const& pos,
        ::Block const&         old,
        ::Block const&         current,
        ::BlockSource*         currentSource
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasAnyBiomeStates() const;
#else // @header-generator platform
    MCAPI void _placeBlockEntity(::std::shared_ptr<::BlockActor> te);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasAnyBlockMatchingFilter(std::function<bool(const Block&)> const&) const;
#else // @header-generator platform
    MCAPI bool _recalcHeight(::ChunkBlockPos const& start, ::BlockSource* source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasBlockEntitiesToSerialize() const;
#else // @header-generator platform
    MCAPI void _set2DBiomesFrom3D(::IDataInput& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasEntitiesPendingToLoad() const;
#else // @header-generator platform
    MCAPI void _setAllBiomesFrom2D(::std::array<::BiomeIdType, 256>& legacyBiomes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasEntitiesToSerialize() const;
#else // @header-generator platform
    MCAPI void _setBiome(::Biome const& biome, ::ChunkBlockPos const& pos, bool fillYDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasEntity(::WeakEntityRef) const;
#else // @header-generator platform
    MCAPI void addEntity(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isAnyBlockEntityDirty() const;
#else // @header-generator platform
    MCAPI void addHardcodedSpawningArea(::BoundingBox const& spawnerAABB, ::HardcodedSpawnAreaType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isBlockInChunk(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool applySeasonsPostProcess(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isClientGeneratedChunk() const;
#else // @header-generator platform
    MCAPI bool checkSeasonsPostProcessDirty() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmptyClientChunk() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void clearBlockEntitiesInSubChunk(
        schar                                absoluteIndex,
        ::LevelChunkBlockActorStorage const* blockActorMap,
        ::BlockSource*                       region
    );

    MCAPI void clientSubChunkRequestGenerateLightingForSubChunk(::ChunkViewSource& neighborhood, short absoluteIndex);

    MCAPI void deserializeBiomes(::IDataInput& stream, bool fromNetwork);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isFullyLoaded() const;
#else // @header-generator platform
    MCAPI void deserializeBlockEntities(::IDataInput& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isNonActorDataDirty() const;
#else // @header-generator platform
    MCAPI bool deserializeKey(::std::string_view key, ::std::string_view value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isOwnedByTickingThread() const;
#else // @header-generator platform
    MCAPI void deserializeMetaDataHash(::IDataInput& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isReadOnly() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void deserializeSubChunk(
        ::IDataInput&                              stream,
        short                                      absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void deserializeSubChunk(
        uchar                                      idx,
        ::IDataInput&                              stream,
        ::std::optional<schar>                     absoluteIndex,
        ::std::optional<::DeserializationChanges*> deserializationChanges
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void populateHeightMapDataForSubChunkPacket(short, ::SubChunkPacketPayload::SubChunkPacketData&) const;
#else // @header-generator platform
    MCAPI void fetchBlocks(::BlockPos const& volumeOrigin, ::BlockVolume& volume) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pruneBiomesAboveHeightmap();
#else // @header-generator platform
    MCAPI void finalizeDeserialization();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pruneBiomesSubChunk3D(ushort);
#else // @header-generator platform
    MCAPI void finalizePostProcessing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void finalizeSubChunkDeserialization(
        ::LevelChunkBlockActorStorage& blockActorMap,
        ::buffer_span_mut<::SubChunk>  subchunks
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBlockSimple(::ChunkBlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI bool generateOriginalLighting(::ChunkViewSource& neighborhood, bool enforceBorderCheck);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBlockVolume(::BlockVolume const&, uint);
#else // @header-generator platform
    MCAPI ::ChunkLocalHeight getAboveTopSolidBlock(
        ::ChunkBlockPos const& start,
        bool                   iteratePastInitialBlocking,
        bool                   includeWater,
        bool                   includeLeaves
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBorder(::ChunkBlockPos const&, bool);
#else // @header-generator platform
    MCAPI void getActors(
        ::ActorDefinitionIdentifier const& actorDefinitionId,
        ::AABB const&                      bb,
        ::std::vector<::Actor*>&           actors
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCachedTemperatureNoise(::ChunkBlockPos const&, schar);
#else // @header-generator platform
    MCAPI ::Biome const& getBiome(::ChunkBlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setChunkInterpolants(::LevelChunk::Neighbors const&);
#else // @header-generator platform
    MCAPI ::Block const& getBlock(::ChunkBlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setClientNeedsToRequestSubchunks(std::optional<ulong>);
#else // @header-generator platform
    MCAPI ::BlockActor* getBlockEntity(::ChunkBlockPos const& localPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEmptyClientChunk();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::array<::ChunkLocalHeight, 256> getEntireLightingHeightMap() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& setExtraBlock(::ChunkBlockPos const&, ::Block const&, ::BlockSource*);
#else // @header-generator platform
    MCAPI void
    getEntities(::ActorType type, ::AABB const& bb, ::std::vector<::Actor*>& es, bool ignoreTargetType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setExtraBlockSimple(::ChunkBlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI void getEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        ::std::vector<::Actor*>&                     entities,
        bool                                         useHitbox,
        ::std::function<bool(::Actor*)>              selector
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFinalized(::LevelChunk::Finalization);
#else // @header-generator platform
    MCAPI short getMaxAllocatedY() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setGrassColor(int, ::ChunkBlockPos const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunkMetaData> getMetaDataCopy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setHadSerializedEntities();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::SubChunk* getSubChunk(short absoluteIndex);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setIsClientGeneratedChunk(bool);
#else // @header-generator platform
    MCAPI int getSubChunkCountUpToHighestNonAirBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLastNetworkLightingTime(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
#else // @header-generator platform
    MCAPI ::BlockPos const getTopRainBlockPos(::ChunkBlockPos const& pos);

#ifdef LL_PLAT_C
    MCAPI void handleHeightmapDataFromSubChunkPacket(
        short                                              subChunkAbsoluteIndex,
        ::SubChunkPacketPayload::SubChunkPacketData const& subChunkPacketData,
        ::std::optional<::DeserializationChanges*>         deserializationChanges
    );
#endif

    MCAPI void markForTickingThisFrame(::LevelChunkTicking::Registry& registry);

#ifdef LL_PLAT_C
    MCAPI void moveLevelChunk(::LevelChunk&& otherChunk, uint64 subChunkRequestLimit);
#endif

    MCAPI bool nonActorDataNeedsSaving(int wait, int maxWait) const;

    MCAPI void onDiscarded();

    MCAPI ::LevelChunk& operator=(::LevelChunk&& otherChunk);

    MCAPI void placeCallbacks(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  old,
        ::Block const&                  current,
        ::BlockSource*                  currentSource,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::BlockChangeContext const&     changeSourceContext
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMetaData(std::shared_ptr<LevelChunkMetaData>);
#else // @header-generator platform
    MCAPI void populateHeightMapDataForSubChunkPacket(
        short                                        subChunkAbsoluteIndex,
        ::SubChunkPacketPayload::SubChunkPacketData& subChunkPacketData
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPendingEntities(std::string);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void pruneBiomesAboveHeightmap();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void recalculateChunkSkyLight();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSaved();
#else // @header-generator platform
    MCAPI void recomputeHeightMap(bool resetLighting);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setToSingleBiome(::Biome const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::BlockActor> removeBlockEntity(::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUnsaved();
#else // @header-generator platform
    MCAPI bool removeEntityFromChunk(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setWaterColor(int, ::ChunkBlockPos const&);
#else // @header-generator platform
    MCAPI bool removeEntityFromWorld(::WeakEntityRef entityRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldSaveIfNeverSaved() const;
#else // @header-generator platform
    MCAPI void removeHardcodedSpawningArea(::HardcodedSpawnAreaType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldSaveJigsawStructureBlueprints() const;
#else // @header-generator platform
    MCAPI void serializeBlockEntities(::IDataOutput& stream, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldSaveNonActorDataIfDirty() const;
#else // @header-generator platform
    MCAPI void serializeBlockEntitiesForSubChunk(
        ::IDataOutput&       stream,
        ::SubChunkPos const& subChunkPos,
        ::SaveContext const& saveContext
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool subChunkIsSafeReference(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool serializeBorderBlocks(::IDataOutput& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::BlockSource&, ::Tick const&);
#else // @header-generator platform
    MCAPI void serializeEntities(
        ::std::string&                              buffer,
        bool                                        markProcessedOnChunkDisard,
        ::std::function<void(::std::string const&)> addLiveActorCallback,
        ::std::function<void(::std::string const&)> addActorKeyCallback,
        ::std::function<void(::std::string const&)> addSerializedActor
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tickBlockEntities(::BlockSource&);
#else // @header-generator platform
    MCAPI void serializeEntityRemovals(::std::function<void(::std::string const&)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tickImpl(::BlockSource&, ::Tick const&, std::function<void()>);
#else // @header-generator platform
    MCAPI void serializeRandomTicks(::IDataOutput& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos toWorldPos(::ChunkBlockPos const&) const;
#else // @header-generator platform
    MCAPI void serializeTicks(::IDataOutput& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryChangeState(::ChunkState, ::ChunkState);
#else // @header-generator platform
    MCAPI void setAllBlockTypeIDAndData(::buffer_span<::BlockID> ids, ::buffer_span<::NibblePair> data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool trySetLightingTaskActive();
#else // @header-generator platform
    MCAPI ::Block const& setBlock(
        ::ChunkBlockPos const&          pos,
        ::Block const&                  block,
        ::BlockSource*                  issuingSource,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::BlockChangeContext const&     changeSourceContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateLoadedMetaDataHash();
#else // @header-generator platform
    MCAPI void setBlockVolume(::BlockVolume const& box, uint yOffset);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void validateAndFixBiomeStates();
#else // @header-generator platform
    MCAPI void setBorder(::ChunkBlockPos const& pos, bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool wasEverClientGenerated() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setClientNeedsToRequestSubchunks(::std::optional<uint64> requestLimit);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool wasTickedThisTick(::Tick const&) const;
#else // @header-generator platform
    MCAPI ::Block const&
    setExtraBlock(::ChunkBlockPos const& localPos, ::Block const& block, ::BlockSource* issuingSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelChunk();
#else // @header-generator platform
    MCAPI void setExtraBlockSimple(::ChunkBlockPos const& pos, ::Block const& block);

    MCAPI void setPendingEntities(::std::string entitiesData);

    MCAPI void setPreWorldGenHeightMap(::std::unique_ptr<::std::vector<short>> heightmap);

#ifdef LL_PLAT_C
    MCAPI void setupRedstoneCircuit(::BlockSource& resource);
#endif

    MCAPI void tickBlockEntities(::BlockSource& tickRegion);

    MCAPI void tickImpl(::BlockSource& tickRegion, ::Tick const& tick, ::std::function<void()> spawnerCallback);

    MCAPI bool tryChangeState(::ChunkState from, ::ChunkState to);

    MCAPI void validateAndFixBiomeStates();

    MCAPI ~LevelChunk();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LevelChunk, LevelChunkPhase1Deleter>
    createNew(::Dimension&, ::ChunkPos, bool, ::SubChunkInitMode, ::LevelChunkBlockActorStorage::TrackingMode);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::LevelChunk, ::LevelChunkPhase1Deleter> createNew(
        ::Dimension&                                dimension,
        ::ChunkPos                                  cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
    );

    MCAPI static ::std::unique_ptr<::LevelChunk>
    createNewNoCustomDeleter(::Dimension& dimension, ::ChunkPos cp, bool readOnly, ::SubChunkInitMode initBlocks);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::pair<ushort, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>>> deserialize3DBiomes(
        ::IDataInput&          stream,
        ::BiomeRegistry const& biomeRegistry,
        ushort                 dimensionHeightInSubchunks,
        ::Biome const*         defaultBiome,
        bool                   fromNetwork
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<BlockPos> findExposedLightningRod(::BlockPos const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI static ::std::optional<::BlockPos> findExposedLightningRod(::BlockPos const& pos, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void flushGarbageCollector();

    MCNAPI static std::pair<LevelChunkTag, short> getTagAndSubIndexFromKey(std::string_view);

    MCNAPI static std::tuple<std::array<ChunkLocalHeight, 256>, std::array<BiomeIdType, 256>, std::vector<SubChunk>>
    staticDeserializeLegacyTerrain(::IDataInput&, short, ushort);
#else // @header-generator platform
    MCAPI static ::std::
        tuple<::std::array<::ChunkLocalHeight, 256>, ::std::array<::BiomeIdType, 256>, ::std::vector<::SubChunk>>
        staticDeserializeLegacyTerrain(::IDataInput& stream, short minY, ushort dimensionSizeInSubchunks);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::Dimension&, ::ChunkPos const&, bool, ::SubChunkInitMode, bool, ::LevelChunkBlockActorStorage::TrackingMode);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Dimension&                                dimension,
        ::ChunkPos const&                           cp,
        bool                                        readOnly,
        ::SubChunkInitMode                          initBlocks,
        bool                                        initializeMetaData,
        ::LevelChunkBlockActorStorage::TrackingMode blockActorTrackingMode
    );
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
};
