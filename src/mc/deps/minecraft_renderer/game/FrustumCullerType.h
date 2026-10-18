#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class FrustumCullerType : uchar {
    None        = 0,
    Perspective = 1,
    RayTracing  = 2,
};
#else // @header-generator platform
enum class FrustumCullerType : uchar {};
#endif // @header-generator platform
