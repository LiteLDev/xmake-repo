#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MouseAction;
class MouseDevice;
// clang-format on

class Mouse {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void feed(char, schar, short, short);

    MCNAPI static void feedRelative(char, schar, short, short);

    MCNAPI static ::MouseAction const& getEvent();

    MCNAPI static short getX();

    MCNAPI static short getY();

    MCNAPI static bool next();

    MCNAPI static void rewind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::MouseDevice& _instance();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MouseDevice;
// clang-format on

class Mouse {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::MouseDevice& _instance();
    // NOLINTEND
};
#else // @header-generator platform
class Mouse {};
#endif // @header-generator platform
#endif // @header-generator platform
