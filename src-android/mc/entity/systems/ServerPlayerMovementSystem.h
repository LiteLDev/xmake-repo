#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
struct FallDistanceComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ServerPlayerMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createClearPlayerActionComponentSystem();

    MCNAPI static ::TickingSystemWithInfo createPostTravelSystems();

    MCNAPI static ::TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    MCNAPI static ::TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();
    // NOLINTEND
};
