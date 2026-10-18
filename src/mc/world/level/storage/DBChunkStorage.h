#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/ChunkPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/ActorDigestFormat.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/LevelChunkFinalDeleter.h"
#include "mc/world/level/chunk/LevelChunkFormat.h"
#include "mc/world/level/storage/ConsoleChunkBlender.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/DBChunkStorageKey.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/db_helpers/Category.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BiomeRegistry;
#else // @header-generator platform
class BaseGameVersion;
#endif // @header-generator platform
class BlendingData;
class BlendingDataProvider;
class ChunkKey;
class ChunkViewSource;
class DBStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class Experiments;
#else // @header-generator platform
#endif // @header-generator platform
class IDataInput;
class LevelChunk;
class LevelChunkMetaDataDictionary;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelData;
#else // @header-generator platform
#endif // @header-generator platform
class LevelStorageWriteBatch;
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
#else // @header-generator platform
#endif // @header-generator platform
class TaskGroup;
struct ActorUnloadedChunkTransferEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ChunkDeletionMetadata;
#endif // @header-generator platform
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LevelChunkFinalDeleter;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    enum ChunkCacheStatus : uint {
#else // @header-generator platform
    enum class ChunkCacheStatus : int {
#endif // @header-generator platform
        Missing   = 0,
        Available = 1,
        DontCache = 2,
    };

    struct PreCavesAndCliffsMetaData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>  mWasGeneratedPreCavesAndCliffs;
        ::ll::TypedStorage<4, 4, float> mBiomeSubChunkHeight;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk5cb409;
        ::ll::UntypedStorage<4, 4> mUnk75181d;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        PreCavesAndCliffsMetaData& operator=(PreCavesAndCliffsMetaData const&);
        PreCavesAndCliffsMetaData(PreCavesAndCliffsMetaData const&);
#endif // @header-generator platform
        PreCavesAndCliffsMetaData();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DBChunkStorageKey, ::DBChunkStorage::ChunkCacheStatus>>
                                                  mHasChunkCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mHasChunkCacheSharedMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::pair<bool, ::std::shared_ptr<::BlendingData>>>>
                                                                                          mChunkBlendingDataCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                         mChunkBlendingDataSharedMutex;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                         mAttenuatorSharedMutex;
    ::ll::TypedStorage<8, 8, ::DBStorage&>                                                mStorage;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelStorageWriteBatch>>> mBufferPool;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter>>> mDiscardBatch;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>> mLiveChunksBeingSaved;
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter>>>
                                                             mDiscardedWhileLiveSaved;
    ::ll::TypedStorage<1, 1, bool>                           mBatch;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>             mCurrentLevelVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DBChunkStorage& operator=(DBChunkStorage const&);
    DBChunkStorage(DBChunkStorage const&);
    DBChunkStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DBChunkStorage();
#else // @header-generator platform
    virtual ~DBChunkStorage() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void shutdown();
#else // @header-generator platform
    virtual void shutdown() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isShutdownDone();
#else // @header-generator platform
    virtual bool isShutdownDone() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChunkKnown(::ChunkPos const&);
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChunkSaved(::ChunkPos const&);
#else // @header-generator platform
    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool isChunkSaved(::ChunkPos const& chunkPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);
#else // @header-generator platform
    virtual void checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);
#else // @header-generator platform
    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual void neighborAwareChunkUpgrade(::LevelChunk& levelChunk, ::ChunkViewSource& neighborhood) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveLiveChunk(::LevelChunk&);
#else // @header-generator platform
    virtual void deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           excludedChunks,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeEntityChunkTransfer(::LevelChunk&);
#else // @header-generator platform
    virtual void deleteStoredChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);
#else // @header-generator platform
    virtual bool saveLiveChunk(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk&);
#else // @header-generator platform
    virtual void writeEntityChunkTransfer(::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hintDiscardBatchBegin();
#else // @header-generator platform
    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void hintDiscardBatchEnd();
#else // @header-generator platform
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    virtual void hintDiscardBatchBegin() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushPendingDiscardedChunkWrites();
#else // @header-generator platform
    virtual void hintDiscardBatchEnd() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushThreadBatch();
#else // @header-generator platform
    virtual void flushPendingDiscardedChunkWrites() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlendingDataProvider> tryGetBlendingDataProvider();
#else // @header-generator platform
    virtual void flushThreadBatch() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chunkPosNeedsBlending(::ChunkPos const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // clang-format on
#else // @header-generator platform
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk) /*override*/;

    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp) /*override*/;

    virtual ::std::shared_ptr<::br::worldgen::StructureInstance>
    _tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<bool, std::shared_ptr<BlendingData>>
           _cacheSeamlessChunkBlendingData(::ChunkPos, bool, std::shared_ptr<BlendingData>);
