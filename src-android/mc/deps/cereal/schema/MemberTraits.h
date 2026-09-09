#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class MemberTraits : ushort {
    // bitfield representation
    noTraits                  = 0,
    isRequired                = 1 << 0,
    isDefaultSetter           = 1 << 1,
    isMemberLevelSetterGetter = 1 << 2,
    isKeyedSetterGetter       = 1 << 3,
    isConstSelector           = 1 << 4,
    hasDefaultValue           = 1 << 5,
    isPatternMember           = 1 << 6,
    _entt_enum_as_bitmask     = isRequired | isPatternMember,
};

}
