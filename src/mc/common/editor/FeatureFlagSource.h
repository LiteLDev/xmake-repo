#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class FeatureFlagSource : int {
    Native = 0,
    Script = 1,
};

}
#endif // @header-generator platform
