#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class RemovePassengersWithoutSeatSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void removePassengersWithoutSeat(
#else // @header-generator platform
    MCAPI static void removePassengersWithoutSeat(
#endif // @header-generator platform
        ::StrictEntityContext&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::RideableComponent const&,
        ::VehicleComponent&,
        ::EntityModifier<StopRidingRequestComponent>&
#else // @header-generator platform
        ::RideableComponent const&                      rideableComponent,
        ::VehicleComponent&                             vehicleComponent,
        ::EntityModifier<::StopRidingRequestComponent>& modifier
#endif // @header-generator platform
    );
    // NOLINTEND
};
