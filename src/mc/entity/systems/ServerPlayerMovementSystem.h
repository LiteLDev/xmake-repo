#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
struct FallDistanceComponent;
struct StateVectorComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct ServerPlayerMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createClearPlayerActionComponentSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createClearPlayerActionComponentSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPostTravelSystems();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createServerPlayerMovementFinalSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    MCNAPI static ::TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();
#endif // @header-generator platform
    // NOLINTEND
};
