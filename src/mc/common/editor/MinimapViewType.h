#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class MinimapViewType : int {
    BlockView       = 0,
    CustomBiomeView = 1,
    Default         = 0,
};

}
#endif // @header-generator platform
