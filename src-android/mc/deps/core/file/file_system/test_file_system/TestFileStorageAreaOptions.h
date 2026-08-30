#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"

namespace Bedrock {

struct TestFileStorageAreaOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                     suggestedSize;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                     maxExtendedSize;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                     journalSize;
    ::ll::TypedStorage<4, 8, std::optional<Core::CrossStorageCopyMode>> copyMode;
    ::ll::UntypedStorage<8, 48>                                         beforeWrite;
    ::ll::UntypedStorage<8, 48>                                         getCurrentTime;
    ::ll::UntypedStorage<1, 16>                                         supportsSizeQuery;
    // NOLINTEND
};

} // namespace Bedrock
