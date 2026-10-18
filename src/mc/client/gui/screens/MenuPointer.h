#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class MenuPointer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPressed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MenuPointer();

    MCNAPI bool isPressed();

    MCNAPI void setPressed(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class MenuPointer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPressed;
    // NOLINTEND
};
#else // @header-generator platform
class MenuPointer {};
#endif // @header-generator platform
#endif // @header-generator platform
