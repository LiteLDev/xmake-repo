#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeviceTierUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar getGraphicsDeviceTierFromFile(std::string const&, uchar);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
