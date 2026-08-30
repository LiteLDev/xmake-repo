#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct AABBShapeComponent;
struct ActorMovementTickNeededComponent;
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
struct PassengerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class RemovePassengersTooLargeForVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _removePassengersTooLargeForVehicle(
        ::StrictEntityContext&,
        ::PassengerComponent const&,
        ::AABBShapeComponent const&,
        ::ViewT<StrictEntityContext, const RideableComponent> const&,
        ::EntityModifier<StopRidingRequestComponent>&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
