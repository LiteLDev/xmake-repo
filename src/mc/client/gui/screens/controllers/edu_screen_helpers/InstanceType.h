#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUScreenHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InstanceType : uchar {
    CreateNew = 0,
    Delete    = 1,
    SIZE      = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InstanceType : uchar {
    CreateNew = 0,
    Delete    = 1,
    Size      = 2,
};
#else // @header-generator platform
enum class InstanceType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
