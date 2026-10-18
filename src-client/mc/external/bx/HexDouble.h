#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

union HexDouble {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> d;
    ::ll::TypedStorage<8, 8, uint64> u;
    // NOLINTEND
};
} // namespace bx
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
