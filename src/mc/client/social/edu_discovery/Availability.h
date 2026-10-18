#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Availability : uchar {
    Invalid        = 0,
    Available      = 1,
    BadCredentials = 2,
    NotAvailable   = 3,
};
#else // @header-generator platform
enum class Availability : uchar {};
#endif // @header-generator platform

}
