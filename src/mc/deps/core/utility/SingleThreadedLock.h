#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class SingleThreadedLock {};
#else // @header-generator platform
class SingleThreadedLock {
public:
    constexpr void lock() {}
    constexpr void unlock() {}
};
#endif // @header-generator platform

} // namespace Core
