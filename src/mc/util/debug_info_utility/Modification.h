#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

enum class Modification : int {
#if defined(LL_PLAT_A) // @header-generator platform
    UNCHANGED = 0,
    ADDITION  = 1,
    EDIT      = 2,
    MIXED     = 3,
#else // @header-generator platform
    Unchanged = 0,
    Addition  = 1,
    Edit      = 2,
    Mixed     = 3,
#endif // @header-generator platform
};

}
