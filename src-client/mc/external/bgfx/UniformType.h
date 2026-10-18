#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct UniformType {
public:
    // UniformType inner types define
    enum Enum : uint {
        Int1  = 0,
        End   = 1,
        Vec4  = 2,
        Mat3  = 3,
        Mat4  = 4,
        Count = 5,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
