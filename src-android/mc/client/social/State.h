#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class State : int {
    Loading   = 0,
    Loaded    = 1,
    Error     = 2,
    Undefined = 3,
};

}
