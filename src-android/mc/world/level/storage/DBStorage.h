#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/LevelStorageResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/storage/DBStoragePerformanceTelemetry.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/LevelStorageWriteBatch.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"
#include "mc/world/level/storage/db_helpers/OperationType.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class ContentIdentity;
class DBChunkStorage;
class DBStorageEnvironmentChain;
class DBStorageFolderWatcher;
class LevelData;
class LevelDbEnv;
class LevelStorageEventing;
class LevelStorageObserver;
class SaveTransactionManager;
class TaskGroup;
class TaskResult;
struct DBStorageConfig;
struct SnapshotFilenameAndLength;
namespace Core { class Path; }
// clang-format on

class DBStorage : public ::LevelStorage {
public:
    // DBStorage inner types declare
    // clang-format off
    class Options;
    struct PendingWriteResult;
    class DBStorageToken;
    struct CommitOperation;
    // clang-format on

    // DBStorage inner types define
    class Options {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, ::leveldb::Options>    options;
        ::ll::TypedStorage<8, 24, ::leveldb::ReadOptions> read;
        ::ll::TypedStorage<1, 1, ::leveldb::WriteOptions> write;
        // NOLINTEND
    };

    struct PendingWriteResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<const std::string>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                                mIsDeleted;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingWriteResult& operator=(PendingWriteResult const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingWriteResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class DBStorageToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::atomic<int>*> mRefCounter;
        // NOLINTEND
    };

