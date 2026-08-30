#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

enum class Tonemapper : int {
    Reinhard          = 0,
    ReinhardLuma      = 1,
    ReinhardLuminance = 2,
    Hable             = 3,
    ACES              = 4,
    Generic           = 5,
};

}
