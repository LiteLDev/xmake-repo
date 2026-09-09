#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Bedrock::StorageMigration {

struct ManifestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStatus;
    ::ll::UntypedStorage<8, 24>            mIndexData;
    ::ll::UntypedStorage<8, 24>            mManifestFilePath;
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
