#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class FeatureFlagCategory : int {
    Server = 0,
    Client = 1,
};

}
#endif // @header-generator platform
