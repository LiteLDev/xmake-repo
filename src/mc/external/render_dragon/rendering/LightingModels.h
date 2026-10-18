#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LightingModels : int {
    Vanilla        = 0,
    Deferred       = 1,
    FullPathTraced = 2,
};
#else // @header-generator platform
enum class LightingModels : int {};
#endif // @header-generator platform

}
