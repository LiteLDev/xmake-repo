#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
enum class VerticalSync : uchar {
    NoVerticalSync       = 0,
    VerticalSync         = 1,
    AdaptiveVerticalSync = 2,
};
#else // @header-generator platform
enum class VerticalSync : uchar {};
#endif // @header-generator platform

}
