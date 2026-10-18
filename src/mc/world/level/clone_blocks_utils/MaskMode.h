#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CloneBlocksUtils {

enum class MaskMode : int {
    Replace  = 0,
    Filtered = 1,
    Masked   = 2,
};

}
#endif // @header-generator platform
