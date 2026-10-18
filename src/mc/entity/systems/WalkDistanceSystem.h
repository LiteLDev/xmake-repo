#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MoveRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WalkDistComponent;
// clang-format on

namespace WalkDistanceSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void updateWalkDistance(
    ::MoveRequestComponent const& moveRequest,
    ::StateVectorComponent const& state,
    ::WalkDistComponent&          walkDistance
);
// NOLINTEND

} // namespace WalkDistanceSystem
#endif // @header-generator platform
