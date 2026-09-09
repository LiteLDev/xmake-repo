#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class TextureCubeFace : uchar {
    PositiveX = 0,
    NegativeX = 1,
    PositiveY = 2,
    NegativeY = 3,
    PositiveZ = 4,
    NegativeZ = 5,
    Count     = 6,
};

}
