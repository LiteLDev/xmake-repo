#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::RealmsPlanPicker {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> IN_GAME_ROUTE();

MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::RealmsPlanPicker
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
