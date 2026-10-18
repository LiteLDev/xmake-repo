#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Access {
public:
    // Access inner types define
    enum Enum : uint {
        Read      = 0,
        Write     = 1,
        ReadWrite = 2,
        Count     = 3,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
