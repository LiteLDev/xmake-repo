#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStats.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/LevelStorageState.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaState.h"
#include "mc/deps/core/file/WriteOperation.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#endif // @header-generator platform
#include "mc/deps/core/utility/Subject.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
namespace Core { class FileIndexLru; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileStorageAreaObserver; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class SingleThreadedLock; }
namespace Core { class StorageAreaStateListener; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class StorageAreasTree; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Core { class FileStorageAreaObserver; }
#endif // @header-generator platform
// clang-format on

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class FileStorageArea : public ::std::enable_shared_from_this<Core::FileStorageArea> {
#else // @header-generator platform
class FileStorageArea : public ::std::enable_shared_from_this<::Core::FileStorageArea> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> freeSpace;
        ::ll::TypedStorage<8, 8, ulong> usedSpace;
        ::ll::TypedStorage<8, 8, ulong> totalCapacity;
        ::ll::TypedStorage<1, 1, bool>  canExtendSize;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnka44c95;
        ::ll::UntypedStorage<8, 8> mUnk545140;
        ::ll::UntypedStorage<8, 8> mUnkd44356;
        ::ll::UntypedStorage<1, 1> mUnka493f5;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        StorageAreaSpaceInfo& operator=(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                     mLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::FileSystemImpl*>>     mAllTransactions;
    ::ll::TypedStorage<1, 1, bool>                                        mCanAttemptExtendSave;
    ::ll::TypedStorage<1, 1, bool>                                        mCachedFileUsageSize;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                          mTransactionStats;
    ::ll::TypedStorage<8, 64, ::Core::FileStats>                          mTotalStats;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>> mParent;
    ::ll::TypedStorage<4, 4, ::Core::FileAccessType>                      mAccessType;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>          mRootPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::FileSystemImpl*>>     mWriteTransactions;
    ::ll::TypedStorage<8, 32, ::Core::Subject<::Core::FileStorageAreaObserver, ::Core::SingleThreadedLock>> mSubject;
    ::ll::TypedStorage<8, 144, ::Core::StorageAreaState>                                                    mState;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                 mFileIOSuspended;
    ::ll::TypedStorage<8, 88, ::std::condition_variable_any>                      mResumeSignal;
    ::ll::TypedStorage<1, 1, bool>                                                mLoggingEnabled;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FlatFileManifestTracker>> mManifestTracker;
    ::ll::TypedStorage<1, 1, bool>                                                mIsAccessedDirectly;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~FileStorageArea();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType, ::Core::TransactionFlags);
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType accessType) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileSystemImpl>
    createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);
#endif // @header-generator platform

    virtual bool supportsSizeQuery() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTotalSize() const = 0;
#else // @header-generator platform
    virtual uint64 getTotalSize() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getUsedSize(ulong&) = 0;
#else // @header-generator platform
    virtual ::Core::Result getUsedSize(uint64& outUsedSize) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUsedSizeOverride(ulong);
#else // @header-generator platform
    virtual void setUsedSizeOverride(uint64 fileSize);
#endif // @header-generator platform

    virtual void clearUsedSizeOverride();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifyChangeInFileSize(long, long);
#else // @header-generator platform
    virtual void notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);
#endif // @header-generator platform

    virtual bool handlesPendingWrites() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void informPendingWriteSize(ulong, bool const);
#else // @header-generator platform
    virtual void informPendingWriteSize(uint64, bool const);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong estimatePendingWriteDiskSize(ulong) const;
#else // @header-generator platform
    virtual uint64 estimatePendingWriteDiskSize(uint64 rawFileSize) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void informStorageAreaCopy(ulong);
#else // @header-generator platform
    virtual void informStorageAreaCopy(uint64);
#endif // @header-generator platform

    virtual bool supportsExtendSize() const;

    virtual bool canExtendSize() const;

    virtual void resetCanAttemptExtendSize();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result getExtendSizeThreshold(ulong&) const;
#else // @header-generator platform
    virtual ::Core::Result getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void attemptExtendSize(long const&, std::function<void ()>);
#else // @header-generator platform
    virtual void attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preemptiveExtendSize(ulong const, std::function<void ()>, std::function<void ()>);
#else // @header-generator platform
    virtual void preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getAvailableUserStorageSize();
#else // @header-generator platform
    virtual uint64 getAvailableUserStorageSize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unloadFlatFileManifests(bool);
#else // @header-generator platform
    virtual void unloadFlatFileManifests(bool shouldClearManifests);
#endif // @header-generator platform

    virtual void tick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flushImmediately(::Core::PathView);
