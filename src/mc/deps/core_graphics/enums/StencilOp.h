#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class StencilOp : uchar {
    Keep     = 1,
    Zero     = 2,
    Replace  = 3,
    Incr     = 7,
    Decr     = 8,
    IncrWrap = 9,
    DecrWrap = 10,
};
#else // @header-generator platform
enum class StencilOp : uchar {};
#endif // @header-generator platform

}
