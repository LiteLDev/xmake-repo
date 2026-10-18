#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

#if defined(LL_PLAT_A) // @header-generator platform
enum Direction : uint {
    None     = 0,
    Forward  = 1,
    Backward = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Direction : int {
    None     = 0,
    Forward  = 1,
    Backward = 2,
};
#else // @header-generator platform
enum class Direction : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
