#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtLevelCuller : int {
    None        = 0,
    Perspective = 1,
    Invalid     = 2,
    Count       = 3,
};

}
