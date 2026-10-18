#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::frameobject {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ShadowQuality : int {
    Low    = 0,
    Medium = 1,
    High   = 2,
};
#else // @header-generator platform
enum class ShadowQuality : int {};
#endif // @header-generator platform

}
