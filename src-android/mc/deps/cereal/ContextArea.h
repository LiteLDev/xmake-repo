#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class ContextArea : uchar {
    PUBLIC                = 1,
    VANILLA               = 2,
    INTERNAL              = 4,
    ALL                   = 255,
    _entt_enum_as_bitmask = 255,
};

}