#else // @header-generator platform
    virtual void flushImmediately(::Core::PathView flushPath);
#endif // @header-generator platform

    virtual void enableFlushToDisk(bool);

    virtual void enableSequentialWrites(bool);

    virtual bool checkCorrupt(bool);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<Core::FileIndexLru> getFileIndexLru();
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::Core::FileIndexLru> getFileIndexLru();
#endif // @header-generator platform

    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getTransactionWriteSizeLimit() const;
#else // @header-generator platform
    virtual uint64 getTransactionWriteSizeLimit() const;
#endif // @header-generator platform

    virtual ::Core::Result setSaveDataIcon(::Core::PathView);

    virtual bool shouldAllowCommit() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void trackBytesWritten(::Core::PathView, ulong, ::Core::WriteOperation);
#else // @header-generator platform
    virtual void trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void trackWriteOperation(::Core::PathView, ::Core::WriteOperation);
#else // @header-generator platform
    virtual void trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);
#endif // @header-generator platform

    virtual ::Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldRecordFileError(::Core::PathView, std::error_code) const;
#else // @header-generator platform
    virtual bool shouldRecordFileError(::Core::PathView path, ::std::error_code error) const;
#endif // @header-generator platform

    virtual ::Core::Result _commit();

    virtual ::Core::Result _onTransactionsEmpty(bool);

    virtual void _onTeardown();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    FileStorageArea(::Core::FileAccessType, ::Core::PathView, bool, bool, std::shared_ptr<Core::FileStorageArea>);
