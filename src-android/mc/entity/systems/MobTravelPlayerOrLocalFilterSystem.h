#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ControlledByLocalInstanceComponent;
struct MobTravelComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

struct MobTravelPlayerOrLocalFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
