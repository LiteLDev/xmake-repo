#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct EventModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> IsShiftDown;
    ::ll::TypedStorage<1, 1, bool> IsCtrlDown;
    ::ll::TypedStorage<1, 1, bool> IsAltDown;
    ::ll::TypedStorage<1, 1, bool> IsAltGraphDown;
    ::ll::TypedStorage<1, 1, bool> IsMetaDown;
    ::ll::TypedStorage<1, 1, bool> IsNumLockOn;
    ::ll::TypedStorage<1, 1, bool> IsCapsOn;
    // NOLINTEND
};

} // namespace cohtml
