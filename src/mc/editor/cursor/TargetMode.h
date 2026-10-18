#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor {

enum class TargetMode : int {
    Block = 0,
    Face  = 1,
};

}
#endif // @header-generator platform
