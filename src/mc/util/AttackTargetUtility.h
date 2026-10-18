#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Vec3;
// clang-format on

namespace AttackTargetUtility {
// functions
// NOLINTBEGIN
MCNAPI float calculateTargetXZDistanceSquared(::Vec3 const& attackerPosition, ::Actor const& target);

MCNAPI ::AABB getTargetHitbox(::Actor const& target);
// NOLINTEND

} // namespace AttackTargetUtility
#endif // @header-generator platform
