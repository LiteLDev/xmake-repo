#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Widgets {

enum class RenderPlaneGridResolution : int {
    None          = 0,
    OneBlock      = 1,
    FourBlocks    = 2,
    EightBlocks   = 3,
    SixteenBlocks = 4,
};

}
#endif // @header-generator platform
