#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct FallFlyTicksComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class GlideInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createGlideInputSystem();

    MCNAPI static void doGlideInputSystem(
        ::MovementAbilitiesComponent const&,
        ::MoveInputComponent const&,
        ::ActorDataFlagComponent const&,
        ::FallFlyTicksComponent&,
        ::StateVectorComponent&
    );
    // NOLINTEND
};
