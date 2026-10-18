#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FacetTaskState : int {
    Idle      = 0,
    Running   = 1,
    Done      = 2,
    Cancelled = 3,
    Failed    = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FacetTaskState : int {
    Idle      = 0,
    Running   = 1,
    Done      = 2,
    Cancelled = 3,
    Failed    = 4,
};
#else // @header-generator platform
enum class FacetTaskState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
