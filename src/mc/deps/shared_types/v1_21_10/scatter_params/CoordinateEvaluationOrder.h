#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_10 {

enum class CoordinateEvaluationOrder : int {
#if defined(LL_PLAT_A) // @header-generator platform
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
#else // @header-generator platform
    Xyz = 0,
    Xzy = 1,
    Yxz = 2,
    Yzx = 3,
    Zxy = 4,
    Zyx = 5,
#endif // @header-generator platform
};

}
