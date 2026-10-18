#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class ContextArea : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    PUBLIC                = 1,
    VANILLA               = 2,
    INTERNAL              = 4,
    ALL                   = 255,
    _entt_enum_as_bitmask = 255,
#else // @header-generator platform
    Public            = 1,
    Vanilla           = 2,
    Internal          = 4,
    All               = 255,
    EnttEnumAsBitmask = 255,
#endif // @header-generator platform
};

}
