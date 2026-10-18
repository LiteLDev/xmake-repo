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
class ActorOwnerComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct InterpolateMovementNeededComponent;
struct PlayerComponent;
struct PlayerPositionModeComponent;
struct TickingSystemWithInfo;
// clang-format on

class TeleportPositionModeEventSystem {
public:
    // TeleportPositionModeEventSystem inner types define
    using ViewType = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, PlayerComponent>,
        ActorOwnerComponent,
        const PlayerPositionModeComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::PlayerComponent>,
        ::ActorOwnerComponent,
        ::PlayerPositionModeComponent const>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createTeleportPositionModeEventSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createTeleportPositionModeEventSystem();
#endif // @header-generator platform
    // NOLINTEND
};
