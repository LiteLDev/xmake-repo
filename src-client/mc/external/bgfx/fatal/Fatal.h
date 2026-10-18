#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Fatal {
public:
    // Fatal inner types define
    enum Enum : uint {
        DebugCheck            = 0,
        InvalidShader         = 1,
        UnableToInitialize    = 2,
        UnableToCreateTexture = 3,
        DeviceLost            = 4,
        Count                 = 5,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
