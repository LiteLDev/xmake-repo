#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushPaintMode : int {
    BlockPaint     = 0,
    FreehandSelect = 1,
    Smooth         = 2,
    Roughen        = 3,
    Flatten        = 4,
    Elevation      = 5,
};

}
#endif // @header-generator platform
