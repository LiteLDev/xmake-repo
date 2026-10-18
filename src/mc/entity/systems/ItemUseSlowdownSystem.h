#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace ItemUseSlowdownSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createApplySystem();

MCAPI ::TickingSystemWithInfo createClientSystem();

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace ItemUseSlowdownSystem
#endif // @header-generator platform
