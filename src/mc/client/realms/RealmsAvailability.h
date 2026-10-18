#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsAvailability : int {
    Open   = 0,
    Closed = 1,
};
#else // @header-generator platform
enum class RealmsAvailability : int {};
#endif // @header-generator platform

}
