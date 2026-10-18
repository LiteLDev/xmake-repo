#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace MoveTowardsClosestSpaceSystem {
// functions
// NOLINTBEGIN
MCAPI ::std::array<::TickingSystemWithInfo, 2> createSystems(bool isClientSide);
// NOLINTEND

} // namespace MoveTowardsClosestSpaceSystem
#endif // @header-generator platform
