#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
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
struct FallDistanceComponent;
struct InterpolateMovementNeededComponent;
struct MovementInterpolatorComponent;
struct PlayerPositionModeComponent;
struct ServerPlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class TeleportInterpolatorResetSystem {
public:
    // TeleportInterpolatorResetSystem inner types define
    using ViewType = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, ServerPlayerComponent>,
        Optional<MovementInterpolatorComponent>,
        const PlayerPositionModeComponent,
        FallDistanceComponent,
        StateVectorComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::ServerPlayerComponent>,
        ::Optional<::MovementInterpolatorComponent>,
        ::PlayerPositionModeComponent const,
        ::FallDistanceComponent,
        ::StateVectorComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createTeleportInterpolatorResetSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createTeleportInterpolatorResetSystem();
#endif // @header-generator platform
    // NOLINTEND
};
