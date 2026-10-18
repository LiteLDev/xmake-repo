#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ExperimentCategory : int {
    Gameplay      = 0,
    Graphics      = 1,
    AddonCreators = 2,
    Internal      = 3,
};
#else // @header-generator platform
enum class ExperimentCategory : int {};
#endif // @header-generator platform
