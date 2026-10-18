#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushFlattenMode : int {
    Both = 0,
    Down = 1,
    Up   = 2,
};

}
#endif // @header-generator platform
