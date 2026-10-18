#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityContext;
// clang-format on

namespace ActorOwnerUtils {
// functions
// NOLINTBEGIN
MCNAPI ::ActorOwnerComponent const* constActorOwnerComponentOrAssert(::EntityContext const& entity);
// NOLINTEND

} // namespace ActorOwnerUtils
#endif // @header-generator platform
