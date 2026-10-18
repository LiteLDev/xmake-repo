#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class Mode : int {
    Disabled  = 0,
    Tool      = 1,
    Crosshair = 2,
};

}
#endif // @header-generator platform
