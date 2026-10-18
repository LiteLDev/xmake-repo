#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, float*> data;
    ::ll::TypedStorage<2, 2, ushort> num;
    // NOLINTEND
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
