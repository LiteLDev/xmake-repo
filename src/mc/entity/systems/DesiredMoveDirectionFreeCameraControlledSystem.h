#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace DesiredMoveDirectionFreeCameraControlledSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createVehicleSystem();
// NOLINTEND

} // namespace DesiredMoveDirectionFreeCameraControlledSystem
#endif // @header-generator platform
