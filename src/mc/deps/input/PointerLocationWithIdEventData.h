#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct PointerLocationWithIdEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   id;
    ::ll::TypedStorage<2, 2, short> x;
    ::ll::TypedStorage<2, 2, short> y;
    ::ll::TypedStorage<1, 1, bool>  updateActionPointer;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PointerLocationWithIdEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   id;
    ::ll::TypedStorage<2, 2, short> x;
    ::ll::TypedStorage<2, 2, short> y;
    ::ll::TypedStorage<1, 1, bool>  updateActionPointer;
    // NOLINTEND
};
#else // @header-generator platform
struct PointerLocationWithIdEventData {};
#endif // @header-generator platform
#endif // @header-generator platform
