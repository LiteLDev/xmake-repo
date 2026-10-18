#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SchedulerDefaults {
// static variables
// NOLINTBEGIN
MCAPI float const& MAX_DELAY_SECS();

MCAPI float const& MIN_DELAY_SECS();
// NOLINTEND

} // namespace SchedulerDefaults
#endif // @header-generator platform
