#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FreeCameraControlled::Defaults {
// static variables
// NOLINTBEGIN
MCAPI float const& BACKWARD_SPEED_MODIFIER();

MCAPI float const& STRAFE_SPEED_MODIFIER();
// NOLINTEND

} // namespace FreeCameraControlled::Defaults
#endif // @header-generator platform
