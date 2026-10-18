#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Input {

enum class KeyInputType : int {
    Invalid = 0,
    Press   = 1,
    Release = 2,
};

}
#endif // @header-generator platform
