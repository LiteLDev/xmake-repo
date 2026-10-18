#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LegacyTradeableDefaults {
// static variables
// NOLINTBEGIN
MCAPI bool const& CONVERT_TRADES_ECONOMY();

MCAPI bool const& NEW_SCREEN();

MCAPI bool const& PERSISTENT_TRADES();
// NOLINTEND

} // namespace LegacyTradeableDefaults
#endif // @header-generator platform
