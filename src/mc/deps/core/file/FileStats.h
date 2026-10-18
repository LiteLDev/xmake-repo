#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSuccessfulWriteOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumBytesWritten;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumFailedWriteOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumSuccessfulReadOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumBytesRead;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mNumFailedReadOperations;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mFileSystemSize;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mFileSystemAllocatedSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk954c4f;
    ::ll::UntypedStorage<8, 8> mUnk34e919;
    ::ll::UntypedStorage<8, 8> mUnk9b7184;
    ::ll::UntypedStorage<8, 8> mUnk466072;
    ::ll::UntypedStorage<8, 8> mUnkfe28ac;
    ::ll::UntypedStorage<8, 8> mUnk6d82ec;
    ::ll::UntypedStorage<8, 8> mUnk6a1655;
    ::ll::UntypedStorage<8, 8> mUnkc48866;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    FileStats& operator=(FileStats const&);
    FileStats(FileStats const&);
    FileStats();
#endif // @header-generator platform
};

} // namespace Core
