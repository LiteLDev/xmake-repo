#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushShapeMethod : int {
    Offsets        = 0,
    WeightedSphere = 1,
};

}
#endif // @header-generator platform
