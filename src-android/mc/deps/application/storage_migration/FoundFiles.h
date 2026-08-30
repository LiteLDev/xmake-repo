#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/FoundFile.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/ErrorInfo.h"

namespace Bedrock::StorageMigration {

struct FoundFiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>     mDetectionResult;
    ::ll::UntypedStorage<8, 40>     mFiles;
    ::ll::TypedStorage<8, 8, ulong> mTotalByteSize;
    ::ll::TypedStorage<8, 8, ulong> mNumFiles;
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
