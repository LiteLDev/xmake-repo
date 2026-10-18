#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/LevelStorageResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/flat_set.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/storage/DBStoragePerformanceTelemetry.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/LevelStorageWriteBatch.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/db_helpers/OperationType.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CommitOperation;
    class DBStorageToken;
#endif // @header-generator platform
    class Options;
    struct PendingWriteResult;
#if defined(LL_PLAT_A) // @header-generator platform
    class DBStorageToken;
    struct CommitOperation;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // DBStorage inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CommitOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                    mKey;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string>> mValue;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>             mCategory;
        ::ll::TypedStorage<1, 1, bool>                              mIsDelete;
        // NOLINTEND
    };

    class DBStorageToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::atomic<int>*> mRefCounter;
        // NOLINTEND
    };

#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string const>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                                    mIsDeleted;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DBStorageEnvironmentChain>>        mEnvChain;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::Cache>>                   mCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::FilterPolicy const>>      mFilterPolicy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DBStorage::Options>>               mOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::DecompressAllocator>>     mDecompressAllocator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::leveldb::DB>>                      mDb;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mCompactionTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                    mCompactionTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                    mWriteTask;
    ::ll::TypedStorage<8, 40, ::Core::LevelStorageResult>                           mState;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*>                              mContentIdentity;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mFullPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mDbPath;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mLevelId;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mCompactionMutex;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                   mWriteCacheMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mCacheFlushMutex;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>               mLastCompactionStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mCompactionInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mWriteFlushInterval;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mAllowFlush;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mSavingInProgress;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mSnapshotInProgress;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mShutdownStarted;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mNoMoreWrites;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                   mShutdownDone;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                                    mOutstandingJobs;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SaveTransactionManager>> mSaveTransactionManager;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                              mCriticalSyncSaveCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::CompactionStatus)>> mExternallyRegisteredCompactionCallback;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<::DBChunkStorage*, ::std::less<::DBChunkStorage*>, ::std::vector<::DBChunkStorage*>>>
                                                                                           mChunkStorages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LevelStorageObserver>>>    mObservers;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                          mDestructorInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                         mForceCorrupt;
    ::ll::TypedStorage<1, 1, bool const>                                                   mStorageEnabled;
    ::ll::TypedStorage<1, 1, bool const>                                                   mJigsawPersistenceToggle;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                           mDbSubfolder;
    ::ll::TypedStorage<8, 128, ::LevelStorageWriteBatch>                                   mSingleKeyWrites;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelStorageWriteBatch>>                     mBatchWrites;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageEventing>>                    mEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                 mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DBStorageFolderWatcher>>> mFolderTelemetryWatcher;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSizeTelemetryCaptureTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds const>        mSizeTelemetryCaptureInterval;
    ::ll::TypedStorage<8, 192, ::DBStoragePerformanceTelemetry>       mDBStoragePerformanceTelemetry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DBStorage();
#else // @header-generator platform
    virtual ~DBStorage() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addStorageObserver(std::unique_ptr<LevelStorageObserver>);
