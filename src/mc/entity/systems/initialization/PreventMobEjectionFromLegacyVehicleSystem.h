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
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct AABBShapeComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct EntityNeedsInitializeFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
struct PassengerComponent;
struct TickingSystemWithInfo;
// clang-format on

class PreventMobEjectionFromLegacyVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _preventEjectionIfNeeded(
        ::StrictEntityContext&,
        ::PassengerComponent const&,
        ::AABBShapeComponent const&,
        ::ViewT<StrictEntityContext, const RideableComponent> const&,
        ::EntityModifier<KeepRidingEvenIfTooLargeForVehicleFlagComponent>&
#else // @header-generator platform
    MCAPI static void _preventEjectionIfNeeded(
        ::StrictEntityContext&                                               strictEntityContext,
        ::PassengerComponent const&                                          passengerComponent,
        ::AABBShapeComponent const&                                          aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::RideableComponent const> const&     vehicleView,
        ::EntityModifier<::KeepRidingEvenIfTooLargeForVehicleFlagComponent>& modifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
