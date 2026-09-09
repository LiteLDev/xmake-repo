#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

enum class UniformType : uchar {
    Sampler = 0,
    Int1    = 1,
    Vec4    = 2,
    Mat3    = 3,
    Mat4    = 4,
};

}
