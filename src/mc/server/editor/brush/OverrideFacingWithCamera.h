#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class OverrideFacingWithCamera : int {
    Yes = 0,
    No  = 1,
};

}
#endif // @header-generator platform
