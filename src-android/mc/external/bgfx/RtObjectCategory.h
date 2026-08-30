#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtObjectCategory : int {
    Opaque      = 0,
    AlphaTested = 1,
    AlphaBlend  = 2,
    Water       = 3,
};

}
