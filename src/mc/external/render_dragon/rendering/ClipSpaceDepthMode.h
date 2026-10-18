#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClipSpaceDepthMode : uchar {
    NegativeOneToOne = 0,
    ZeroToOne        = 1,
};
#else // @header-generator platform
enum class ClipSpaceDepthMode : uchar {};
#endif // @header-generator platform

}