#else // @header-generator platform
    MCAPI FileStorageArea(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       isAccessedDirectly,
        ::std::shared_ptr<::Core::FileStorageArea> parent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addReadOperation(bool, ulong);
#else // @header-generator platform
    MCAPI void _addReadOperation(bool succeeded, uint64 numBytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addReadWriteOperation(bool, ulong, ulong);
#else // @header-generator platform
    MCAPI void _addWriteOperation(bool succeeded, uint64 numBytesWritten);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addWriteOperation(bool, ulong);
#else // @header-generator platform
    MCAPI void _beginTransaction(::Core::FileSystemImpl* pTransaction, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _beginTransaction(::Core::FileSystemImpl*, bool);
#else // @header-generator platform
    MCAPI ::Core::Result _endTransaction(::Core::FileSystemImpl* pTransaction, bool fromChild);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result _endTransaction(::Core::FileSystemImpl*, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addObserver(::Core::FileStorageAreaObserver& observer);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onDeleteFile(::Core::PathView);

    MCNAPI void _onWriteFile(::Core::PathView);

    MCNAPI void addObserver(::Core::FileStorageAreaObserver&);

    MCNAPI void checkUserStorage();

    MCNAPI ulong getRestrictedMaximumFileSize() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getRootPath() const;

    MCNAPI void setLoggingEnabled(bool);

    MCNAPI bool supportsFlatFiles() const;
#else // @header-generator platform
    MCAPI void checkUserStorage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result _getStorageAreaForPathImpl(std::shared_ptr<Core::FileStorageArea>&, ::Core::PathView);
#else // @header-generator platform
    MCAPI static ::Core::Result
    _getStorageAreaForPathImpl(::std::shared_ptr<::Core::FileStorageArea>& fileStorageArea, ::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result getStorageAreaForPath(std::shared_ptr<Core::FileStorageArea>&, ::Core::PathView);

    MCNAPI static void getTotalBytesWrittenAndReadFromAllStorageAreas(ulong&, ulong&);

    MCNAPI static void teardown();

    MCNAPI static ::Core::Result unloadAllStorageAreaFlatFileManifests(bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void tickStorageAreas();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::BasicLockbox<std::vector<Core::FileStats*>, std::mutex>&
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::BasicLockbox<::std::vector<::Core::FileStats*>, ::Bedrock::Threading::Mutex>&
#endif // @header-generator platform
    sStorageAreaFileStats();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::StorageAreasTree& sStorageAreas();
#else // @header-generator platform
    MCAPI static ::Core::StorageAreasTree& sStorageAreas();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::FileAccessType, ::Core::PathView, bool, bool, std::shared_ptr<Core::FileStorageArea>);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Core::FileAccessType                     type,
        ::Core::PathView                           rootPath,
        bool                                       usesFlatFiles,
        bool                                       isAccessedDirectly,
        ::std::shared_ptr<::Core::FileStorageArea> parent
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Core::FileSystemImpl> $createTransaction(::Core::FileAccessType, ::Core::TransactionFlags);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::Core::FileSystemImpl>
    $createTransaction(::Core::FileAccessType fileAccessType, ::Core::TransactionFlags);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setUsedSizeOverride(ulong);
#else // @header-generator platform
    MCFOLD void $setUsedSizeOverride(uint64 fileSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearUsedSizeOverride();
#else // @header-generator platform
    MCFOLD void $clearUsedSizeOverride();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifyChangeInFileSize(long, long);
#else // @header-generator platform
    MCAPI void $notifyChangeInFileSize(int64 changeInSize, int64 changeInAllocatedSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $handlesPendingWrites() const;
#else // @header-generator platform
    MCFOLD bool $handlesPendingWrites() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $informPendingWriteSize(ulong, bool const);
#else // @header-generator platform
    MCFOLD void $informPendingWriteSize(uint64, bool const);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $estimatePendingWriteDiskSize(ulong) const;
#else // @header-generator platform
    MCFOLD uint64 $estimatePendingWriteDiskSize(uint64 rawFileSize) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $informStorageAreaCopy(ulong);
#else // @header-generator platform
    MCFOLD void $informStorageAreaCopy(uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $supportsExtendSize() const;
#else // @header-generator platform
    MCFOLD bool $supportsExtendSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canExtendSize() const;
#else // @header-generator platform
    MCFOLD bool $canExtendSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetCanAttemptExtendSize();
#else // @header-generator platform
    MCAPI void $resetCanAttemptExtendSize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $getExtendSizeThreshold(ulong&) const;
#else // @header-generator platform
    MCAPI ::Core::Result $getExtendSizeThreshold(uint64& outExtendSizeThreshold) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $attemptExtendSize(long const&, std::function<void()>);
#else // @header-generator platform
    MCAPI void $attemptExtendSize(int64 const& currentFreeSpace, ::std::function<void()> onCompleteCallback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $preemptiveExtendSize(ulong const, std::function<void()>, std::function<void()>);
#else // @header-generator platform
    MCAPI void $preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getAvailableUserStorageSize();
#else // @header-generator platform
    MCAPI uint64 $getAvailableUserStorageSize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $unloadFlatFileManifests(bool);
#else // @header-generator platform
    MCAPI void $unloadFlatFileManifests(bool shouldClearManifests);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flushImmediately(::Core::PathView);
#else // @header-generator platform
    MCFOLD void $flushImmediately(::Core::PathView flushPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $enableFlushToDisk(bool);
#else // @header-generator platform
    MCFOLD void $enableFlushToDisk(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $enableSequentialWrites(bool);
#else // @header-generator platform
    MCFOLD void $enableSequentialWrites(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkCorrupt(bool);
#else // @header-generator platform
    MCFOLD bool $checkCorrupt(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<Core::FileIndexLru> $getFileIndexLru();
#else // @header-generator platform
    MCFOLD ::Bedrock::NonOwnerPointer<::Core::FileIndexLru> $getFileIndexLru();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::FileStorageArea::FlushableLevelDbEnvType $getFlushableLevelDbEnvType() const;
#else // @header-generator platform
    MCFOLD ::Core::FileStorageArea::FlushableLevelDbEnvType $getFlushableLevelDbEnvType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getTransactionWriteSizeLimit() const;
#else // @header-generator platform
    MCFOLD uint64 $getTransactionWriteSizeLimit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $setSaveDataIcon(::Core::PathView);
#else // @header-generator platform
    MCAPI ::Core::Result $setSaveDataIcon(::Core::PathView);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldAllowCommit() const;
#else // @header-generator platform
    MCAPI bool $shouldAllowCommit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $trackBytesWritten(::Core::PathView, ulong, ::Core::WriteOperation);
#else // @header-generator platform
    MCAPI void $trackBytesWritten(::Core::PathView targetPath, uint64 amount, ::Core::WriteOperation writeOperation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $trackWriteOperation(::Core::PathView, ::Core::WriteOperation);
#else // @header-generator platform
    MCAPI void $trackWriteOperation(::Core::PathView targetPath, ::Core::WriteOperation writeOperation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();
#else // @header-generator platform
    MCAPI ::Core::FileStorageArea::StorageAreaSpaceInfo $getStorageAreaSpaceInfo();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldRecordFileError(::Core::PathView, std::error_code) const;
#else // @header-generator platform
    MCFOLD bool $shouldRecordFileError(::Core::PathView path, ::std::error_code error) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_commit();
#else // @header-generator platform
    MCFOLD ::Core::Result $_commit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_onTransactionsEmpty(bool);
#else // @header-generator platform
    MCFOLD ::Core::Result $_onTransactionsEmpty(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onTeardown();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_onTeardown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
