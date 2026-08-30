#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/resource_processing/util/EventType.h"
#include "mc/platform/UUID.h"

namespace Bedrock::Resources::PackDirectoryIterator {

struct Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>             mType;
    ::ll::UntypedStorage<1, 24>            mPath;
    ::ll::UntypedStorage<8, 24>            mMinEngineVersion;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mPackUUID;
    // NOLINTEND
};

} // namespace Bedrock::Resources::PackDirectoryIterator
