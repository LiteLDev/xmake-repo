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
struct TickingSystemWithInfo;
struct WitchFlagComponent;
// clang-format on

class WitchPreAIStepSystem {
public:
    // WitchPreAIStepSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, WitchFlagComponent>,
        ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
