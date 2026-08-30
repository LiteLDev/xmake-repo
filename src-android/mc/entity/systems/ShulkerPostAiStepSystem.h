#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct ShulkerFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ShulkerPostAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
