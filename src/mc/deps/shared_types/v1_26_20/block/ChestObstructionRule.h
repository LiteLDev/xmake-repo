#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class ChestObstructionRule : uchar {
    AlwaysObstruct = 0,
    NeverObstruct  = 1,
    ShapeObstruct  = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _Size          = 3,
#else // @header-generator platform
    Size           = 3,
#endif // @header-generator platform
};

}
