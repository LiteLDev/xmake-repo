#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

enum class MouseActionCategory : int {
    Invalid = 0,
    Button  = 1,
    Wheel   = 2,
    Drag    = 3,
};

}
#endif // @header-generator platform
