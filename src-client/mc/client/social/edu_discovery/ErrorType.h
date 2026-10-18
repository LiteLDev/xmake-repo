#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

enum class ErrorType : uchar {
    Unknown            = 0,
    NetworkError       = 1,
    ServiceError       = 2,
    NotFound           = 3,
    UnexpectedResponse = 4,
    Disabled           = 5,
    OutdatedServer     = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
