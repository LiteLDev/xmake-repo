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
#else // @header-generator platform
#endif // @header-generator platform
struct LocalMoveVelocityComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct SquidFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class SquidPreAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static void
    _doSquidPreAiStepSystem(::StrictEntityContext const&, ::LocalMoveVelocityComponent& localMoveVelocityComponent);

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
