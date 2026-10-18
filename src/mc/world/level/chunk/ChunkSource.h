#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlendingDataProvider;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class BoundingBox;
class ChunkKey;
class ChunkPos;
class ChunkViewSource;
class Dimension;
class ILevelStorageManagerConnector;
class Level;
class LevelChunk;
class LevelChunkBuilderData;
class LevelChunkMetaDataDictionary;
class LevelStorage;
class Random;
class TaskResult;
struct ActorUnloadedChunkTransferEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ChunkDeletionMetadata;
#endif // @header-generator platform
struct LevelChunkFinalDeleter;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

class ChunkSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkSource inner types define
    enum class LoadMode : int {
        None     = 0,
        Deferred = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mChunkSide;
    ::ll::TypedStorage<8, 8, ::Level*>                         mLevel;
    ::ll::TypedStorage<8, 8, ::Dimension*>                     mDimension;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                   mParent;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkSource>>     mOwnedParent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>> mOwnedParent;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelChunkBuilderData*>         mLevelChunkBuilderData;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                mShuttingDown;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mShuttingDown;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageAppSuspendSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ChunkSource& operator=(ChunkSource const&);
#else // @header-generator platform
#endif // @header-generator platform
    ChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ChunkSource();
#else // @header-generator platform
    virtual ~ChunkSource() /*override*/;
#endif // @header-generator platform

    virtual void shutdown();

    virtual bool isShutdownDone();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Random&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChunkKnown(::ChunkPos const&);
#else // @header-generator platform
    virtual bool isChunkKnown(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChunkSaved(::ChunkPos const&);
#else // @header-generator platform
    virtual bool isChunkSaved(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getOrLoadChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk>
    getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool structurePostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    virtual bool decorationPostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual void checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);
#else // @header-generator platform
    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);
#else // @header-generator platform
    virtual void neighborAwareChunkUpgrade(::LevelChunk& levelChunk, ::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;
#else // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool saveLiveChunk(::LevelChunk&);
#else // @header-generator platform
    virtual void deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeEntityChunkTransfer(::LevelChunk&);
#else // @header-generator platform
    virtual void deleteStoredChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
        ::std::function<void()>                    completionCallback,
        ::std::shared_ptr<::ChunkDeletionMetadata> metadata
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);
#else // @header-generator platform
    virtual bool saveLiveChunk(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserializeActorStorageToLevelChunk(::LevelChunk&);
#else // @header-generator platform
    virtual void writeEntityChunkTransfer(::LevelChunk& levelChunk);

    virtual void writeEntityChunkTransfersToUnloadedChunk(
        ::ChunkKey const&                                       chunkKey,
        ::std::vector<::ActorUnloadedChunkTransferEntry> const& transfers
    );

    virtual void deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);
#endif // @header-generator platform

    virtual void hintDiscardBatchBegin();

    virtual void hintDiscardBatchEnd();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);
#endif // @header-generator platform

    virtual void compact();

    virtual void flushPendingDiscardedChunkWrites();

    virtual void flushThreadBatch();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWithinWorldLimit(::ChunkPos const&) const;
#else // @header-generator platform
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* getChunkMap();
#else // @header-generator platform
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& getStorage() const;
#else // @header-generator platform
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const;
#endif // @header-generator platform

    virtual void clearDeletedEntities();

    virtual bool canCreateViews() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlendingDataProvider> tryGetBlendingDataProvider();
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlendingDataProvider> tryGetBlendingDataProvider();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLevelChunk(std::shared_ptr<LevelChunk>);
#else // @header-generator platform
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc);
#endif // @header-generator platform

    virtual bool canLaunchTasks() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chunkPosNeedsBlending(::ChunkPos const&);
#else // @header-generator platform
    virtual bool chunkPosNeedsBlending(::ChunkPos const& cp);
#endif // @header-generator platform

    virtual void _clearBlendingCache();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::br::worldgen::StructureInstance>
    _tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ChunkSource(std::unique_ptr<ChunkSource>);
