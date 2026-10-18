#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BoostableDefaults {
// static variables
// NOLINTBEGIN
MCAPI float const& MAX_BOOST_TIME();

MCAPI float const& SPEED_MODIFIER();
// NOLINTEND

} // namespace BoostableDefaults
#endif // @header-generator platform
