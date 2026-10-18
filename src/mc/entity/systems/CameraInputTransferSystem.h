#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace CameraInputTransferSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createMoveInputUpdateSystem();

MCAPI ::TickingSystemWithInfo createPlayerActionUpdateSystem();
// NOLINTEND

} // namespace CameraInputTransferSystem
#endif // @header-generator platform
