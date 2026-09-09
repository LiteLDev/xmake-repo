#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntryDir.h"

namespace Core {

struct MemoryFileSystemData {
public:
    // MemoryFileSystemData inner types declare
    // clang-format off
    struct WriteOp;
    // clang-format on

    // MemoryFileSystemData inner types define
    struct WriteOp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>     writePath;
        ::ll::TypedStorage<8, 8, ulong> writeSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 48>                                                 mMutex;
    ::ll::UntypedStorage<8, 288>                                                mRootDir;
    ::ll::TypedStorage<4, 40, std::mutex>                                       mWriteOpMutex;
    ::ll::TypedStorage<8, 24, std::vector<Core::MemoryFileSystemData::WriteOp>> mWriteOps;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemData();
};

} // namespace Core
