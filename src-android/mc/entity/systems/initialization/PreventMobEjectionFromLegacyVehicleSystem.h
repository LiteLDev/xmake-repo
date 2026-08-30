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
struct AABBShapeComponent;
struct EntityNeedsInitializeFlagComponent;
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
struct PassengerComponent;
struct TickingSystemWithInfo;
// clang-format on

class PreventMobEjectionFromLegacyVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _preventEjectionIfNeeded(
        ::StrictEntityContext&,
        ::PassengerComponent const&,
        ::AABBShapeComponent const&,
        ::ViewT<StrictEntityContext, const RideableComponent> const&,
        ::EntityModifier<KeepRidingEvenIfTooLargeForVehicleFlagComponent>&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
