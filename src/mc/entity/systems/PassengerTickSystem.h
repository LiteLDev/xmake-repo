#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct PassengerTickSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createMobPostPassengerTickSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createMobPostPassengerTickSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPlayerPostPassengerTickSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPlayerPostPassengerTickSystem();
#endif // @header-generator platform
    // NOLINTEND
};
