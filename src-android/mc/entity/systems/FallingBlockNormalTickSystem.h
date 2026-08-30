#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ITickDelegate;
class StrictEntityContext;
template<typename... T0> class Include;
struct FallingBlockFlagComponent;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

class FallingBlockNormalTickSystem {
public:
    // FallingBlockNormalTickSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, FallingBlockFlagComponent>,
        ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
