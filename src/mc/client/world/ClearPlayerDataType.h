#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ClearPlayerDataType : uchar {
    SkipLocalUser    = 0,
    IncludeLocalUser = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ClearPlayerDataType : uchar {
    SkipLocalUser    = 0,
    IncludeLocalUser = 1,
};
#else // @header-generator platform
enum class ClearPlayerDataType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
