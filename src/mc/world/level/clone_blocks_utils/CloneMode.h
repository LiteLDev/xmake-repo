#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CloneBlocksUtils {

enum class CloneMode : int {
    Normal = 0,
    Force  = 1,
    Move   = 2,
};

}
#endif // @header-generator platform
