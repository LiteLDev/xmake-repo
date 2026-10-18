#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class XblImageSize : int {
    Full   = 0,
    Small  = 1,
    Medium = 2,
    Large  = 3,
};
#else // @header-generator platform
enum class XblImageSize : int {};
#endif // @header-generator platform

}
