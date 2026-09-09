#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class VariantPriorityLevel : uchar {
    UNKNOWN = 0,
    OTHER   = 1,
    INTEGER = 2,
    FLOAT   = 3,
    DOUBLE  = 4,
};

}
