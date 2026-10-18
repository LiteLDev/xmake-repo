#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct TurnEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> dx;
    ::ll::TypedStorage<4, 4, float> dy;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TurnEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> dx;
    ::ll::TypedStorage<4, 4, float> dy;
    // NOLINTEND
};
#else // @header-generator platform
struct TurnEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
