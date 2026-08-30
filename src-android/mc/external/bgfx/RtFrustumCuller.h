#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtFrustumCuller : int {
    Perspective = 0,
    Raytracing  = 1,
    Count       = 2,
};

}
