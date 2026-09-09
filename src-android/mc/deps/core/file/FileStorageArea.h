#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStats.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaState.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileIndexLru; }
namespace Core { class FileStorageAreaObserver; }
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { class SingleThreadedLock; }
namespace Core { class StorageAreaStateListener; }
namespace Core { class StorageAreasTree; }
// clang-format on

namespace Core {

class FileStorageArea : public ::std::enable_shared_from_this<Core::FileStorageArea> {
public:
    // FileStorageArea inner types declare
    // clang-format off
    struct StorageAreaSpaceInfo;
    // clang-format on

    // FileStorageArea inner types define
    enum class FlushableLevelDbEnvType : int {
        None        = 0,
        InMemory    = 1,
        StorageArea = 2,
    };

    struct StorageAreaSpaceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> freeSpace;
        ::ll::TypedStorage<8, 8, ulong> usedSpace;
        ::ll::TypedStorage<8, 8, ulong> totalCapacity;
        ::ll::TypedStorage<1, 1, bool>  canExtendSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::recursive_mutex>                           mLock;
    ::ll::TypedStorage<8, 24, std::vector<Core::FileSystemImpl*>>             mAllTransactions;
    ::ll::TypedStorage<1, 1, bool>                                            mCanAttemptExtendSave;
    ::ll::TypedStorage<1, 1, bool>                                            mCachedFileUsageSize;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                              mTransactionStats;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                              mTotalStats;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>>         mParent;
    ::ll::TypedStorage<4, 4, ::Core::FileAccessType>                          mAccessType;
    ::ll::UntypedStorage<8, 24>                                               mRootPath;
    ::ll::TypedStorage<8, 24, std::vector<Core::FileSystemImpl*>>             mWriteTransactions;
    ::ll::UntypedStorage<8, 32>                                               mSubject;
    ::ll::TypedStorage<8, 96, ::Core::StorageAreaState>                       mState;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                               mFileIOSuspended;
    ::ll::TypedStorage<8, 64, std::condition_variable_any>                    mResumeSignal;
    ::ll::TypedStorage<1, 1, bool>                                            mLoggingEnabled;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FlatFileManifestTracker>> mManifestTracker;
    ::ll::TypedStorage<1, 1, bool>                                            mIsAccessedDirectly;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FileStorageArea();

    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType, ::Core::TransactionFlags);

    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType) = 0;

    virtual bool supportsSizeQuery() const = 0;

    virtual ulong getTotalSize() const = 0;

    virtual ::Core::Result getUsedSize(ulong&) = 0;

    virtual void setUsedSizeOverride(ulong);

    virtual void clearUsedSizeOverride();

    virtual void notifyChangeInFileSize(long, long);

    virtual bool handlesPendingWrites() const;

    virtual void informPendingWriteSize(ulong, bool const);

    virtual ulong estimatePendingWriteDiskSize(ulong) const;

    virtual void informStorageAreaCopy(ulong);

    virtual bool supportsExtendSize() const;

    virtual bool canExtendSize() const;

    virtual void resetCanAttemptExtendSize();

    virtual ::Core::Result getExtendSizeThreshold(ulong&) const;

    virtual void attemptExtendSize(long const&, std::function<void ()>);

    virtual void preemptiveExtendSize(ulong const, std::function<void ()>, std::function<void ()>);

    virtual ulong getAvailableUserStorageSize();

    virtual void unloadFlatFileManifests(bool);

    virtual void tick();

    virtual void flushImmediately(::Core::PathView);

    virtual void enableFlushToDisk(bool);

    virtual void enableSequentialWrites(bool);

    virtual bool checkCorrupt(bool);

    virtual ::Bedrock::NonOwnerPointer<Core::FileIndexLru> getFileIndexLru();

    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    virtual ulong getTransactionWriteSizeLimit() const;

    virtual ::Core::Result setSaveDataIcon(::Core::PathView);

    virtual bool shouldAllowCommit() const;

    virtual void trackBytesWritten(::Core::PathView, ulong, ::Core::WriteOperation);

    virtual void trackWriteOperation(::Core::PathView, ::Core::WriteOperation);

    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    virtual bool shouldRecordFileError(::Core::PathView, std::error_code) const;

    virtual ::Core::Result _commit();

    virtual ::Core::Result _onTransactionsEmpty(bool);

    virtual void _onTeardown();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    FileStorageArea(::Core::FileAccessType, ::Core::PathView, bool, bool, std::shared_ptr<Core::FileStorageArea>);

    MCNAPI void _addReadOperation(bool, ulong);

    MCNAPI void _addReadWriteOperation(bool, ulong, ulong);

    MCNAPI void _addWriteOperation(bool, ulong);

    MCNAPI void _beginTransaction(::Core::FileSystemImpl*, bool);

    MCNAPI ::Core::Result _endTransaction(::Core::FileSystemImpl*, bool);

    MCNAPI void _onDeleteFile(::Core::PathView);

    MCNAPI void _onWriteFile(::Core::PathView);

    MCNAPI void addObserver(::Core::FileStorageAreaObserver&);

    MCNAPI void checkUserStorage();

    MCNAPI ulong getRestrictedMaximumFileSize() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getRootPath() const;

    MCNAPI void setLoggingEnabled(bool);

    MCNAPI bool supportsFlatFiles() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea>&, ::Core::PathView);

    MCNAPI static ::Core::Result getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea>&, ::Core::PathView);

    MCNAPI static void getTotalBytesWrittenAndReadFromAllStorageAreas(ulong&, ulong&);

    MCNAPI static void teardown();

    MCNAPI static ::Core::Result unloadAllStorageAreaFlatFileManifests(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::BasicLockbox<std::vector<Core::FileStats*>, std::mutex>&
    sStorageAreaFileStats();

    MCNAPI static ::Core::StorageAreasTree& sStorageAreas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FileAccessType, ::Core::PathView, bool, bool, std::shared_ptr<Core::FileStorageArea>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Core::FileSystemImpl> $createTransaction(::Core::FileAccessType, ::Core::TransactionFlags);

    MCNAPI void $setUsedSizeOverride(ulong);

    MCNAPI void $clearUsedSizeOverride();

    MCNAPI void $notifyChangeInFileSize(long, long);

    MCNAPI bool $handlesPendingWrites() const;

    MCNAPI void $informPendingWriteSize(ulong, bool const);

    MCNAPI ulong $estimatePendingWriteDiskSize(ulong) const;

    MCNAPI void $informStorageAreaCopy(ulong);

    MCNAPI bool $supportsExtendSize() const;

    MCNAPI bool $canExtendSize() const;

    MCNAPI void $resetCanAttemptExtendSize();

    MCNAPI ::Core::Result $getExtendSizeThreshold(ulong&) const;

    MCNAPI void $attemptExtendSize(long const&, std::function<void()>);

    MCNAPI void $preemptiveExtendSize(ulong const, std::function<void()>, std::function<void()>);

    MCNAPI ulong $getAvailableUserStorageSize();

    MCNAPI void $unloadFlatFileManifests(bool);

    MCNAPI void $tick();

    MCNAPI void $flushImmediately(::Core::PathView);

    MCNAPI void $enableFlushToDisk(bool);

    MCNAPI void $enableSequentialWrites(bool);

    MCNAPI bool $checkCorrupt(bool);

    MCNAPI ::Bedrock::NonOwnerPointer<Core::FileIndexLru> $getFileIndexLru();

    MCNAPI ::Core::FileStorageArea::FlushableLevelDbEnvType $getFlushableLevelDbEnvType() const;

    MCNAPI ulong $getTransactionWriteSizeLimit() const;

    MCNAPI ::Core::Result $setSaveDataIcon(::Core::PathView);

    MCNAPI bool $shouldAllowCommit() const;

    MCNAPI void $trackBytesWritten(::Core::PathView, ulong, ::Core::WriteOperation);

    MCNAPI void $trackWriteOperation(::Core::PathView, ::Core::WriteOperation);

    MCNAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();

    MCNAPI bool $shouldRecordFileError(::Core::PathView, std::error_code) const;

    MCNAPI ::Core::Result $_commit();

    MCNAPI ::Core::Result $_onTransactionsEmpty(bool);

    MCNAPI void $_onTeardown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
