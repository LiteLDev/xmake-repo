#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class MinimapTrackingMode : int {
    FollowPlayer = 0,
    FreeCenter   = 1,
};

}
#endif // @header-generator platform
