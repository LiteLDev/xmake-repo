#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct BackbufferRatio {
public:
    // BackbufferRatio inner types define
    enum Enum : uint {
        Equal     = 0,
        Half      = 1,
        Quarter   = 2,
        Eighth    = 3,
        Sixteenth = 4,
        Double    = 5,
        Count     = 6,
    };
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
