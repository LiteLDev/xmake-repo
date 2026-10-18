#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { struct PooledFileHandle; }
// clang-format on

namespace Core {

class FileHandlePool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mHandles;
    // NOLINTEND
};

} // namespace Core
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
