#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct PassengerComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class PassengerFreezeMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void freezeMovement(::StrictEntityContext&, ::StateVectorComponent& stateVector);
#endif // @header-generator platform
    // NOLINTEND
};
