#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ColorChannel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ColorChannel const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
