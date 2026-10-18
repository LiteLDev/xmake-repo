#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

#if defined(LL_PLAT_A) // @header-generator platform
enum Axis : uint {
#else // @header-generator platform
enum class Axis : int {
#endif // @header-generator platform
    NoAxis = 0,
    X      = 1,
    Y      = 2,
    Z      = 4,
};

}
