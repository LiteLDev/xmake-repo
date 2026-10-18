#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIElementPassType : int {
    Transparent = 0,
    AlphaTest   = 1,
    Blend       = 2,
    Opaque      = 3,
};
#else // @header-generator platform
enum class UIElementPassType : int {};
#endif // @header-generator platform

}
