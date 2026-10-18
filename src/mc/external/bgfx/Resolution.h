#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct Resolution {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> width;
    ::ll::TypedStorage<4, 4, uint> height;
    ::ll::TypedStorage<4, 4, uint> reset;
    // NOLINTEND
};
#else // @header-generator platform
struct Resolution {};
#endif // @header-generator platform

} // namespace bgfx
