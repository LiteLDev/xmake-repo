#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MaterialType : uchar {
    Actor   = 0,
    Banner  = 1,
    Pattern = 2,
    Other   = 3,
};
#else // @header-generator platform
enum class MaterialType : uchar {};
#endif // @header-generator platform

}
