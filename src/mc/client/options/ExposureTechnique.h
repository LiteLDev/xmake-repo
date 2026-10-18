#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ExposureTechnique : int {
    Manual         = 0,
    AutoKey        = 1,
    NUM_TECHNIQUES = 2,
};
#else // @header-generator platform
enum class ExposureTechnique : int {};
#endif // @header-generator platform
