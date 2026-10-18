#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FillMode : uchar {
    FillSolid     = 0,
    FillWireframe = 1,
};
#else // @header-generator platform
enum class FillMode : uchar {};
#endif // @header-generator platform

}
