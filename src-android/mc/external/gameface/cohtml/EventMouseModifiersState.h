#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct EventMouseModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> IsLeftButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsMiddleButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsRightButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsBackButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsForwardButtonDown;
    // NOLINTEND
};

} // namespace cohtml
