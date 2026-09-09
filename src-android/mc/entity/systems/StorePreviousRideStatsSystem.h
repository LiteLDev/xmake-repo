#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct LocalPlayerComponent;
struct PassengerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

class StorePreviousRideStatsSystem {
public:
    // StorePreviousRideStatsSystem inner types define
    using PassengerView = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, LocalPlayerComponent, PassengerComponent>,
        const StateVectorComponent,
        VanillaClientGameplayComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _storePreviousRideStats(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&,
        ::VanillaClientGameplayComponent&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
