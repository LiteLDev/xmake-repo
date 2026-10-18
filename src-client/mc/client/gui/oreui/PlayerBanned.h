#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct UserBanDetails; }
// clang-format on

namespace OreUI::EntryPoints::PlayerBanned {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::Social::UserBanDetails const& ban);
// NOLINTEND

} // namespace OreUI::EntryPoints::PlayerBanned
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
