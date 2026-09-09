#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct PlayerPositionModeComponent;
struct TickingSystemWithInfo;
// clang-format on

class ResetPositionModeSystem {
public:
    // ResetPositionModeSystem inner types define
    using ViewType =
        ::ViewT<StrictEntityContext, Include<InterpolateMovementNeededComponent>, PlayerPositionModeComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createResetPositionModeSystem();
    // NOLINTEND
};
