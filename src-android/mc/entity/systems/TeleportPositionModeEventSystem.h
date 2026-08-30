#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct PlayerComponent;
struct PlayerPositionModeComponent;
struct TickingSystemWithInfo;
// clang-format on

class TeleportPositionModeEventSystem {
public:
    // TeleportPositionModeEventSystem inner types define
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, PlayerComponent>,
        ActorOwnerComponent,
        const PlayerPositionModeComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createTeleportPositionModeEventSystem();
    // NOLINTEND
};
