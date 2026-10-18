#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components::details {

enum class RayTraceObjectType : uchar {
    Opaque                    = 0,
    AlphaTested               = 1,
    AlphaBlended              = 2,
    OpaquePrimaryOnly         = 3,
    AlphaTestedPrimaryOnly    = 4,
    AlphaBlendedPrimaryOnly   = 5,
    OpaqueSecondaryOnly       = 6,
    AlphaTestedSecondaryOnly  = 7,
    AlphaBlendedSecondaryOnly = 8,
    Water                     = 9,
    SunOrMoon                 = 10,
    Cloud                     = 11,
    Count                     = 12,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
