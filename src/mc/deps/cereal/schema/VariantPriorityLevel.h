#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class VariantPriorityLevel : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    UNKNOWN = 0,
    OTHER   = 1,
    INTEGER = 2,
    FLOAT   = 3,
    DOUBLE  = 4,
#else // @header-generator platform
    Unknown = 0,
    Other   = 1,
    Integer = 2,
    Float   = 3,
    Double  = 4,
#endif // @header-generator platform
};

}
