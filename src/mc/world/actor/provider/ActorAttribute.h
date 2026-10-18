#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace ActorAttribute {
// functions
// NOLINTBEGIN
MCAPI int getHealth(::EntityContext const& provider);

MCAPI int getMaxHealth(::EntityContext const& provider);
// NOLINTEND

} // namespace ActorAttribute
#endif // @header-generator platform
