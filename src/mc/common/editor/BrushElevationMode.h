#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class BrushElevationMode : int {
    Raise = 0,
    Lower = 1,
};

}
#endif // @header-generator platform
