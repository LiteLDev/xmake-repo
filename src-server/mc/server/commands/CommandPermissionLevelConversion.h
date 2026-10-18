#if defined(LL_PLAT_S) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

namespace CommandPermissionLevelConversion {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::CommandPermissionLevel> fromString(::std::string const& commandPermLevel);
// NOLINTEND

} // namespace CommandPermissionLevelConversion
#endif // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
