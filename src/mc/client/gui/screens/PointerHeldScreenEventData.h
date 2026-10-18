#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct PointerHeldScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> position;
    ::ll::TypedStorage<4, 8, float[2]> relativePosition;
    ::ll::TypedStorage<1, 1, bool>     moved;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PointerHeldScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> position;
    ::ll::TypedStorage<4, 8, float[2]> relativePosition;
    ::ll::TypedStorage<1, 1, bool>     moved;
    // NOLINTEND
};
#else // @header-generator platform
struct PointerHeldScreenEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
