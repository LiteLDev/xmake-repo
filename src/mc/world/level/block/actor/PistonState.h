#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PistonState : uchar {
#else // @header-generator platform
enum class PistonState : schar {
#endif // @header-generator platform
    Retracted  = 0,
    Expanding  = 1,
    Expanded   = 2,
    Retracting = 3,
};
