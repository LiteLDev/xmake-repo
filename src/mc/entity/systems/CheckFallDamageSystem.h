#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace CheckFallDamageSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI ::TickingSystemWithInfo createVehicleResetFallDistanceSystem();
// NOLINTEND

} // namespace CheckFallDamageSystem
#endif // @header-generator platform
