#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileStorageArea.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class MemoryFileSystem; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class WriteBufferedFileStorageArea : public ::Core::FileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::FileStorageArea>>    mTargetStorageArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::MemoryFileSystem>> mMemoryFileSystem;
    ::ll::UntypedStorage<8, 40>                                        mDiskFilesMarkedForDelete;
    ::ll::TypedStorage<4, 40, std::mutex>                              mDiskFilesMarkedForDeleteMutex;
    ::ll::UntypedStorage<8, 24>                                        mIgnoredDirectories;
    ::ll::TypedStorage<1, 1, bool>                                     mBufferEnabled;
    ::ll::TypedStorage<1, 1, bool>                                     mHadWritesWhileDisabled;
    ::ll::TypedStorage<1, 1, bool>                                     mDirectoryStructureReady;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteBufferedFileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WriteBufferedFileStorageArea() = default;

    virtual std::unique_ptr<Core::FileSystemImpl> createTransaction(::Core::FileAccessType);

    virtual bool supportsSizeQuery() const;

    virtual ulong getTotalSize() const;

    virtual ::Core::Result getUsedSize(ulong&);

    virtual bool handlesPendingWrites() const;

    virtual void informPendingWriteSize(ulong, bool const);

    virtual ulong estimatePendingWriteDiskSize(ulong) const;

    virtual void informStorageAreaCopy(ulong);

    virtual void flushImmediately(::Core::PathView);

    virtual void enableFlushToDisk(bool);

    virtual bool checkCorrupt(bool);

    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    virtual ulong getTransactionWriteSizeLimit() const;

    virtual ::Core::Result setSaveDataIcon(::Core::PathView);

    virtual void _onTeardown();
    // NOLINTEND
};

} // namespace Core
