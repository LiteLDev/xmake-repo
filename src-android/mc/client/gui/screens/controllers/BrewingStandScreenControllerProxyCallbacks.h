#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BrewingStandScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mIsFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandScreenControllerProxyCallbacks& operator=(BrewingStandScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrewingStandScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