#else // @header-generator platform
    MCAPI ::std::pair<bool, ::std::shared_ptr<::BlendingData>> _cacheSeamlessChunkBlendingData(
        ::ChunkPos                        chunkPos,
        bool                              isCompleted,
        ::std::shared_ptr<::BlendingData> blendingData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deserializeIndependentActorStorage(::LevelChunk&, std::string const&);
#else // @header-generator platform
    MCAPI void _deleteChunkEntityData(::DBChunkStorageKey const& key, ::LevelStorageWriteBatch& batch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LevelChunk::Neighbors _getChunkNeighbors(::ChunkPos, ::DimensionType);
#else // @header-generator platform
    MCAPI void _deserializeIndependentActorStorage(::LevelChunk& lc, ::std::string const& storageKeyDigestBuffer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getEntityDigestKey(std::string_view const) const;
#else // @header-generator platform
    MCAPI ::LevelChunk::Neighbors _getChunkNeighbors(::ChunkPos lc, ::DimensionType dimensionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasChunk(::DBChunkStorageKey const&);
#else // @header-generator platform
    MCAPI bool _hasChunk(::DBChunkStorageKey const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _loadChunkFromDB(::LevelChunk&, ::LevelChunk&, ::ChunkViewSource&);
#else // @header-generator platform
    MCAPI bool _hasChunkUncached(::DBChunkStorageKey const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveBlendData(::LevelStorageWriteBatch&, std::string_view, std::string&, ::PersistentBlendData) const;
#else // @header-generator platform
    MCAPI bool _loadChunkFromDB(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _serializeChunk(::LevelChunk&, ::LevelStorageWriteBatch&, bool const);
#else // @header-generator platform
    MCAPI void _saveBlendData(
        ::LevelStorageWriteBatch& batch,
        ::std::string_view        prefix,
        ::std::string&            buffer,
        ::PersistentBlendData     data
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _serializeEntities(::LevelChunk&, ::LevelStorageWriteBatch&, std::string&, bool);
#else // @header-generator platform
    MCAPI void
    _serializeChunk(::LevelChunk& lc, ::LevelStorageWriteBatch& batch, bool const markEntitiesProcesedOnChunkDiscard);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _upgradeActorStorage(::ChunkKey, std::string_view&);
#else // @header-generator platform
    MCAPI void _serializeEntities(
        ::LevelChunk&             lc,
        ::LevelStorageWriteBatch& batch,
        ::std::string&            buffer,
        bool                      markEntitiesProcesedOnChunkDiscard
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _writeActorDigest(::LevelStorageWriteBatch&, ::ChunkKey const&, std::string const&);
#else // @header-generator platform
    MCAPI ::std::string _upgradeActorStorage(::ChunkKey chunkKey, ::std::string_view& legacyActorData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _writeDiscardChunksBatch();
#else // @header-generator platform
    MCAPI void _writeDiscardChunksBatch();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string
    deserializeActorStorageToString(bool, std::string const&, std::function<bool(std::string_view, std::string&)>);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::std::vector<::std::string> _deserializeChunkActorStorageKeys(::IDataInput& digestStream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LevelStorageWriteBatch& threadBatch();
#else // @header-generator platform
    MCAPI static void
    _writeActorDigest(::LevelStorageWriteBatch& batch, ::ChunkKey const& chunkKey, ::std::string const& digestBuffer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string& threadBuffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string deserializeActorStorageToString(
        bool                                                      hasActorDigestVersionTag,
        ::std::string const&                                      storageKeyDigestBuffer,
        ::std::function<bool(::std::string_view, ::std::string&)> loadDataCallback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $shutdown();
#else // @header-generator platform
    MCAPI void $shutdown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isShutdownDone();
#else // @header-generator platform
    MCAPI bool $isShutdownDone();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChunkKnown(::ChunkPos const&);
#else // @header-generator platform
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChunkSaved(::ChunkPos const&);
#else // @header-generator platform
    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCAPI bool $isChunkSaved(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCAPI bool $structurePostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);
#else // @header-generator platform
    MCAPI bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    MCAPI void $neighborAwareChunkUpgrade(::LevelChunk& levelChunk, ::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $saveLiveChunk(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           excludedChunks,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeEntityChunkTransfer(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $deleteStoredChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);
#else // @header-generator platform
    MCAPI bool $saveLiveChunk(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserializeActorStorageToLevelChunk(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $writeEntityChunkTransfer(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hintDiscardBatchBegin();
#else // @header-generator platform
    MCAPI void $writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $hintDiscardBatchEnd();
#else // @header-generator platform
    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    MCAPI void $hintDiscardBatchBegin();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushPendingDiscardedChunkWrites();
#else // @header-generator platform
    MCAPI void $hintDiscardBatchEnd();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushThreadBatch();
#else // @header-generator platform
    MCAPI void $flushPendingDiscardedChunkWrites();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlendingDataProvider> $tryGetBlendingDataProvider();
#else // @header-generator platform
    MCAPI void $flushThreadBatch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);

    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    $_tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);


#endif // @header-generator platform
    // NOLINTEND
};
