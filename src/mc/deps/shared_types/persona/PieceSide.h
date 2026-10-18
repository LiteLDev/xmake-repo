#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::persona {

enum class PieceSide : uint {
    Left  = 0,
    Both  = 1,
    Right = 2,
};

}
#endif // @header-generator platform
