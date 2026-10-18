#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameplayUserManager;
class Player;
struct ActorUniqueID;
// clang-format on

namespace PlayerFetchUtils {
// functions
// NOLINTBEGIN
MCAPI ::Player*
findActivePlayerByActorUniqueID(::GameplayUserManager const& gameplayUserManager, ::ActorUniqueID actorUniqueID);

MCAPI ::Player*
findPlayer(::GameplayUserManager const& gameplayUserManager, ::std::function<bool(::EntityContext const&)> callback);
// NOLINTEND

} // namespace PlayerFetchUtils
#endif // @header-generator platform
