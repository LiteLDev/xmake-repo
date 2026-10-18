#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ByteMask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mask;
    // NOLINTEND
};
#else // @header-generator platform
class ByteMask {};
#endif // @header-generator platform
