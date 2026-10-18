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
struct ActorRotationComponent;
struct MobBodyRotationComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ShulkerFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ShulkerPostAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static void _doShulkerPostAiStepSystem(
        ::StrictEntityContext const&,
        ::ActorRotationComponent&   actorRotationComponent,
        ::MobBodyRotationComponent& mobBodyRotationComponent,
        ::StateVectorComponent&     stateVectorComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
