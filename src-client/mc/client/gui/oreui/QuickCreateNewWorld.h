#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::QuickCreateNewWorld {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();

MCAPI ::std::add_lvalue_reference_t<char const[]> SURVIVAL_DIFFICULTY_ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::QuickCreateNewWorld
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