#else // @header-generator platform
    MCAPI explicit ChunkSource(::std::unique_ptr<::ChunkSource> parent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkSource(::Dimension*, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _checkForUnblockingChunks(::LevelChunk const& lc);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _checkForUnblockingChunks(::LevelChunk const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _checkForUnblockingChunks(::LevelChunk const& lc);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createOrReplaceGridAreaMap(std::shared_ptr<LevelChunk>, bool);

    MCNAPI void _freeChunkGenerationGridMap(::ChunkPos const&, bool);

    MCNAPI void _launchChunkTask(std::string_view, ::ChunkPos const&, bool, ::brstd::move_only_function<TaskResult()>);

    MCNAPI void _launchLightingTask(std::shared_ptr<LevelChunk> const&, std::shared_ptr<ChunkViewSource> const&, bool);

    MCNAPI void
    _launchNeighborAwareUpgradeTask(std::shared_ptr<LevelChunk> const&, std::shared_ptr<ChunkViewSource> const&, bool);

    MCNAPI void _saveDirtyChunks(::LevelStorage&);

    MCNAPI void addEmptyChunkPosForProcessingNeighbours(std::shared_ptr<LevelChunk>);

    MCNAPI void checkAndLaunchChunkGenerationTasks(bool);

    MCNAPI ::GridArea<std::shared_ptr<LevelChunk>> createEmptyView(
        ::ChunkSource::LoadMode,
        bool,
        std::function<void(gsl::span<std::shared_ptr<LevelChunk>>)>,
        ::ChunkSourceViewGenerateMode,
        float const*
#else // @header-generator platform
    MCAPI void _checkLevelChunkForNextStage(
        ::LevelChunk const&                                         lc,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& grid,
        ::ChunkState                                                stateToCheck
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> getAvailableChunk(::ChunkPos const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _createOrReplaceGridAreaMap(::std::shared_ptr<::LevelChunk> lc, bool createNeighbourGridsIfMissing);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> getAvailableChunkAt(::BlockPos const&);
#else // @header-generator platform
    MCAPI void _freeChunkGenerationGridMap(::ChunkPos const& cp, bool isLevelChunkDeletion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getChunkSide() const;
#else // @header-generator platform
    MCAPI void _launchChunkTask(
        ::std::string_view                          taskName,
        ::ChunkPos const&                           chunkPos,
        bool                                        areInTask,
        ::brstd::move_only_function<::TaskResult()> taskFunc
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Dimension& getDimension() const;
#else // @header-generator platform
    MCAPI void _launchLightingTask(
        ::std::shared_ptr<::LevelChunk> const&      lc,
        ::std::shared_ptr<::ChunkViewSource> const& chunks,
        bool                                        areInTask
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> getGeneratedChunk(::ChunkPos const&);
#else // @header-generator platform
    MCAPI void _saveDirtyChunks(::LevelStorage&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Level& getLevel() const;
#else // @header-generator platform
    MCAPI void _spawnChunkGenerationTasks(int numTasks, bool calledFromTask);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addEmptyChunkPosForProcessingNeighbours(::std::shared_ptr<::LevelChunk> lc);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setShuttingDown(bool const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void checkAndLaunchChunkGenerationTasks(bool calledFromTask);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<br::worldgen::StructureInstance>
    _delegateTryGetOrLoadStructureInstanceAt(::ChunkSource&, ::ChunkPos const&, ::br::worldgen::Structure const&);
#else // @header-generator platform
    MCAPI ::GridArea<::std::shared_ptr<::LevelChunk>> createEmptyView(
        ::ChunkSource::LoadMode                                             lm,
        bool                                                                circle,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        float const*                                                        serverBuildRatio
    );

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool& gPerfIsClientSide();
#else // @header-generator platform
    MCAPI static bool& gPerfIsClientSide();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<ChunkSource>);

    MCNAPI void* $ctor(::Dimension*, int);
#else // @header-generator platform
    MCAPI void* $ctor(::std::unique_ptr<::ChunkSource> parent);
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
    MCNAPI std::shared_ptr<LevelChunk> $getExistingChunk(::ChunkPos const&);
#else // @header-generator platform
    MCFOLD ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Random&);
#else // @header-generator platform
    MCFOLD ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChunkKnown(::ChunkPos const&);
#else // @header-generator platform
    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChunkSaved(::ChunkPos const&);
#else // @header-generator platform
    MCAPI bool $isChunkSaved(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getOrLoadChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk>
    $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCFOLD bool $structurePostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);
#else // @header-generator platform
    MCFOLD bool $decorationPostProcessChunk(::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);
#else // @header-generator platform
    MCFOLD void $checkAndReplaceChunk(::ChunkViewSource& neighborhood, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);
#else // @header-generator platform
    MCFOLD bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);
#else // @header-generator platform
    MCFOLD void $neighborAwareChunkUpgrade(::LevelChunk& levelChunk, ::ChunkViewSource& neighborhood);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadChunk(::LevelChunk&, bool);
#else // @header-generator platform
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;
#else // @header-generator platform
    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    MCAPI void $postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $saveLiveChunk(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $deleteAllChunkData(
        ::std::unordered_set<::ChunkPos>           chunksToDelete,
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
    MCAPI void $writeEntityChunkTransfer(::LevelChunk& levelChunk);
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
    MCAPI void $deserializeActorStorageToLevelChunk(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
#else // @header-generator platform
    MCAPI void $hintDiscardBatchBegin();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $compact();
#else // @header-generator platform
    MCAPI void $hintDiscardBatchEnd();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushPendingDiscardedChunkWrites();
#else // @header-generator platform
    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushThreadBatch();
#else // @header-generator platform
    MCAPI void $compact();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWithinWorldLimit(::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI void $flushPendingDiscardedChunkWrites();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* $getChunkMap();
#else // @header-generator platform
    MCAPI void $flushThreadBatch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& $getStorage() const;
#else // @header-generator platform
    MCFOLD bool $isWithinWorldLimit(::ChunkPos const& cp) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearDeletedEntities();
#else // @header-generator platform
    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canCreateViews() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlendingDataProvider> $tryGetBlendingDataProvider();
#else // @header-generator platform
    MCFOLD void $clearDeletedEntities();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();
#else // @header-generator platform
    MCFOLD bool $canCreateViews() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLevelChunk(std::shared_ptr<LevelChunk>);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlendingDataProvider> $tryGetBlendingDataProvider();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canLaunchTasks() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const&);
#else // @header-generator platform
    MCFOLD void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_clearBlendingCache();
#else // @header-generator platform
    MCAPI bool $canLaunchTasks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
#else // @header-generator platform
    MCAPI bool $chunkPosNeedsBlending(::ChunkPos const& cp);

    MCAPI void $_clearBlendingCache();

    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    $_tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
