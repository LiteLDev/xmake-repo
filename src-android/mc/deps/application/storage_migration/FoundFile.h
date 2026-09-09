#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Bedrock::StorageMigration {

struct FoundFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mSourceFile;
    ::ll::UntypedStorage<8, 24>     mDestinationFile;
    ::ll::TypedStorage<8, 8, ulong> mByteSize;
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
