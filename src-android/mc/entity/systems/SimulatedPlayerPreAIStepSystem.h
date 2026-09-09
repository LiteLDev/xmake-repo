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
struct SimulatedPlayerFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class SimulatedPlayerPreAIStepSystem {
public:
    // SimulatedPlayerPreAIStepSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, SimulatedPlayerFlagComponent>,
        ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doSimulatedPlayerPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent&);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
