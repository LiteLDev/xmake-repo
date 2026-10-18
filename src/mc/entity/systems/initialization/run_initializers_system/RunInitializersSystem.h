#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct TickingSystemWithInfo;
// clang-format on

namespace RunInitializersSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create(::EntitySystems& systems);
// NOLINTEND

} // namespace RunInitializersSystem
#endif // @header-generator platform
