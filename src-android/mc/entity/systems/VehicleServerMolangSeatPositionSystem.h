#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class RideableComponent;
class StrictEntityContext;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerMolangSeatPositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickActor(
        ::StrictEntityContext&,
        ::PassengerComponent const&,
        ::ActorOwnerComponent&,
        ::PositionPassengerRequestComponent&,
        ::ViewT<StrictEntityContext, const RideableComponent, const VehicleComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
