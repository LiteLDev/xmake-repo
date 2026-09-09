#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtDebugMode : int {
    None       = 0,
    Diffuse    = 1,
    Specular   = 2,
    Refraction = 3,
    Count      = 4,
};

}
