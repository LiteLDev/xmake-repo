#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameEventMovementTrackingDefaults {
// static variables
// NOLINTBEGIN
MCAPI bool const& EMIT_FLAP();

MCAPI bool const& EMIT_MOVE();

MCAPI bool const& EMIT_SWIM();
// NOLINTEND

} // namespace GameEventMovementTrackingDefaults
#endif // @header-generator platform
