#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ChangeUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> restrictToControllerIdChange;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ChangeUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> restrictToControllerIdChange;
    // NOLINTEND
};
#else // @header-generator platform
struct ChangeUserData {};
#endif // @header-generator platform
#endif // @header-generator platform
