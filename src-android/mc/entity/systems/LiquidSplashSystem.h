#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct PostSplashGameEventRequestComponent;
struct TickingSystemWithInfo;
struct WaterSplashEffectRequestComponent;
// clang-format on

struct LiquidSplashSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
