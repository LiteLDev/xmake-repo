#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Vanilla {
// functions
// NOLINTBEGIN
MCAPI void setupCommands();

MCAPI void setupQueries();
// NOLINTEND

} // namespace OreUI::Vanilla
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
