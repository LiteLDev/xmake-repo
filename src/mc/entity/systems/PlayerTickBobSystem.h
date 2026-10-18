#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerTickBobSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace PlayerTickBobSystem
#endif // @header-generator platform
