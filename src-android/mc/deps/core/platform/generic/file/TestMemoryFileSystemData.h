#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemData.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct TestFileStorageAreaOptions; }
// clang-format on

namespace Bedrock {

struct TestMemoryFileSystemData : public ::Core::MemoryFileSystemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                     mTotalSpace;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                     mJournalSize;
    ::ll::TypedStorage<4, 8, std::optional<Core::CrossStorageCopyMode>> mCopyMode;
    ::ll::UntypedStorage<8, 16>                                         mBytesWrittenSinceLastCommit;
    ::ll::UntypedStorage<8, 48>                                         mBeforeWrite;
    // NOLINTEND

public:
    // prevent constructor by default
    TestMemoryFileSystemData();
};

} // namespace Bedrock
