#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class MemberTraits : ushort {
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    noTraits                  = 0,
    isRequired                = 1 << 0,
    isDefaultSetter           = 1 << 1,
    isMemberLevelSetterGetter = 1 << 2,
    isKeyedSetterGetter       = 1 << 3,
    isConstSelector           = 1 << 4,
    hasDefaultValue           = 1 << 5,
    isPatternMember           = 1 << 6,
    _entt_enum_as_bitmask     = isRequired | isPatternMember,
#else // @header-generator platform
    NoTraits                  = 0,
    IsRequired                = 1 << 0,
    IsDefaultSetter           = 1 << 1,
    IsMemberLevelSetterGetter = 1 << 2,
    IsKeyedSetterGetter       = 1 << 3,
    IsConstSelector           = 1 << 4,
    HasDefaultValue           = 1 << 5,
    IsPatternMember           = 1 << 6,
    EnttEnumAsBitmask         = IsRequired | IsPatternMember,
#endif // @header-generator platform
};

}
