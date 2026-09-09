#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SchemaRWType : uchar {
    INVALID               = 0,
    OBJECT                = 1,
    ARRAY                 = 2,
    OTHER                 = 4,
    _entt_enum_as_bitmask = 5,
};

}
