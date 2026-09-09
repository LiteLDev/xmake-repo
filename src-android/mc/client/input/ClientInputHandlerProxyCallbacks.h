#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetCurrentInputMapping;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandlerProxyCallbacks& operator=(ClientInputHandlerProxyCallbacks const&);
    ClientInputHandlerProxyCallbacks();
};
