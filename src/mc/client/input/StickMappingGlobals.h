#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StickMappingGlobals {
// inner types
#ifdef LL_PLAT_C
enum : int {
    MoveStickId = 0,
    TurnStickId = 1,
};

#endif
} // namespace StickMappingGlobals
#endif // @header-generator platform
