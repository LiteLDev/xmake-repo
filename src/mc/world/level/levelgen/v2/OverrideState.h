#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

#if defined(LL_PLAT_A) // @header-generator platform
enum class OverrideState : uchar {
#else // @header-generator platform
enum class OverrideState : schar {
#endif // @header-generator platform
    Unset = 0,
    No    = 1,
    Yes   = 2,
};

}
