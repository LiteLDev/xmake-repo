#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"

class TimerFacade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mTimer;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerFacade();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TimerFacade(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(double);
    // NOLINTEND
};
