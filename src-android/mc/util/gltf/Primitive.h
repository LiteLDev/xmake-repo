#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Primitive {
public:
    // Primitive inner types define
    enum class ComponentType : int {
        BYTE           = 5120,
        UNSIGNED_BYTE  = 5121,
        SHORT          = 5122,
        UNSIGNED_SHORT = 5123,
        FLOAT          = 5126,
    };
};

} // namespace glTF
