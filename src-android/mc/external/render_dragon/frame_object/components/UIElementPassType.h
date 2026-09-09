#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

enum class UIElementPassType : int {
    Transparent = 0,
    AlphaTest   = 1,
    Blend       = 2,
    Opaque      = 3,
};

}
