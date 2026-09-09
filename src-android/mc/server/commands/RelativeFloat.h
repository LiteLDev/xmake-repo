#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mOffset;
    ::ll::TypedStorage<1, 1, bool>  mRelative;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelativeFloat();

    MCNAPI RelativeFloat(float, bool);

    MCNAPI float getValue(float) const;

    MCNAPI bool isRelative() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(float, bool);
    // NOLINTEND
};
