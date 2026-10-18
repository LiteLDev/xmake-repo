#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LevelCullerType : uchar {
    None                      = 0,
    DistanceFieldPerspective  = 1,
    DistanceFieldOrthographic = 2,
    Manhattan                 = 3,
    Shadow                    = 4,
    NoneAsync                 = 5,
    Invalid                   = 6,
};
#else // @header-generator platform
enum class LevelCullerType : uchar {};
#endif // @header-generator platform
