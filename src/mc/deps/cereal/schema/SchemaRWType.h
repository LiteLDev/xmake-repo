#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SchemaRWType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    INVALID               = 0,
    OBJECT                = 1,
    ARRAY                 = 2,
    OTHER                 = 4,
    _entt_enum_as_bitmask = 5,
#else // @header-generator platform
    Invalid           = 0,
    Object            = 1,
    Array             = 2,
    Other             = 4,
    EnttEnumAsBitmask = 5,
#endif // @header-generator platform
};

}
