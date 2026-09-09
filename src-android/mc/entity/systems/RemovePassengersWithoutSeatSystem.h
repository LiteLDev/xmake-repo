#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class RemovePassengersWithoutSeatSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void removePassengersWithoutSeat(
        ::StrictEntityContext&,
        ::RideableComponent const&,
        ::VehicleComponent&,
        ::EntityModifier<StopRidingRequestComponent>&
    );
    // NOLINTEND
};