    struct CommitOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                  mKey;
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mValue;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>         mCategory;
        ::ll::TypedStorage<1, 1, bool>                          mIsDelete;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommitOperation& operator=(CommitOperation const&);
        CommitOperation(CommitOperation const&);
        CommitOperation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CommitOperation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<DBStorageEnvironmentChain>> mEnvChain;
    ::ll::TypedStorage<8, 8, std::unique_ptr<leveldb::Cache>> mCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const leveldb::FilterPolicy>> mFilterPolicy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DBStorage::Options>> mOptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<leveldb::DecompressAllocator>> mDecompressAllocator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<leveldb::DB>> mDb;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mCompactionTaskGroup;
    ::ll::UntypedStorage<8, 16> mCompactionTask;
    ::ll::UntypedStorage<8, 16> mWriteTask;
    ::ll::TypedStorage<8, 32, ::Core::LevelStorageResult> mState;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*> mContentIdentity;
    ::ll::UntypedStorage<8, 24> mFullPath;
    ::ll::UntypedStorage<8, 24> mDbPath;
    ::ll::TypedStorage<8, 24, std::string> mLevelId;
    ::ll::TypedStorage<4, 40, std::mutex> mCompactionMutex;
    ::ll::UntypedStorage<1, 140> mWriteCacheMutex;
    ::ll::TypedStorage<4, 40, std::mutex> mCacheFlushMutex;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastCompactionStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mCompactionInterval;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mWriteFlushInterval;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mAllowFlush;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mSavingInProgress;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mSnapshotInProgress;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mShutdownStarted;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mNoMoreWrites;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mShutdownDone;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mOutstandingJobs;
    ::ll::UntypedStorage<8, 32> mSaveTransactionManager;
    ::ll::UntypedStorage<8, 48> mCriticalSyncSaveCallback;
    ::ll::UntypedStorage<8, 48> mExternallyRegisteredCompactionCallback;
    ::ll::UntypedStorage<8, 24> mChunkStorages;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LevelStorageObserver>>> mObservers;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mDestructorInProgress;
    ::ll::TypedStorage<1, 1, bool> mForceCorrupt;
    ::ll::TypedStorage<1, 1, bool const> mStorageEnabled;
    ::ll::TypedStorage<1, 1, bool const> mJigsawPersistenceToggle;
    ::ll::UntypedStorage<8, 24> mDbSubfolder;
    ::ll::TypedStorage<8, 96, ::LevelStorageWriteBatch> mSingleKeyWrites;
    ::ll::TypedStorage<8, 24, std::vector<LevelStorageWriteBatch>> mBatchWrites;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelStorageEventing>> mEventing;
    ::ll::UntypedStorage<8, 24> mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<DBStorageFolderWatcher>>> mFolderTelemetryWatcher;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextSizeTelemetryCaptureTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>> const> mSizeTelemetryCaptureInterval;
    ::ll::UntypedStorage<8, 160> mDBStoragePerformanceTelemetry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DBStorage();

    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>);

    virtual bool loadedSuccessfully() const;

    virtual std::unique_ptr<CompoundTag> getCompoundTag(std::string const&, ::DBHelpers::Category);

    virtual bool hasKey(std::string_view, ::DBHelpers::Category) const;

    virtual void forEachKeyWithPrefix(std::string_view, ::DBHelpers::Category, std::function<void (std::string_view, std::string_view)> const&) const;

    virtual bool loadLevelData(::LevelData&);

    virtual std::unique_ptr<ChunkSource> createChunkStorage(std::unique_ptr<ChunkSource>, ::StorageVersion);

    virtual void saveLevelData(::LevelData const&);

    virtual ::Core::PathBuffer<std::string> const& getFullPath() const;

    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&);

    virtual ::Bedrock::Threading::Async<void> saveData(std::string const&, std::string&&, ::DBHelpers::Category);

    virtual ::Bedrock::Threading::Async<void> deleteData(std::string const&, ::DBHelpers::Category);

    virtual void getStatistics(std::string&, ::LevelStorage::StatsType) const;

    virtual ::Core::LevelStorageResult getLevelStorageState() const;

    virtual ::ContentIdentity const* getContentIdentity() const;

    virtual void startShutdown();

    virtual bool isShuttingDown() const;

    virtual bool checkShutdownDone();

    virtual bool loadData(std::string_view, std::string&, ::DBHelpers::Category) const;

    virtual ::Core::LevelStorageResult getState() const;

    virtual std::vector<SnapshotFilenameAndLength> createSnapshot(std::string const&, bool);

    virtual void releaseSnapshot();

    virtual ::Bedrock::Threading::Async<void> compactStorage();

    virtual void syncAndSuspendStorage();

    virtual void resumeStorage();

    virtual void setFlushAllowed(bool);

    virtual void flushToPermanentStorage();

    virtual void freeCaches();

    virtual void setCompactionCallback(std::function<void (CompactionStatus)>);

    virtual void setCriticalSyncSaveCallback(std::function<void ()>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DBStorage(::DBStorageConfig, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>);

    MCNAPI ::TaskResult _flushWriteCacheToLevelDB();

    MCNAPI std::string _getTelemetryMessage(::leveldb::Status const&) const;

    MCNAPI ::DBStorage::PendingWriteResult _readPendingWrite(std::string const&, ::DBHelpers::Category) const;

    MCNAPI ::TaskGroup& getTaskGroup();

    MCNAPI bool tryRepair(::Core::Path const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DBStorageConfig, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addStorageObserver(std::unique_ptr<LevelStorageObserver>);

    MCNAPI bool $loadedSuccessfully() const;

    MCNAPI std::unique_ptr<CompoundTag> $getCompoundTag(std::string const&, ::DBHelpers::Category);

    MCNAPI bool $hasKey(std::string_view, ::DBHelpers::Category) const;

    MCNAPI void $forEachKeyWithPrefix(
        std::string_view,
        ::DBHelpers::Category,
        std::function<void(std::string_view, std::string_view)> const&
    ) const;

    MCNAPI bool $loadLevelData(::LevelData&);

    MCNAPI std::unique_ptr<ChunkSource> $createChunkStorage(std::unique_ptr<ChunkSource>, ::StorageVersion);

    MCNAPI void $saveLevelData(::LevelData const&);

    MCNAPI ::Core::PathBuffer<std::string> const& $getFullPath() const;

    MCNAPI ::Bedrock::Threading::Async<void> $saveData(::LevelStorageWriteBatch const&);

    MCNAPI ::Bedrock::Threading::Async<void> $saveData(std::string const&, std::string&&, ::DBHelpers::Category);

    MCNAPI ::Bedrock::Threading::Async<void> $deleteData(std::string const&, ::DBHelpers::Category);

    MCNAPI void $getStatistics(std::string&, ::LevelStorage::StatsType) const;

    MCNAPI ::Core::LevelStorageResult $getLevelStorageState() const;

    MCNAPI ::ContentIdentity const* $getContentIdentity() const;

    MCNAPI void $startShutdown();

    MCNAPI bool $isShuttingDown() const;

    MCNAPI bool $checkShutdownDone();

    MCNAPI bool $loadData(std::string_view, std::string&, ::DBHelpers::Category) const;

    MCNAPI ::Core::LevelStorageResult $getState() const;

    MCNAPI std::vector<SnapshotFilenameAndLength> $createSnapshot(std::string const&, bool);

    MCNAPI void $releaseSnapshot();

    MCNAPI ::Bedrock::Threading::Async<void> $compactStorage();

    MCNAPI void $syncAndSuspendStorage();

    MCNAPI void $resumeStorage();

    MCNAPI void $setFlushAllowed(bool);

    MCNAPI void $flushToPermanentStorage();

    MCNAPI void $freeCaches();

    MCNAPI void $setCompactionCallback(std::function<void(CompactionStatus)>);

    MCNAPI void $setCriticalSyncSaveCallback(std::function<void()>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
