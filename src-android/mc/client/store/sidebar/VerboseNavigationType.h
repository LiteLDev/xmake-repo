#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

enum class VerboseNavigationType : uint {
    ControllerLeft       = 0,
    ControllerRight      = 1,
    ControllerShortcut   = 2,
    EscapeShortcut       = 3,
    ExitVerboseSpace     = 4,
    NavOptionSelected    = 5,
    SimpleDropdownOption = 6,
    ToggleButton         = 7,
};

}
