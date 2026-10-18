#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CapabilitySupport : int {
    None               = 0,
    ApiLimited         = 1,
    PerformanceLimited = 2,
    Full               = 3,
};
#else // @header-generator platform
enum class CapabilitySupport : int {};
#endif // @header-generator platform

}
