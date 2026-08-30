#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class TypeTraits : ushort {
    noTraits                = 0,
    isTaggedVariant         = 1,
    hasTaggedVariantMembers = 2,
    hasDefaultMembers       = 4,
    _entt_enum_as_bitmask   = 5,
};

}
