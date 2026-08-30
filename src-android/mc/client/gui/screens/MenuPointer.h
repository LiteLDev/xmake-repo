#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
