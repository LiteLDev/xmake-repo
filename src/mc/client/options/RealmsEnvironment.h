#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsEnvironment : int {
    Production       = 0,
    Staging          = 1,
    Dev              = 2,
    Local            = 3,
    EnvironmentCount = 4,
};
#else // @header-generator platform
enum class RealmsEnvironment : int {};
#endif // @header-generator platform
