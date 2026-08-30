#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSuccessfulWriteOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumBytesWritten;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumFailedWriteOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSuccessfulReadOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumBytesRead;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumFailedReadOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mFileSystemSize;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mFileSystemAllocatedSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addReadOperation(bool, ulong);

    MCNAPI void addReadWriteOperation(bool, ulong, ulong);

    MCNAPI void addWriteOperation(bool, ulong);

    MCNAPI ulong getAllocatedUsedFileSystemSize() const;

    MCNAPI ulong getUsedFileSystemSize() const;

    MCNAPI void notifyChangeInFileSize(long, long);

    MCNAPI void setFileSystemUsedSize(long, long);
    // NOLINTEND
};

} // namespace Core
