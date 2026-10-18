#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AreaAttackSerialization {
// static variables
// NOLINTBEGIN
MCAPI ::std::string const& ACTOR_ID_KEY();

MCAPI ::std::string const& ATTACK_COOLDOWN_VECTOR_KEY();

MCAPI ::std::string const& TICK_COOLDOWN_KEY();
// NOLINTEND

} // namespace AreaAttackSerialization
#endif // @header-generator platform
