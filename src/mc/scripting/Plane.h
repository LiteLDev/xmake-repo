#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

#if defined(LL_PLAT_A) // @header-generator platform
enum Plane : uint {
#else // @header-generator platform
enum class Plane : int {
#endif // @header-generator platform
    NoPlane = 0,
#if defined(LL_PLAT_A) // @header-generator platform
    XY      = 1,
    XZ      = 2,
    YZ      = 4,
#else // @header-generator platform
    Xy      = 1,
    Xz      = 2,
    Yz      = 4,
#endif // @header-generator platform
};

}
