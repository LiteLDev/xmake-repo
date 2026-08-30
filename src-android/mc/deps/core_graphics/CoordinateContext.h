#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg::viewport::details {

enum CoordinateContext : uint {
    Render = 0,
    Screen = 1,
    Window = 2,
};

}
