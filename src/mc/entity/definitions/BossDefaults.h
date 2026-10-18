#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BossDefaults {
// static variables
// NOLINTBEGIN
MCAPI int const& HUD_RANGE();

MCAPI bool const& SHOULD_DARKEN_SKY();
// NOLINTEND

} // namespace BossDefaults
#endif // @header-generator platform
