#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ComparisonFunc : uchar {
    Equal        = 0,
    NotEqual     = 1,
    Always       = 2,
    Less         = 3,
    Greater      = 4,
    GreaterEqual = 5,
    LessEqual    = 6,
    Never        = 7,
};
#else // @header-generator platform
enum class ComparisonFunc : uchar {};
#endif // @header-generator platform

}
