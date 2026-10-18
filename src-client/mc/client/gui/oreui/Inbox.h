#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::Inbox {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::std::string const& tab);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::Inbox
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
