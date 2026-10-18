#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class ShaderInputType : int {
    Float = 0,
    Vec2  = 1,
    Vec3  = 2,
    Vec4  = 3,
    Int   = 4,
    Int2  = 5,
    Int3  = 6,
    Int4  = 7,
    UInt  = 8,
    UInt2 = 9,
    UInt3 = 10,
    UInt4 = 11,
    Mat4  = 12,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
