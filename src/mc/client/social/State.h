#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class State : int {
    Loading   = 0,
    Loaded    = 1,
    Error     = 2,
    Undefined = 3,
};
#else // @header-generator platform
enum class State : int {};
#endif // @header-generator platform

}
