#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Screenshots {

#if defined(LL_PLAT_A) // @header-generator platform
struct FilePruneResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     files;
    ::ll::TypedStorage<8, 8, ulong> totalSize;
    // NOLINTEND
};
#else // @header-generator platform
struct FilePruneResult {};
#endif // @header-generator platform

} // namespace Screenshots
