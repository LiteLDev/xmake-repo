#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace UpdateAbilitiesSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createClientProcessRequestSystem();

MCAPI ::TickingSystemWithInfo createProcessRequestSystem();

MCAPI ::TickingSystemWithInfo createUpdateSystem();
// NOLINTEND

} // namespace UpdateAbilitiesSystem
#endif // @header-generator platform
