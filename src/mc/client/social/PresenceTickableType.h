#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class PresenceTickableType : int {
    Generic = 0,
    Clubs   = 1,
};
#else // @header-generator platform
enum class PresenceTickableType : int {};
#endif // @header-generator platform

}
