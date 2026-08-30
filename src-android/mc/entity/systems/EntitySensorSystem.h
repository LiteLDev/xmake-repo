#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySensorComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorTickedComponent;
struct CurrentTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class EntitySensorSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
