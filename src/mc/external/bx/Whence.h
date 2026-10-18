#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct Whence {
public:
    // Whence inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Enum : int {
        Begin   = 0,
        Current = 1,
        End     = 2,
    };
#else // @header-generator platform
    enum class Enum : int {};
#endif // @header-generator platform
};

} // namespace bx
#endif // @header-generator platform
