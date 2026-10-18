#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntryDir.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>     writePath;
        ::ll::TypedStorage<8, 8, ulong> writeSize;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk7af2ba;
        ::ll::UntypedStorage<8, 8>  mUnka2604c;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        WriteOp& operator=(WriteOp const&);
        WriteOp(WriteOp const&);
        WriteOp();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 48>                                                 mMutex;
    ::ll::UntypedStorage<8, 288>                                                mRootDir;
    ::ll::TypedStorage<4, 40, std::mutex>                                       mWriteOpMutex;
    ::ll::TypedStorage<8, 24, std::vector<Core::MemoryFileSystemData::WriteOp>> mWriteOps;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80>  mUnkd1cd69;
    ::ll::UntypedStorage<8, 160> mUnkdadc03;
    ::ll::UntypedStorage<8, 80>  mUnkab95a9;
    ::ll::UntypedStorage<8, 24>  mUnk1459a2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MemoryFileSystemData& operator=(MemoryFileSystemData const&);
    MemoryFileSystemData(MemoryFileSystemData const&);
#endif // @header-generator platform
    MemoryFileSystemData();
};

} // namespace Core
