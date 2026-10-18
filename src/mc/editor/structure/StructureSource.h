#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class StructureSource : int {
    Bp            = 0,
    EditorProject = 1,
    File          = 2,
    Level         = 3,
    Count         = 4,
};

}
#endif // @header-generator platform
