#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct PrepNumber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    negative;
    ::ll::TypedStorage<4, 4, int>    exponent;
    ::ll::TypedStorage<8, 8, uint64> mantissa;
    // NOLINTEND
};
#else // @header-generator platform
struct PrepNumber {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
