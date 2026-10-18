#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class MinimapMarkerType : int {
    Multiplayer = 0,
    Location    = 1,
    Custom      = 2,
};

}
#endif // @header-generator platform
