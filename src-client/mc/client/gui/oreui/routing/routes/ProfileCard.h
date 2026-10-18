#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::ProfileCard {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::std::string const& xuid, ::std::string const& platformId);
// NOLINTEND

} // namespace OreUI::EntryPoints::ProfileCard
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
