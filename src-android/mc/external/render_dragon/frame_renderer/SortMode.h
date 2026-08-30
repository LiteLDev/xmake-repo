#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::drawutils {

enum class SortMode : int {
    NonTransparent = 0,
    OrderDependent = 1,
    Transparent    = 2,
};

}
