#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct LocalPlayerComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

struct VehicleInputSwitchRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
