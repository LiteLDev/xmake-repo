#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockGeometry {

#if defined(LL_PLAT_A) // @header-generator platform
enum Axis : int {
    NONE = 0,
    x    = 1,
    y    = 2,
    z    = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Axis : int {
    None = 0,
    X    = 1,
    Y    = 2,
    Z    = 3,
};
#else // @header-generator platform
enum class Axis : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
