#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

struct PassengerTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createMobPostPassengerTickSystem();

    MCNAPI static ::TickingSystemWithInfo createPlayerPostPassengerTickSystem();
    // NOLINTEND
};
