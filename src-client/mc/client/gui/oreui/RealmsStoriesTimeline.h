#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::RealmsStoriesTimeline {
// static variables
// NOLINTBEGIN
MCAPI ::std::string const& ROUTE();

MCAPI ::std::string const& SCREEN_ID();
// NOLINTEND

} // namespace OreUI::EntryPoints::RealmsStoriesTimeline
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
