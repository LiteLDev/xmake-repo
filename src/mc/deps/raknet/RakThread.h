#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
class RakThread {};
#else // @header-generator platform
class RakThread {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int Create(uint (*start_address)(void*), void* arglist, int priority);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RakNet
