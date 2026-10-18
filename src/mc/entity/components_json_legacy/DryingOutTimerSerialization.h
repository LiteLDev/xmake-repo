#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DryingOutTimerSerialization {
// static variables
// NOLINTBEGIN
MCAPI ::std::string const& STATE_KEY();

MCAPI ::std::string const& TICKS_REMAINING_KEY();
// NOLINTEND

} // namespace DryingOutTimerSerialization
#endif // @header-generator platform
