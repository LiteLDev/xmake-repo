#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class WatchStatus : uchar {
    None       = 0,
    Background = 1,
};
#else // @header-generator platform
enum class WatchStatus : uchar {};
#endif // @header-generator platform

}
