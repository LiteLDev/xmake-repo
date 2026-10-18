#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, LocalPlayerComponent, PassengerComponent>,
        const StateVectorComponent,
        VanillaClientGameplayComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::LocalPlayerComponent, ::PassengerComponent>,
        ::StateVectorComponent const,
        ::VanillaClientGameplayComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _storePreviousRideStats(
#else // @header-generator platform
    MCAPI static void _storePreviousRideStats(
#endif // @header-generator platform
        ::StrictEntityContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::StateVectorComponent const&,
        ::VanillaClientGameplayComponent&
#else // @header-generator platform
        ::StateVectorComponent const&     stateVectorComponent,
        ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
