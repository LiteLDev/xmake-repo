#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct TickingSystemWithInfo;
// clang-format on

namespace ExitVehicleSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem(::BaseGameVersion const& version, bool isClient);
// NOLINTEND

} // namespace ExitVehicleSystem
#endif // @header-generator platform
