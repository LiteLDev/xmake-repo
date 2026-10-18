#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct ViewMode {
public:
    // ViewMode inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Enum : uint {
        Default         = 0,
        Sequential      = 1,
        DepthAscending  = 2,
        DepthDescending = 3,
        Count           = 4,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Enum : int {
        Default         = 0,
        Sequential      = 1,
        DepthAscending  = 2,
        DepthDescending = 3,
        Count           = 4,
    };
#else // @header-generator platform
    enum class Enum : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace bgfx
