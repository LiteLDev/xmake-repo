#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class DescriptionExtra : uchar {
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    none                  = 0,
    underlyingType        = 1 << 0,
    controlValueType      = 1 << 1,
    serializationTraits   = 1 << 2,
    ordinalIndex          = 1 << 3,
    numericLimits         = 1 << 4,
    nonPublicFlag         = 1 << 5,
    binaryLayoutInfo      = underlyingType | controlValueType | serializationTraits | ordinalIndex,
    _entt_enum_as_bitmask = 255,
#else // @header-generator platform
    None                = 0,
    UnderlyingType      = 1 << 0,
    ControlValueType    = 1 << 1,
    SerializationTraits = 1 << 2,
    OrdinalIndex        = 1 << 3,
    NumericLimits       = 1 << 4,
    NonPublicFlag       = 1 << 5,
    BinaryLayoutInfo    = UnderlyingType | ControlValueType | SerializationTraits | OrdinalIndex,
    EnttEnumAsBitmask   = 255,
#endif // @header-generator platform
};

}
