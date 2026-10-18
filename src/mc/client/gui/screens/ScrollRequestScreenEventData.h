#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ScrollRequestScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> delta;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScrollRequestScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> delta;
    // NOLINTEND
};
#else // @header-generator platform
struct ScrollRequestScreenEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
