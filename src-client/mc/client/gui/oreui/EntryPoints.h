#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> GAMEPLAY_FILE();

MCAPI ::std::add_lvalue_reference_t<char const[]> OUTOFGAME_FILE();
// NOLINTEND

} // namespace OreUI::EntryPoints
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