#else // @header-generator platform
    virtual void addStorageObserver(::std::unique_ptr<::LevelStorageObserver> observer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadedSuccessfully() const;
#else // @header-generator platform
    virtual bool loadedSuccessfully() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> getCompoundTag(std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    virtual ::Core::LevelStorageResult getState() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasKey(std::string_view, ::DBHelpers::Category) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkSource>
    createChunkStorage(::std::unique_ptr<::ChunkSource> generator, ::StorageVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachKeyWithPrefix(std::string_view, ::DBHelpers::Category, std::function<void (std::string_view, std::string_view)> const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getFullPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadLevelData(::LevelData&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag>
    getCompoundTag(::std::string const& key, ::DBHelpers::Category category) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkSource> createChunkStorage(std::unique_ptr<ChunkSource>, ::StorageVersion);
#else // @header-generator platform
    virtual bool hasKey(::std::string_view key, ::DBHelpers::Category category) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLevelData(::LevelData const&);
#else // @header-generator platform
    virtual bool loadLevelData(::LevelData& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getFullPath() const;
#else // @header-generator platform
    virtual void saveLevelData(::LevelData const& levelData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void>
    saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> saveData(std::string const&, std::string&&, ::DBHelpers::Category);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> saveData(::LevelStorageWriteBatch const& batch) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> deleteData(std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void>
    deleteData(::std::string const& key, ::DBHelpers::Category category) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getStatistics(std::string&, ::LevelStorage::StatsType) const;
#else // @header-generator platform
    virtual bool loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::LevelStorageResult getLevelStorageState() const;
#else // @header-generator platform
    virtual void forEachKeyWithPrefix(
        ::std::string_view                                                   prefix,
        ::DBHelpers::Category                                                category,
        ::std::function<void(::std::string_view, ::std::string_view)> const& callback
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContentIdentity const* getContentIdentity() const;
#else // @header-generator platform
    virtual ::Core::LevelStorageResult getLevelStorageState() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startShutdown();
#else // @header-generator platform
    virtual ::ContentIdentity const* getContentIdentity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isShuttingDown() const;
#else // @header-generator platform
    virtual void startShutdown() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkShutdownDone();
#else // @header-generator platform
    virtual bool isShuttingDown() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadData(std::string_view, std::string&, ::DBHelpers::Category) const;
#else // @header-generator platform
    virtual bool checkShutdownDone() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::LevelStorageResult getState() const;
#else // @header-generator platform
    virtual void getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<SnapshotFilenameAndLength> createSnapshot(std::string const&, bool);
#else // @header-generator platform
    virtual ::std::vector<::SnapshotFilenameAndLength>
    createSnapshot(::std::string const& filePrefix, bool flushWriteCache) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseSnapshot();
#else // @header-generator platform
    virtual void releaseSnapshot() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> compactStorage();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> compactStorage() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void syncAndSuspendStorage();
#else // @header-generator platform
    virtual void syncAndSuspendStorage() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resumeStorage();
#else // @header-generator platform
    virtual void resumeStorage() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFlushAllowed(bool);
#else // @header-generator platform
    virtual void setFlushAllowed(bool flushAllowed) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushToPermanentStorage();
#else // @header-generator platform
    virtual void flushToPermanentStorage() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void freeCaches();
#else // @header-generator platform
    virtual void freeCaches() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCompactionCallback(std::function<void (CompactionStatus)>);
#else // @header-generator platform
    virtual void setCompactionCallback(::std::function<void(::CompactionStatus)> callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCriticalSyncSaveCallback(std::function<void ()>);
    // clang-format on
#else // @header-generator platform
    virtual void setCriticalSyncSaveCallback(::std::function<void()> callback) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DBStorage(::DBStorageConfig, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>);
#else // @header-generator platform
    MCAPI DBStorage(::DBStorageConfig config, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TaskResult _flushWriteCacheToLevelDB();
#else // @header-generator platform
    MCAPI ::TaskResult _flushWriteCacheToLevelDB();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getTelemetryMessage(::leveldb::Status const&) const;
#else // @header-generator platform
    MCAPI ::std::string _getTelemetryMessage(::leveldb::Status const& status) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DBStorage::PendingWriteResult _readPendingWrite(std::string const&, ::DBHelpers::Category) const;
#else // @header-generator platform
    MCAPI ::DBStorage::PendingWriteResult
    _readPendingWrite(::std::string const& key, ::DBHelpers::Category category) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TaskGroup& getTaskGroup();

    MCNAPI bool tryRepair(::Core::Path const&) const;
#else // @header-generator platform
    MCAPI bool tryRepair(::Core::Path const& path) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DBStorageConfig, ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::DBStorageConfig config, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addStorageObserver(std::unique_ptr<LevelStorageObserver>);
#else // @header-generator platform
    MCAPI void $addStorageObserver(::std::unique_ptr<::LevelStorageObserver> observer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadedSuccessfully() const;
#else // @header-generator platform
    MCFOLD bool $loadedSuccessfully() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $getCompoundTag(std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI ::Core::LevelStorageResult $getState() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasKey(std::string_view, ::DBHelpers::Category) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ChunkSource>
    $createChunkStorage(::std::unique_ptr<::ChunkSource> generator, ::StorageVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachKeyWithPrefix(
        std::string_view,
        ::DBHelpers::Category,
        std::function<void(std::string_view, std::string_view)> const&
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const& $getFullPath() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $getCompoundTag(::std::string const& key, ::DBHelpers::Category category);

    MCAPI bool $hasKey(::std::string_view key, ::DBHelpers::Category category) const;

    MCAPI bool $loadLevelData(::LevelData& data);

    MCAPI void $saveLevelData(::LevelData const& levelData);

    MCAPI ::Bedrock::Threading::Async<void>
    $saveData(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCAPI ::Bedrock::Threading::Async<void> $saveData(::LevelStorageWriteBatch const& batch);

    MCAPI ::Bedrock::Threading::Async<void> $deleteData(::std::string const& key, ::DBHelpers::Category category);

    MCAPI bool $loadData(::std::string_view key, ::std::string& buffer, ::DBHelpers::Category category) const;

    MCAPI void $forEachKeyWithPrefix(
        ::std::string_view                                                   prefix,
        ::DBHelpers::Category                                                category,
        ::std::function<void(::std::string_view, ::std::string_view)> const& callback
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadLevelData(::LevelData&);
#else // @header-generator platform
    MCAPI ::Core::LevelStorageResult $getLevelStorageState() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ChunkSource> $createChunkStorage(std::unique_ptr<ChunkSource>, ::StorageVersion);
#else // @header-generator platform
    MCFOLD ::ContentIdentity const* $getContentIdentity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $saveLevelData(::LevelData const&);
#else // @header-generator platform
    MCAPI void $startShutdown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const& $getFullPath() const;
#else // @header-generator platform
    MCAPI bool $isShuttingDown() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> $saveData(::LevelStorageWriteBatch const&);
#else // @header-generator platform
    MCAPI bool $checkShutdownDone();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> $saveData(std::string const&, std::string&&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void $getStatistics(::std::string& outStats, ::LevelStorage::StatsType statsType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> $deleteData(std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI ::std::vector<::SnapshotFilenameAndLength>
    $createSnapshot(::std::string const& filePrefix, bool flushWriteCache);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getStatistics(std::string&, ::LevelStorage::StatsType) const;
#else // @header-generator platform
    MCAPI void $releaseSnapshot();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::LevelStorageResult $getLevelStorageState() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void> $compactStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContentIdentity const* $getContentIdentity() const;
#else // @header-generator platform
    MCAPI void $syncAndSuspendStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startShutdown();
#else // @header-generator platform
    MCAPI void $resumeStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isShuttingDown() const;
#else // @header-generator platform
    MCAPI void $setFlushAllowed(bool flushAllowed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkShutdownDone();
#else // @header-generator platform
    MCAPI void $flushToPermanentStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadData(std::string_view, std::string&, ::DBHelpers::Category) const;
#else // @header-generator platform
    MCAPI void $freeCaches();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::LevelStorageResult $getState() const;
#else // @header-generator platform
    MCAPI void $setCompactionCallback(::std::function<void(::CompactionStatus)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<SnapshotFilenameAndLength> $createSnapshot(std::string const&, bool);
#else // @header-generator platform
    MCAPI void $setCriticalSyncSaveCallback(::std::function<void()> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseSnapshot();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
