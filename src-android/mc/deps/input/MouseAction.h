#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> x;
    ::ll::TypedStorage<2, 2, short> y;
    ::ll::TypedStorage<2, 2, short> dx;
    ::ll::TypedStorage<2, 2, short> dy;
    ::ll::TypedStorage<1, 1, char>  action;
    ::ll::TypedStorage<1, 1, schar> data;
    ::ll::TypedStorage<4, 4, int>   pointerId;
    ::ll::TypedStorage<1, 1, bool>  forceMotionlessPointer;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseAction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isButton() const;
    // NOLINTEND
};
