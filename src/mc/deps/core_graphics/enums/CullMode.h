#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class CullMode : uchar {
    CullNone  = 0,
    CullFront = 1,
    CullBack  = 2,
};
#else // @header-generator platform
enum class CullMode : uchar {};
#endif // @header-generator platform

}
