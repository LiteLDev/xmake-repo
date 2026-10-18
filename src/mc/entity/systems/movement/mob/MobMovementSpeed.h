#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementSpeed {
// functions
// NOLINTBEGIN
MCAPI void forSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);
// NOLINTEND

} // namespace MobMovementSpeed
#endif // @header-generator platform
