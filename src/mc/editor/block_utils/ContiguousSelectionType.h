#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils {

enum class ContiguousSelectionType : int {
    SameBlock   = 0,
    BlockStates = 1,
    SolidBlocks = 2,
    AllBlocks   = 3,
    Custom      = 4,
};

}
#endif // @header-generator platform
