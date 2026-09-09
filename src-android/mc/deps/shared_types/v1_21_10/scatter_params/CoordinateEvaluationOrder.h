#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_10 {

enum class CoordinateEvaluationOrder : int {
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
};

}
