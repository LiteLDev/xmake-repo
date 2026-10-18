#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/resource_processing/util/EventType.h"
#include "mc/platform/UUID.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Resources::PackDirectoryIterator {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct Event {};
#endif // @header-generator platform

} // namespace Bedrock::Resources::PackDirectoryIterator
