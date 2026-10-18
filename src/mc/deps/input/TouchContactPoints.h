#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class TouchContactPoints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::std::array<int, 12>> mTouchIDLookup;
    // NOLINTEND
};
#else // @header-generator platform
class TouchContactPoints {};
#endif // @header-generator platform
#endif // @header-generator platform
