#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

enum class RtRenderMethod : uint {
    Game                = 0,
    GamePathTracer      = 1,
    ReferencePathTracer = 2,
    Count               = 3,
};

}
