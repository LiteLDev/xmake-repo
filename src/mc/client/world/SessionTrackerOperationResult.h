#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SessionTrackerOperationResult : int {
    NoChange = 0,
    Added    = 1,
    Updated  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SessionTrackerOperationResult : int {
    NoChange = 0,
    Added    = 1,
    Updated  = 2,
};
#else // @header-generator platform
enum class SessionTrackerOperationResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
