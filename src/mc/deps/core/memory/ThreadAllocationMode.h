#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ThreadAllocationMode : int {
    Concurrent = 0,
    Locked     = 1,
};
#else // @header-generator platform
enum class ThreadAllocationMode : int {};
#endif // @header-generator platform

}
