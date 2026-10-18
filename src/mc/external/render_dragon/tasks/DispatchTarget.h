#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::tasks::coroutine {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DispatchTarget : int {
    Resource  = 0,
    Rendering = 1,
};
#else // @header-generator platform
enum class DispatchTarget : int {};
#endif // @header-generator platform

}
