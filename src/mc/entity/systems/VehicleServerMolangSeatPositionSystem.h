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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _tickActor(
#else // @header-generator platform
    MCAPI static void _tickActor(
#endif // @header-generator platform
        ::StrictEntityContext&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::PassengerComponent const&,
        ::ActorOwnerComponent&,
        ::PositionPassengerRequestComponent&,
        ::ViewT<StrictEntityContext, const RideableComponent, const VehicleComponent>
#else // @header-generator platform
        ::PassengerComponent const&          passengerComponent,
        ::ActorOwnerComponent&               actorComponent,
        ::PositionPassengerRequestComponent& positionPassengerRequestComponent,
        ::ViewT<::StrictEntityContext, ::RideableComponent const, ::VehicleComponent const> vehicleView
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
