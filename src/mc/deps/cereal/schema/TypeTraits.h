#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class TypeTraits : ushort {
#if defined(LL_PLAT_A) // @header-generator platform
    noTraits                = 0,
    isTaggedVariant         = 1,
    hasTaggedVariantMembers = 2,
    hasDefaultMembers       = 4,
    _entt_enum_as_bitmask   = 5,
#else // @header-generator platform
    NoTraits                = 0,
    IsTaggedVariant         = 1,
    HasTaggedVariantMembers = 2,
    HasDefaultMembers       = 4,
    EnttEnumAsBitmask       = 5,
#endif // @header-generator platform
};

}
