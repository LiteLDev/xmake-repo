#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PackType : uchar {
#else // @header-generator platform
enum class PackType : schar {
#endif // @header-generator platform
    Invalid       = 0,
    Addon         = 1,
    Cached        = 2,
    CopyProtected = 3,
    Behavior      = 4,
    PersonaPiece  = 5,
    Resources     = 6,
    Skins         = 7,
    WorldTemplate = 8,
    Count         = 9,
};
