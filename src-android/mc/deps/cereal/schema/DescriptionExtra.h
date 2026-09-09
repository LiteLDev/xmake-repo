#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class DescriptionExtra : uchar {
    // bitfield representation
    none                  = 0,
    underlyingType        = 1 << 0,
    controlValueType      = 1 << 1,
    serializationTraits   = 1 << 2,
    ordinalIndex          = 1 << 3,
    numericLimits         = 1 << 4,
    nonPublicFlag         = 1 << 5,
    binaryLayoutInfo      = underlyingType | controlValueType | serializationTraits | ordinalIndex,
    _entt_enum_as_bitmask = 255,
};

}
