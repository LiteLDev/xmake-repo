#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

enum class InputFormat : uchar {
    binary       = 0,
    jsonString   = 1,
    jsonCpp      = 2,
    jsonRapid    = 3,
    dynamicValue = 4,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
