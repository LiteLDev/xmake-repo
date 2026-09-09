#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class NavigationComponent;
class StrictEntityContext;
struct MobTravelComponent;
struct TickingSystemWithInfo;
// clang-format on

class NavigationTravelSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createNavigationTravelSystem();
    // NOLINTEND
};
