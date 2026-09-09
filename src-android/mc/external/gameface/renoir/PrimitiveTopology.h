#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum PrimitiveTopology : uint {
    PTO_TriangleList  = 0,
    PTO_TriangleStrip = 1,
    PTO_Points        = 2,
    PTO_Lines         = 3,
    PTO_LineStrip     = 4,
    PTO_Count         = 5,
};

}
