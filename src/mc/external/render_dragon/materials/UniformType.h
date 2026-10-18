#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UniformType : uchar {
    Sampler = 0,
    Int1    = 1,
    Vec4    = 2,
    Mat3    = 3,
    Mat4    = 4,
};
#else // @header-generator platform
enum class UniformType : uchar {};
#endif // @header-generator platform

}
