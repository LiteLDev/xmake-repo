#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorGlobal {
// functions
// NOLINTBEGIN
MCAPI void addActorGlobalComponents(::EntityContext& entity);

MCAPI void removeActorGlobalComponents(::EntityContext& entity);
// NOLINTEND

} // namespace ActorGlobal
#endif // @header-generator platform
