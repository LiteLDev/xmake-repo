#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorPermission {
// functions
// NOLINTBEGIN
MCAPI ::GameType getUnmappedGameType(::EntityContext const& provider);

MCAPI void setUnmappedGameType(::EntityContext& provider, ::GameType gameType);
// NOLINTEND

} // namespace ActorPermission
#endif // @header-generator platform
