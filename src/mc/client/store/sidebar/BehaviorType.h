#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BehaviorType : uint {
    // bitfield representation
    NavOption           = 0,
    UIBehaviorTypeStart = 1u << 0,
    NavLine             = 1u << 0,
    NavFill             = 1u << 1,
    UIBehaviorTypeEnd   = 1u << 1,
    Invalid             = NavLine | UIBehaviorTypeEnd,
    Count               = NavLine | UIBehaviorTypeEnd,
};
#else // @header-generator platform
enum class BehaviorType : uint {};
#endif // @header-generator platform

}
