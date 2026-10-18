#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LightOcclusion::Octant {

enum AxisMask : uint {
    Z_AXIS_MASK = 1,
    Y_AXIS_MASK = 2,
    X_AXIS_MASK = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
