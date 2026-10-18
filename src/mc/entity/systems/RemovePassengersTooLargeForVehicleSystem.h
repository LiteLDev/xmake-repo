#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Exclude;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct AABBShapeComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorMovementTickNeededComponent;
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct PassengerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class RemovePassengersTooLargeForVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _removePassengersTooLargeForVehicle(
        ::StrictEntityContext&,
        ::PassengerComponent const&,
        ::AABBShapeComponent const&,
        ::ViewT<StrictEntityContext, const RideableComponent> const&,
        ::EntityModifier<StopRidingRequestComponent>&
#else // @header-generator platform
    MCAPI static void _removePassengersTooLargeForVehicle(
        ::StrictEntityContext&                                           strictEntityContext,
        ::PassengerComponent const&                                      passengerComponent,
        ::AABBShapeComponent const&                                      aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::RideableComponent const> const& vehicleView,
        ::EntityModifier<::StopRidingRequestComponent>&                  modifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
