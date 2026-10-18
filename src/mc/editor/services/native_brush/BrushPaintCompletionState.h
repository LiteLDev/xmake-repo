#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushPaintCompletionState : int {
    Success  = 0,
    Canceled = 1,
    Failed   = 2,
};

}
#endif // @header-generator platform
