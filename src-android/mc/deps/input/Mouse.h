#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
