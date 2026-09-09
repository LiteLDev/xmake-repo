#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ActorDigestFormat.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/chunk/LevelChunkFinalDeleter.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/storage/ConsoleChunkBlender.h"
#include "mc/world/level/storage/DBChunkStorageKey.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class BlendingData;
class BlendingDataProvider;
class ChunkKey;
class ChunkViewSource;
class DBStorage;
class Experiments;
class IDataInput;
class LevelChunk;
class LevelChunkMetaDataDictionary;
class LevelData;
class LevelStorageWriteBatch;
class Scheduler;
class TaskGroup;
struct ActorUnloadedChunkTransferEntry;
struct DimensionType;
struct PersistentBlendData;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

class DBChunkStorage : public ::ChunkSource {
public:
    // DBChunkStorage inner types declare
    // clang-format off
    struct PreCavesAndCliffsMetaData;
    // clang-format on

    // DBChunkStorage inner types define
    enum ChunkCacheStatus : uint {
        Missing   = 0,
        Available = 1,
        DontCache = 2,
    };

    struct PreCavesAndCliffsMetaData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>  mWasGeneratedPreCavesAndCliffs;
        ::ll::TypedStorage<4, 4, float> mBiomeSubChunkHeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        PreCavesAndCliffsMetaData();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<DBChunkStorageKey, DBChunkStorage::ChunkCacheStatus>> mHasChunkCache;
    ::ll::UntypedStorage<1, 144> mHasChunkCacheSharedMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::pair<bool, std::shared_ptr<BlendingData>>>> mChunkBlendingDataCache;
    ::ll::UntypedStorage<1, 140> mChunkBlendingDataSharedMutex;
    ::ll::UntypedStorage<1, 140> mAttenuatorSharedMutex;
    ::ll::TypedStorage<8, 8, ::DBStorage&> mStorage;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LevelStorageWriteBatch>>> mBufferPool;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>>> mDiscardBatch;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>> mLiveChunksBeingSaved;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>>> mDiscardedWhileLiveSaved;
    ::ll::TypedStorage<1, 1, bool> mBatch;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::UntypedStorage<8, 32> mCurrentLevelVersion;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DBChunkStorage& operator=(DBChunkStorage const&);
    DBChunkStorage(DBChunkStorage const&);
    DBChunkStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DBChunkStorage();

    virtual void shutdown();

    virtual bool isShutdownDone();

    virtual bool isChunkKnown(::ChunkPos const&);

    virtual bool isChunkSaved(::ChunkPos const&);

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk&, bool);

    virtual bool saveLiveChunk(::LevelChunk&);

    virtual void writeEntityChunkTransfer(::LevelChunk&);

    virtual void writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);

    virtual void deserializeActorStorageToLevelChunk(::LevelChunk&);

    virtual void hintDiscardBatchBegin();

    virtual void hintDiscardBatchEnd();

    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    virtual void flushPendingDiscardedChunkWrites();

    virtual void flushThreadBatch();

    virtual std::unique_ptr<BlendingDataProvider> tryGetBlendingDataProvider();

    virtual std::shared_ptr<LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    virtual bool chunkPosNeedsBlending(::ChunkPos const&);

    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::pair<bool, std::shared_ptr<BlendingData>>
           _cacheSeamlessChunkBlendingData(::ChunkPos, bool, std::shared_ptr<BlendingData>);

    MCNAPI void _deserializeIndependentActorStorage(::LevelChunk&, std::string const&);

    MCNAPI ::LevelChunk::Neighbors _getChunkNeighbors(::ChunkPos, ::DimensionType);

    MCNAPI std::string _getEntityDigestKey(std::string_view const) const;

    MCNAPI bool _hasChunk(::DBChunkStorageKey const&);

    MCNAPI bool _loadChunkFromDB(::LevelChunk&, ::LevelChunk&, ::ChunkViewSource&);

    MCNAPI void _saveBlendData(::LevelStorageWriteBatch&, std::string_view, std::string&, ::PersistentBlendData) const;

    MCNAPI void _serializeChunk(::LevelChunk&, ::LevelStorageWriteBatch&, bool const);

    MCNAPI void _serializeEntities(::LevelChunk&, ::LevelStorageWriteBatch&, std::string&, bool);

    MCNAPI std::string _upgradeActorStorage(::ChunkKey, std::string_view&);

    MCNAPI void _writeActorDigest(::LevelStorageWriteBatch&, ::ChunkKey const&, std::string const&);

    MCNAPI void _writeDiscardChunksBatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string
    deserializeActorStorageToString(bool, std::string const&, std::function<bool(std::string_view, std::string&)>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LevelStorageWriteBatch& threadBatch();

    MCNAPI static std::string& threadBuffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $shutdown();

    MCNAPI bool $isShutdownDone();

    MCNAPI bool $isChunkKnown(::ChunkPos const&);

    MCNAPI bool $isChunkSaved(::ChunkPos const&);

    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);

    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);

    MCNAPI void $checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    MCNAPI bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    MCNAPI void $neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

    MCNAPI void $loadChunk(::LevelChunk&, bool);

    MCNAPI bool $saveLiveChunk(::LevelChunk&);

    MCNAPI void $writeEntityChunkTransfer(::LevelChunk&);

    MCNAPI void
    $writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);

    MCNAPI void $deserializeActorStorageToLevelChunk(::LevelChunk&);

    MCNAPI void $hintDiscardBatchBegin();

    MCNAPI void $hintDiscardBatchEnd();

    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    MCNAPI void $flushPendingDiscardedChunkWrites();

    MCNAPI void $flushThreadBatch();

    MCNAPI std::unique_ptr<BlendingDataProvider> $tryGetBlendingDataProvider();

    MCNAPI std::shared_ptr<LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const&);

    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
