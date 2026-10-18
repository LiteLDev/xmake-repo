#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class AllowDroppingMips : uchar {
    Yes = 0,
    No  = 1,
};
#else // @header-generator platform
enum class AllowDroppingMips : uchar {};
#endif // @header-generator platform

}
