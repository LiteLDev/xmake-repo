#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Primitive {
public:
    // Primitive inner types define
    enum class ComponentType : int {
#if defined(LL_PLAT_A) // @header-generator platform
        BYTE           = 5120,
        UNSIGNED_BYTE  = 5121,
        SHORT          = 5122,
        UNSIGNED_SHORT = 5123,
        FLOAT          = 5126,
#else // @header-generator platform
        Byte          = 5120,
        UnsignedByte  = 5121,
        Short         = 5122,
        UnsignedShort = 5123,
        Float         = 5126,
#endif // @header-generator platform
    };
};

} // namespace glTF
