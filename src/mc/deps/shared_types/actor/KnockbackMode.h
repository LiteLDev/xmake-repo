#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class KnockbackMode : uchar {
    RelativeHorizontal = 0,
    HitDirection       = 1,
};

}
#endif // @header-generator platform
