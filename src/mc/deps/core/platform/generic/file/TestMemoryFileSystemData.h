#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemData.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct TestFileStorageAreaOptions; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct TestMemoryFileSystemData : public ::Core::MemoryFileSystemData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                     mTotalSpace;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                     mJournalSize;
    ::ll::TypedStorage<4, 8, std::optional<Core::CrossStorageCopyMode>> mCopyMode;
    ::ll::UntypedStorage<8, 16>                                         mBytesWrittenSinceLastCommit;
    ::ll::UntypedStorage<8, 48>                                         mBeforeWrite;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk65452a;
    ::ll::UntypedStorage<8, 16> mUnk963337;
    ::ll::UntypedStorage<4, 8>  mUnk40cd67;
    ::ll::UntypedStorage<8, 8>  mUnkfe2e25;
    ::ll::UntypedStorage<8, 64> mUnk63a6d7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TestMemoryFileSystemData& operator=(TestMemoryFileSystemData const&);
    TestMemoryFileSystemData(TestMemoryFileSystemData const&);
#endif // @header-generator platform
    TestMemoryFileSystemData();
};

} // namespace Bedrock
