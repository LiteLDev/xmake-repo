#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SerializationTraits : uchar {
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    None                  = 0,
    Compression           = 1 << 0,
    BigEndian             = 1 << 1,
    EnumAsValue           = 1 << 2,
    NoSizeCompression     = 1 << 3,
    SkipAlsoReadAs        = 1 << 4,
    _entt_enum_as_bitmask = 255,
#else // @header-generator platform
    None              = 0,
    Compression       = 1 << 0,
    BigEndian         = 1 << 1,
    EnumAsValue       = 1 << 2,
    NoSizeCompression = 1 << 3,
    SkipAlsoReadAs    = 1 << 4,
    EnttEnumAsBitmask = 255,
#endif // @header-generator platform
};

}
