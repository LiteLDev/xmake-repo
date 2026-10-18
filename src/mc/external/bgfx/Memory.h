#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct Memory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*> data;
    ::ll::TypedStorage<4, 4, uint>   size;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Memory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*> data;
    ::ll::TypedStorage<4, 4, uint>   size;
    // NOLINTEND
};
#else // @header-generator platform
struct Memory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
