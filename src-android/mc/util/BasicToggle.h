#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicToggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsOn;
    ::ll::TypedStorage<1, 1, bool> mStateChanged;
    ::ll::TypedStorage<1, 1, bool> mFirstStateChange;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicToggle(bool);

    MCNAPI bool getStateChange();

    MCNAPI bool peek() const;

    MCNAPI void setIsOn(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND
};
