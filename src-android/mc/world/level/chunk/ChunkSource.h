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
class BlockPos;
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
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkSource>>     mOwnedParent;
    ::ll::TypedStorage<8, 8, ::LevelChunkBuilderData*>         mLevelChunkBuilderData;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                mShuttingDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageAppSuspendSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkSource& operator=(ChunkSource const&);
    ChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ChunkSource();

    virtual void shutdown();

    virtual bool isShutdownDone();

    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Random&);

    virtual bool isChunkKnown(::ChunkPos const&);

    virtual bool isChunkSaved(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual std::shared_ptr<LevelChunk> getOrLoadChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    virtual bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    virtual void neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk&, bool);

    virtual void postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;

    virtual void postProcessMobsAt(::BlockSource&, int, int, ::Random&);

    virtual bool saveLiveChunk(::LevelChunk&);

    virtual void writeEntityChunkTransfer(::LevelChunk&);

    virtual void writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);

    virtual void deserializeActorStorageToLevelChunk(::LevelChunk&);

    virtual void hintDiscardBatchBegin();

    virtual void hintDiscardBatchEnd();

    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    virtual void compact();

    virtual void flushPendingDiscardedChunkWrites();

    virtual void flushThreadBatch();

    virtual bool isWithinWorldLimit(::ChunkPos const&) const;

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* getChunkMap();

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& getStorage() const;

    virtual void clearDeletedEntities();

    virtual bool canCreateViews() const;

    virtual std::unique_ptr<BlendingDataProvider> tryGetBlendingDataProvider();

    virtual std::shared_ptr<LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();

    virtual void setLevelChunk(std::shared_ptr<LevelChunk>);

    virtual bool canLaunchTasks() const;

    virtual bool chunkPosNeedsBlending(::ChunkPos const&);

    virtual void _clearBlendingCache();

    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChunkSource(std::unique_ptr<ChunkSource>);

    MCNAPI ChunkSource(::Dimension*, int);

    MCNAPI void _checkForUnblockingChunks(::LevelChunk const&);

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
    );

    MCNAPI std::shared_ptr<LevelChunk> getAvailableChunk(::ChunkPos const&);

    MCNAPI std::shared_ptr<LevelChunk> getAvailableChunkAt(::BlockPos const&);

    MCNAPI int getChunkSide() const;

    MCNAPI ::Dimension& getDimension() const;

    MCNAPI std::shared_ptr<LevelChunk> getGeneratedChunk(::ChunkPos const&);

    MCNAPI ::Level& getLevel() const;

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI void setShuttingDown(bool const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<br::worldgen::StructureInstance>
    _delegateTryGetOrLoadStructureInstanceAt(::ChunkSource&, ::ChunkPos const&, ::br::worldgen::Structure const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& gPerfIsClientSide();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ChunkSource>);

    MCNAPI void* $ctor(::Dimension*, int);
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

    MCNAPI std::shared_ptr<LevelChunk> $getExistingChunk(::ChunkPos const&);

    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Random&);

    MCNAPI bool $isChunkKnown(::ChunkPos const&);

    MCNAPI bool $isChunkSaved(::ChunkPos const&);

    MCNAPI std::shared_ptr<LevelChunk> $createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    MCNAPI std::shared_ptr<LevelChunk> $getOrLoadChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);

    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);

    MCNAPI void $checkAndReplaceChunk(::ChunkViewSource&, ::LevelChunk&);

    MCNAPI bool $verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk&);

    MCNAPI void $neighborAwareChunkUpgrade(::LevelChunk&, ::ChunkViewSource&);

    MCNAPI void $loadChunk(::LevelChunk&, bool);

    MCNAPI void $postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;

    MCNAPI void $postProcessMobsAt(::BlockSource&, int, int, ::Random&);

    MCNAPI bool $saveLiveChunk(::LevelChunk&);

    MCNAPI void $writeEntityChunkTransfer(::LevelChunk&);

    MCNAPI void
    $writeEntityChunkTransfersToUnloadedChunk(::ChunkKey const&, std::vector<ActorUnloadedChunkTransferEntry> const&);

    MCNAPI void $deserializeActorStorageToLevelChunk(::LevelChunk&);

    MCNAPI void $hintDiscardBatchBegin();

    MCNAPI void $hintDiscardBatchEnd();

    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    MCNAPI void $compact();

    MCNAPI void $flushPendingDiscardedChunkWrites();

    MCNAPI void $flushThreadBatch();

    MCNAPI bool $isWithinWorldLimit(::ChunkPos const&) const;

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* $getChunkMap();

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& $getStorage() const;

    MCNAPI void $clearDeletedEntities();

    MCNAPI bool $canCreateViews() const;

    MCNAPI std::unique_ptr<BlendingDataProvider> $tryGetBlendingDataProvider();

    MCNAPI std::shared_ptr<LevelChunkMetaDataDictionary> $loadLevelChunkMetaDataDictionary();

    MCNAPI void $setLevelChunk(std::shared_ptr<LevelChunk>);

    MCNAPI bool $canLaunchTasks() const;

    MCNAPI bool $chunkPosNeedsBlending(::ChunkPos const&);

    MCNAPI void $_clearBlendingCache();

    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
