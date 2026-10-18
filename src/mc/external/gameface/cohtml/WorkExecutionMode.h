#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
enum WorkExecutionMode : uint {
    WEM_UntilQueueEmpty = 0,
    WEM_UntilQuit       = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class WorkExecutionMode : int {
    UntilQueueEmpty = 0,
    UntilQuit       = 1,
};
#else // @header-generator platform
enum class WorkExecutionMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
