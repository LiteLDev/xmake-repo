#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InitState : int {
    Begin    = 0,
    Pending  = 1,
    Finalize = 2,
    End      = 3,
    Failed   = 4,
};
#else // @header-generator platform
enum class InitState : int {};
#endif // @header-generator platform

}
