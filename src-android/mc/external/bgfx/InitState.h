#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class InitState : int {
    Begin    = 0,
    Pending  = 1,
    Finalize = 2,
    End      = 3,
    Failed   = 4,
};

}
