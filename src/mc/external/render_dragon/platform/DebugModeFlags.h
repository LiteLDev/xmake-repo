#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DebugModeFlags : uint {
    None         = 0,
    ViewProfiler = 1,
};
#else // @header-generator platform
enum class DebugModeFlags : uint {};
#endif // @header-generator platform

}
