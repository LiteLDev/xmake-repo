#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::SignInAchievements {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::std::string const& redirectTo);
// NOLINTEND

} // namespace OreUI::EntryPoints::SignInAchievements
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
