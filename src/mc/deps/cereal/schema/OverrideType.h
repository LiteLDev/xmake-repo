#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class OverrideType : int {
#if defined(LL_PLAT_A) // @header-generator platform
    deprecated = 0,
    overridden = 1,
#else // @header-generator platform
    Deprecated = 0,
    Overridden = 1,
#endif // @header-generator platform
};

}
